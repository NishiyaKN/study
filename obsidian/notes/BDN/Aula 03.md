### MongoDB
![[Pasted image 20240413173041.png]]
### MQL
- Linguagem usada para manipular dados no MongoDB. 
- Semelhante à estrutura de documentos JSON
##### Comandos úteis
``` 
// Acessar o shell do mongodb
mongosh

// Exibe a lista de BD do servidor
SHOW dbs
SHOW databases

// Seleciona um BD existente ou cria caso não exista
USE uscs
```
### Tipos de dados
Exemplos utilizando a collection de estudantes:
- String
![[Pasted image 20240413174400.png]]
- Int e Double
![[Pasted image 20240413174429.png]]
- Boolean
![[Pasted image 20240413174444.png]]
- Array (valores simples do mesmo tipo)
![[Pasted image 20240413174507.png]]
- Array de objetos
![[Pasted image 20240413174535.png]]
- Null
![[Pasted image 20240413174618.png]]
- Objeto (embedded document, ou subdocumento)
![[Pasted image 20240413174644.png]]
- ObjectId (identificador exclusivo de cada documento)
![[Pasted image 20240413174744.png]]
- Date
![[Pasted image 20240413174822.png]]
___
### CRUD
![[Pasted image 20240413184342.png]]
##### Inserção
**Um documento**
![[Pasted image 20240413175115.png]]
**Vários documentos**
![[Pasted image 20240413175209.png]]
##### Atualização
**Um documento** 
![[Pasted image 20240413175424.png]]
![[Pasted image 20240413180702.png]]
(Atualiza o nome e adiciona um par de chave valor sexo)
![[Pasted image 20240413180609.png]]
###### Operadores de atualização
![[Pasted image 20240413180809.png]]
![[Pasted image 20240413180848.png]]
![[Pasted image 20240413180949.png]]
![[Pasted image 20240413181012.png]]
![[Pasted image 20240413181028.png]]
![[Pasted image 20240413181054.png]]
![[Pasted image 20240413181137.png]]
![[Pasted image 20240413181202.png]]
![[Pasted image 20240413181324.png]]
![[Pasted image 20240413181333.png]]
![[Pasted image 20240413181343.png]]
![[Pasted image 20240413181400.png]]
![[Pasted image 20240413181522.png]]
![[Pasted image 20240413181533.png]]
- **Múltiplos documentos**
![[Pasted image 20240413183347.png]]1
- **Substituição de um documento inteiro
![[Pasted image 20240413183440.png]]
### Exclusão
![[Pasted image 20240413183459.png]]
### Consulta
![[Pasted image 20240413183536.png]]
![[Pasted image 20240413183633.png]]
![[Pasted image 20240413183724.png]]
##### Operadores de comparação
![[Pasted image 20240413183858.png]]
![[Pasted image 20240413183904.png]]
![[Pasted image 20240413183911.png]]
![[Pasted image 20240413183916.png]]
![[Pasted image 20240413183922.png]]
![[Pasted image 20240413184000.png]]
![[Pasted image 20240413184009.png]]
![[Pasted image 20240413184021.png]]
##### Consultas em arrays
![[Pasted image 20240413184104.png]]
![[Pasted image 20240413184134.png]]
![[Pasted image 20240413184236.png]]
![[Pasted image 20240413184244.png]]
![[Pasted image 20240413184252.png]]
![[Pasted image 20240413184300.png]]
![[Pasted image 20240413184306.png]]