Frameworks:
- Express (para Node.js)
- Django 
- Ruby on Rails
- Spring Boot

- Geralmente código backend é executado em servers, como o apache, Nginx e Tomcat.
- Frequentemente interage com o banco de dados (MySQL, PostgreSQL, MongoDB, Cassandra)
___
### APIs
APIs permitem a comunicação entre frontend e backend, podendo adotar padrões como REST e GraphQL
- Conjunto de regras e protocolos que permitem a **comunicação e interação** entre diferentes softwares
- Tipo um **contrato entre dois programas**: um programa define como suas funções, classes e métodos podem ser acessados e utilizados por outros programas
- Permite usar recursos de um software sem precisar entender todos os detalhes internos do funcionamento dele
- Promove a reutilização de código, integração de sistemas, expansão de funcionalidades, etc
___
### REST API
Representational State Transfer, é um estilo arquitetural para criar serviços web
- Abordagem popular para construir APIs da web de maneira padronizada, eficiente e escalável
#### Princípios
1. Estado representacional
- Dados são representados em JSON ou XML e identificados por URLs únicas
- Cada URL representa um recurso específico

2. Operações HTTP
- GET: obter info
- POST: criar novos recursos
- PUT: atualizar recursos
- DELETE: remover recursos

3. Sem Estado (Stateless)
- Cada requisição para o server contém todoas as info necessárias para o processamento da requisição
- O server não mantém info de estado sobre a sessão do cliente

4. Cache
- As respostas da API podem ser armazenadas em cache para melhorar o desempenho.

5. Interface uniforme
- Interface uniforme para acessar e manipular recursos

6. Sistema Cliente-Servidor
- Separação clara entre o cliente e o servidor

#### Implementação
Envolve a criação de **ENDPOINTS** que correspondem a diferentes recursos e operações (GET,POST,PUT,DELETE), seguindo os princípios da arquitetura RESTful

___