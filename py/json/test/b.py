import json
 
filename = 'users.json'
 
# Read JSON file
fp = open(filename)
listObj = json.load(fp)
 
listObj.append({
  "Name": "Person_5",
  "Age": 33,
  "Email": "33@gmail.com"
})
 
json_file = open(filename, 'w')
json.dump(listObj, json_file, 
                    indent=4,  
                    separators=(',',': '))
 
print('Successfully appended to the JSON file')
