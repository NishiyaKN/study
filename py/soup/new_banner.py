from bs4 import BeautifulSoup
import requests
import pandas as pd

filename = '/home/yori/study/py/soup/counter_normal.txt'
auth_file = '/home/yori/.config/tk/dc'

def main():
    url = 'https://bluearchive.wiki/wiki/Banner_List_(Global)'
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'lxml')
    global table
    table = soup.find('table')
    global table_rows
    table_rows = table.find_all('tr')
    counter_today = len(table_rows)
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
    except Exception:
        print("Could not open file to write")
    create_dataframe()

def create_dataframe():
    table_headers = table.find_all('th') # returns a bs4 object
    table_headers_text = [title.text.strip() for title in table_headers] # returns string list

    global df
    df = pd.DataFrame(columns = table_headers_text)

    for row in table_rows[1:]:
        row_data = row.find_all('td')
        individual_row_data = [data.text.strip() for data in row_data]

        length = len(df)
        df.loc[length] = individual_row_data

    notify_discord()
    # print(df.loc[file_counter:])

def notify_discord():
    with open(auth_file,'r') as f:
        auth = f.read()
    url = 'https://discord.com/api/v9/channels/1180832500403155095/messages' 
    headers = {
            "Authorization" : auth.strip()
    }
    for i in range(file_counter, counter_today - 1):
        character = df.loc[i]['Character'].rstrip('rerun')
        period = df.loc[i]['Period']
        payload = {
                "content": "New banner: " + character + ". Period: " + period
        }
        res = requests.post(url, payload, headers=headers)

if __name__ == '__main__':
    main()

