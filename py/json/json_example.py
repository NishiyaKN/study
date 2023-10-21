import json
from datetime import datetime

date = datetime.today().strftime('%Y-%m-%d')
filename = "a.json"

# Checks if the file exists
try:
    open(filename,'x')
    file = open(filename,'w')
    file.write("[]")
    print("Created new", filename)
except:
    print("File",filename,"exists")

print("Updating " + filename)
price = "R$ 3500.12"
raw_data = {
        "date": date,
        "price": price
}

# Opens the file, copies it's contents to file_data, append the data to it
file = open(filename)
file_data = json.load(file)
file_data.append(raw_data)

# Opens the file, rewrites with the new data
new_file_data = open(filename, 'w')
json.dump(file_data, new_file_data, indent=4, separators=(',',': '))

file.close()
