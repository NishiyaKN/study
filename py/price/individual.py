from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.common.by import By

from datetime import datetime
import json
import time

filename = "individual_price.json"
try:
    open(filename,"x")
    file = open(filename,'w')
    file.write("[]")
    print("Created",filename,"file")
except:
    print(filename,"file exists")

today = datetime.today().strftime('%Y-%m-%d')
# file = open(filename,"r")
# content = file.read()
# file.close()

# if(content.count(today) == 0):
# print("New day, new query")
options = Options()
options.add_argument("--headless")


def get_price(num):
    browser = webdriver.Firefox(options=options)
    match num:
        case 0:
            component = "RX 6600"
            browser.get('https://www.terabyteshop.com.br/produto/19808/placa-de-video-asrock-radeon-rx-6600-challenger-d-8gb-gddr6-fsr-ray-tracing-90-ga2rzz-00uanf')
        case 1:
            component = "RX 6500 XT"
            browser.get('https://www.terabyteshop.com.br/produto/20245/placa-de-video-powercolor-radeon-rx-6500-xt-4gb-gddr6-fsr-ray-tracing-axrx-6500-xt-4gbd6-dh')
        case 2:
            component = "5 5600"
            browser.get('https://www.terabyteshop.com.br/produto/20788/processador-amd-ryzen-5-5600-35ghz-44ghz-turbo-6-cores-12-threads-cooler-wraith-stealth-am4-100-100000927box')
        case 3:
            component = "5 5500"
            browser.get('https://www.terabyteshop.com.br/produto/20782/processador-amd-ryzen-5-5500-36ghz-42ghz-turbo-6-cores-12-threads-cooler-wraith-stealth-am4-100-100000457box')
        case 4:
            component = "5 4600G"
            browser.get('https://www.terabyteshop.com.br/produto/21317/processador-amd-ryzen-5-4600g-37ghz-42ghz-turbo-6-cores-12-threads-cooler-wraith-stealth-am4-100-100000147box')
        
    print("Accessing the website for",component)
    time.sleep(10)
    data = browser.find_element(By.ID, 'valVista')
    data = data.text
    if data == "R$ 0,00":
        print("Error, try again later")
        browser.close()
        exit()
    else: 
        print("Price found, writing...")
        data = data.split(" ")[1].replace(".","").replace(",",".")
        time.sleep(10)
        new_data = {
                "date":today,
                "price":data
        }
        file = open(filename)
        file_data = json.load(file)
        # if component not in file_data:
        #     file_data[component] = []  # Create an empty list if it doesn't exist
        file_data[component].append(new_data)

        new_file_data = open(filename, 'w')
        json.dump(file_data,new_file_data, indent=4, separators=(',',': '))
        file.close()
        new_file_data.close()

        browser.close()

for i in range(0,5):
    get_price(i)
