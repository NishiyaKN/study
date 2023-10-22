import json

filename = "multiple.json"
try:
    open(filename,'x')
    print("File doesnt exist")
    with open(filename,'w') as file:
        file.write("[]")
except:
    print()
 
today = "2023-10-21"
price = 1234.51


new_data ={
        "date":today,
        "price":price
        }
file = open(filename)
file_data = json.load(file)
file_data["RX 6600"].append(new_data)

new_file_data = open(filename, 'w')
json.dump(file_data,new_file_data, indent=4, separators=(',',': '))
file.close()

