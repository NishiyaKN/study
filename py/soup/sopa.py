from bs4 import BeautifulSoup
import requests

def main():
    request_page()

def request_page():
    url = 'https://bluearchive.wiki/wiki/Banner_List_(Global)'
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html')
    limited = soup.find_all('tr', class_ ='limited')
    counter_today = len(limited)
    query_counter(counter_today)

def query_counter(counter_today):
    try:
        open("counter.txt","x")
        print("Creating counter file...")
    except:
        pass
    file = open("counter.txt","r")
    file_counter = file.read()
    file.close()
    if file_counter != counter_today:
        print("New value found")
        update_counter(counter_today)
        new_banner
    else:
        print("Nothing to update")

def update_counter(counter_today):
    try:
        file = open("counter.txt","w")
        file.write(str(counter_today))
        print("Updated counter")
        file.close()
    except:
        print("Could not open file to write")

if __name__ == '__main__':
    main()
