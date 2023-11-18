import pandas as pd

# dictionary
vendas = {
         'data': ['15/02/2021', '16/02/2021'],
         'valor': [500, 300],
         'produto': ['feijao', 'arroz'],
         'qtde': [50, 70],
         }
# transform dict to df
vendas1_df = pd.DataFrame(vendas)

print(vendas1_df)
# display(vendas_df) # only works on jupyter

### DATA IMPORT
vendas_df = pd.read_excel('Vendas.xlsx') # import from excel
print(vendas_df)

### DATA VIZ
print(vendas_df.head(10)) # shows the first 10 rows, default is 5
print(vendas_df.shape) # shows how many rows and columns it have (93910, 7)
print(vendas_df.describe()) # shows datas such as count, mean, std, min, max for each numerical column

### GET COLUMNS
produtos = vendas_df['Produto'] # produtos is a pandas Series (a dataframe column)
produtos_e_lojas = vendas_df[['Produto', 'ID Loja']] # this is a dataframe

print(produtos)
print(produtos_e_lojas)

### GET ROW
print(vendas_df.loc[0]) # get row from index 0
print(vendas_df.loc[0:5]) # get row from index 0 to 5

# Conditional / filter
# df.loc[rows, columns]
print(vendas_df.loc[vendas_df['ID Loja'] == 'Norte Shopping']) # get all rows where 'ID Loja' is 'Norte Shopping'
print(vendas_df.loc[vendas_df['ID Loja'] == 'Norte Shopping', ["ID Loja", "Produto", "Quantidade"]]) # same as above but get only from the 3 columns specified
print(vendas_df.loc[1,'Produto']) # get the item from row 1 column Produto

### ADD COLUMNS

# From existing column
vendas_df['Comissao'] = vendas_df["Valor Final"] * 0.05 # if exists, overwrite it's value, otherwise it is created
print(vendas_df)

# New column
vendas_df.loc[:, 'Imposto'] = 0 # create column Imposto and fill all the lines with 0 (: == *)

### ADD ROW
# Append an xlsx to another 
vendas_dez_df = pd.read_excel("Vendas - Dez.xlsx")
vendas_df = vendas_df.Append(vendas_dez_df)

### DELETE ROW
vendas_df = vendas_df.drop("Imposto", axis=1) # axis 1 = column, it will delete the entire 'Imposto' column 
vendas_df = vendas_df.drop(0, axis=0) # axis 0 = row, delete row 0
# if axis is not specified, it will default to delete a row

### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### 

### DELETE ALL EMPTY ROWS 
vendas_df = vendas_df.dropna(how='all')

### DELETE ALL EMPTY COLUMNS 
vendas_df = vendas_df.dropna(how='all', axis=1)

### DELETE ROW IF THERE IS AT LEAST ONE EMPTY VALUE
vendas_df = vendas_df.dropna()

### FILL EMPTY FIELDS
# FILL WITH COLUMN AVERAGE
vendas_df['Comissao'] = vendas_df['Comissao'].fillna(vendas_df['Comissao'].mean())

### FILL WITH LAST VALUE ABOVE 
vendas_df = vendas_df.ffill()
