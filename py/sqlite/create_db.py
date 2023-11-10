import sqlite3
con = sqlite3.connect("db")

cur = con.cursor()
# cur.execute("Create table contato(nome,endereco,telefone)")
res = cur.execute("select name from sqlite_master")
res.fetchone()

