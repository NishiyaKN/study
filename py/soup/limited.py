from bs4 import BeautifulSoup
import requests
import pandas as pd

filename = 'counter_limited.txt'
file_counter = 0

def main():
    url = 'https://bluearchive.wiki/wiki/Banner_List_(Global)'
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'lxml')
    global table
    table = soup.find('table')
    global limited 
    limited = table.find_all('tr', class_ ='limited')
    counter_today = len(limited)
    query_counter(counter_today)

def query_counter(counter_today):
    try:
        with open(filename,"x") as f:
            print(f"Creating {filename} file...")
    except Exception:
        pass

    with open(filename, "r") as f:
        global file_counter
        file_counter = f.read()
        # if file_counter is empty, it will throw an error trying to parse to int
        if file_counter == "":
            print("Empty file, writing new value")
            update_counter(counter_today)
        elif int(file_counter) != counter_today: 
            print("New value found")
            update_counter(counter_today)
        else:
            print("Nothing to update")

def update_counter(counter_today):
    try:
        with open(filename, 'w') as f:
            f.write(str(counter_today))
            print("Updated counter")
        create_dataframe()
    except Exception:
        print("Could not open file to write")

def create_dataframe():
    table_headers = table.find_all('th') # returns a bs4 object
    table_headers_text = [title.text.strip() for title in table_headers] # returns string list

    global df
    df = pd.DataFrame(columns = table_headers_text)

    for row in limited:
        row_data = row.find_all('td')
        individual_row_data = [data.text.strip() for data in row_data]
        
        length = len(df)
        df.loc[length] = individual_row_data

    print(df.loc[file_counter:])

if __name__ == '__main__':
    main()
