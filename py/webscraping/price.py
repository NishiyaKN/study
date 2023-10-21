from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.common.by import By

from datetime import datetime
import time

try:
    open("log.txt","x")
    print("Creating log file...")
except:
    print("Updating log file...")

today = datetime.today().strftime('%Y-%m-%d')
log = open("log.txt","r")
content = log.read()
log.close()

if(content.count(today) == 0):
    print("New day, new query")
    options = Options()
    options.add_argument("--headless")

    browser = webdriver.Firefox(options=options)
    browser.get('https://www.terabyteshop.com.br/produto/18613/monte-seu-pc-gamer-plataforma-amd-ryzen-5000-full-custom?spec=MlEQevN17%2BBbzJSFEAr42lJCN3BJOWhMVXI5OXpGc1NQY0dGL1VCUERSckdhWWZpdVdQSG9FNG5aNGlKMDNuaStTamxibDhqNDNjZDR3NHFWR0l4SE54SUNubUZkRjgyL1J1WlRYQ1ZhZHhqVHBsNmJaa2Z5blkxcCthdHE5SURrYzBJNjJQQjg4YU1sN3VaOUg5eGRIZXI5RUNvSGxNbG01WElSQkI1cFgzSGlUNUx5dG1ueHZYWmgwRmRGb3R5TVRnTlZBeHk5Ym41SUZBTkxkWWRJSjZTQzViUm9IcWlGaVIwMzM4cENEMEFMMHU5ZDBkMXNtUEt0Yi9SbXBpNFE1WE0xbzJ6MmI5RlorYXQ0QWtZU2JoSnJyZGdMYVlaZCswaHZkSjJOVnNiZC90MmpndW1jNUxhcDRqK2JYdjdqMVBiT0xQakFmVVJ5TzFVbDNXTHRlZkZKV2hvZ0JmeGJwOXN2alQ5UVlVNjVCOWg1TzhHSWtVV2QyZG1LYXR6SWY0ODdkVndIT01VQUxDNU45Z2p0TUkrbUtjYTVJaWxBbWJvT0E9PQ%3D%3D')

    print("Accessing the website")
    time.sleep(10)
    total = browser.find_element(By.ID, 'valVista')
    total_text = total.text
    if total == "R$ 0,00":
        print("Error, try again later")
        browser.close()
    else: 
        print("Price found, writing...")
        time.sleep(10)
        log = open("log.txt","a")
        log.writelines([today + "\n", "Total: " + total_text + "\n", "------------"]);
        log.close()
        log = open("log.txt","r")
        content = log.read()
        browser.close()
        print(content)
        log.close()
else:
    print("Already updated today\n")
