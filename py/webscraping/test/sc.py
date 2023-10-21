from selenium import webdriver
import time
# from selenium.webdriver.chrome.service import Service
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.common.by import By
import subprocess
from datetime import date

today = date.today()
options = Options()
options.add_argument("--headless")

browser = webdriver.Firefox(options=options)
browser.get('https://www.terabyteshop.com.br/produto/18613/monte-seu-pc-gamer-plataforma-amd-ryzen-5000-full-custom?spec=MlEQevN17%2BBbzJSFEAr42lJCN3BJOWhMVXI5OXpGc1NQY0dGL1VCUERSckdhWWZpdVdQSG9FNG5aNGlKMDNuaStTamxibDhqNDNjZDR3NHFWR0l4SE54SUNubUZkRjgyL1J1WlRYQ1ZhZHhqVHBsNmJaa2Z5blkxcCthdHE5SURrYzBJNjJQQjg4YU1sN3VaOUg5eGRIZXI5RUNvSGxNbG01WElSQkI1cFgzSGlUNUx5dG1ueHZYWmgwRmRGb3R5TVRnTlZBeHk5Ym41SUZBTkxkWWRJSjZTQzViUm9IcWlGaVIwMzM4cENEMEFMMHU5ZDBkMXNtUEt0Yi9SbXBpNFE1WE0xbzJ6MmI5RlorYXQ0QWtZU2JoSnJyZGdMYVlaZCswaHZkSjJOVnNiZC90MmpndW1jNUxhcDRqK2JYdjdqMVBiT0xQakFmVVJ5TzFVbDNXTHRlZkZKV2hvZ0JmeGJwOXN2alQ5UVlVNjVCOWg1TzhHSWtVV2QyZG1LYXR6SWY0ODdkVndIT01VQUxDNU45Z2p0TUkrbUtjYTVJaWxBbWJvT0E9PQ%3D%3D')

# Print out the result
time.sleep(10)
price = browser.find_element(By.ID, 'valVista')
price_text = price.text
if price_text == "R$ 0,00":
    print("Error, try again later")
    browser.close()
else: 
    bash_command = f'echo -e "{today}\n{price_text}\n------------" >> /home/yori/Documents/price.txt'
    subprocess.run(bash_command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

    print(today)
    print(price.text)

    # Close the browser
    time.sleep(10)
    browser.close()
