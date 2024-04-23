- Um "database" (banco de dados) é o principal contêiner para armazenamento de dados.
- Dentro de um banco de dados no MongoDB, você pode ter várias "collections" (coleções), que são agrupamentos de documentos.
- Para criar um novo database basta fazer o comando use.
- Mas o database só será efetivamente criado após ter sido criado uma collection.
- Para criar uma collection execute o comando `db.createCollection("nomeDaColecao")`
- Adiciona `_id` automaticamente
![[Pasted image 20240413201941.png]]
![[Pasted image 20240413201949.png]]
___
### Insert
```json
db.alunos.insertOne({
	nome: "Ana Clara",
	RA: 2638
})
```

```json
db.alunos.insertMany([
	{nome: "Paulo Silva", RA: 2301},
	{nome: "Maria Lima", RA: 2352},
])
```

### Find
```json
db.alunos.find() // retorna tudo
```

```json
db.alunos.find({nome:"Paulo Silva"})
```

```json
db.alunos.find({RA:{$gt: 2500}})
```

```json
db.minhaColecao.find({}, { campo1: 1, campo2: 1, campo3: 0, campo4: false })
```
- A primeira chaves vazia { } que todos os documentos serão selecionados. Este comando retorna apenas os campos `campo1` e `campo2` dos documentos selecionados.
![[Pasted image 20240420171306.png]]
```json
db.minhaColecao.find().sort({ RA: -1 }) // Decrescente
```
### Update
```json
db.alunos.updateOne( // primeira instancia encontrada apenas
	{ nome: { $eq: "Paulo Silva"} },
	{ $set: { RA : 1234 } }
)
```

```json
db.alunos.updateMany( // todos
	{},
	{ $set: { Pais: "Brasil" } }
)
```
j
### Delete
```json
db.alunos.deleteOne( { nome : "Ana Clara" } ) // primeiro
```

```json
db.alunos.deleteMany( { Pais : "Brasil" } ) // primeiro
```