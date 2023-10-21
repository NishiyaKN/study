from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.common.by import By

from datetime import datetime
import json
import time

filename = "price_history.json"
try:
    open(filename,"x")
    file = open(filename,'w')
    file.write("[]")
    print("Created price_history file")
except:
    print("price_history file exists")

today = datetime.today().strftime('%Y-%m-%d')
file = open(filename,"r")
content = file.read()
file.close()

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
    if total_text == "R$ 0,00":
        print("Error, try again later")
        browser.close()
        exit()
    else: 
        print("Price found, writing...")
        total_text = total_text.split(" ")[1].replace(".","").replace(",",".")
        time.sleep(10)
        new_data = {
                "date":today,
                "price":total_text
        }
        file = open(filename)
        file_data = json.load(file)
        file_data.append(new_data)

        new_file_data = open(filename, 'w')
        json.dump(file_data,new_file_data, indent=4, separators=(',',': '))
        file.close()
        new_file_data.close()

        browser.close()
else:
    print("Already updated today\n")
