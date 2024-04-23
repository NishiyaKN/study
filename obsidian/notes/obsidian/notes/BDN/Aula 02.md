### BDNR - Orientado a Documentos
- BD NoSQL projetado para armazenar, recuperar e gerenciar informações orientadas a documento.
- Documentos são unidades **autossuficientes** de dados, geralmente estruturados em formatos como JSON, BSON ou XML.
- Cada documento contém **pares** **de** **chave-valor** que representam os dados, e pode conter estruturas aninhadas como listas e subdocumentos, permitindo representar **dados complexos e hierárquicos de forma eficiente.**
![[Pasted image 20240413152156.png]]
#### Diferenças entre Bancos de Dados Relacionais e Não Relacionais
##### Estrutura de Dados:
- BDR são baseados em tabelas com **esquemas fixos**, onde cada linha representa um registro e cada coluna um atributo desse registro.
- BDNRD utilizam documentos flexíveis, que **não exigem um esquema fixo**, permitindo que cada **documento** dentro da mesma coleção tenha uma **estrutura diferente**.
##### Esquema:
- Em BDR o **esquema** precisa ser definido **antes de inserir dados**, exigindo que todos os registros sigam essa estrutura pré-definida.
- Em BDNRD, os documentos podem ser criados **sem uma estrutura** predefinida, permitindo a f**lexibilidade nos tipos de dados e estruturas** armazenadas.
##### Relacionamentos:
- BDR gerenciam relacionamentos usando c**haves estrangeiras e junções de tabelas**.
- BDNRD tendem a incorporar dados relacionados em **documentos aninhados ou usar referências de documentos**, o reduz a necessidade de operações join.
##### Escalabilidade:
- BDR focam na escalabilidade **vertical**
- BDNRD são projetados com uma ênfase maior na escalabilidade **horizontal**
#### Vantagens
- **Flexibilidade de Esquema:** Armazena documentos **sem a necessidade de um esquema pré-definido**, grande flexibilidade para desenvolver, testar e lançar aplicações, **adapta-se** facilmente a **mudanças nos requisitos** de dados.
- **Escalabilidade:** A natureza distribuída facilita a escalabilidade **horizontal**, permitindo lidar eficientemente com grandes volumes de dados e tráfego elevado.
- **Desenvolvimento Ágil:** A correspondência direta entre objetos em código de aplicação e a representação de dados no BD pode acelerar o desenvolvimento, pois diminui o impedimento entre o modelo de dados da aplicação e a sua representação no banco de dados.
#### Desvantagens
- **Consistência dos Dados:** A flexibilidade de esquema pode levar a **inconsistências nos dados**, especialmente em aplicações grandes e complexas onde a um esquema pode se tornar necessário para manter a integridade dos dados.
- **Consultas Complexas**: OS BDNRD são eficientes para consultas diretas mas podem apresentar desafios quando se trata de **consultas muito complexas**, especialmente aquelas que exigem múltiplas junções e operações agregadas.
- **Gerenciamento de Transações**: Tradicionalmente, os BD NoSQL, não ofereciam muito suporte a **transações ACID**. Embora isso esteja mudando, com as transações multi-documentos no MongoDB por exemplo.
#### Transações ACID multi-documento
- Funcionalidade que permite que **várias operações**, que podem envolver **mais de um documento e até mais de uma coleção**, sejam executadas de forma **atômica**.
- Ou todas as operações dentro da transação são aplicadas com sucesso, ou nenhuma é, garantindo a **integridade dos dados.**
- Antes dessa funcionalidade, as operações em MongoDB eram atômicas **apenas** no nível de um **único documento.**
- O suporte a transações multi-documentos foi adicionado no MongoDB a partir da versão 4.0 (em 2018)
___
### MongoDB
- **Escalabilidade**: MongoDB suporta **sharding** automático, permitindo distribuir dados em várias máquinas para suportar cargas de leitura e escrita muito grandes.
- **Consultas Poderosas**: Suporta uma ampla gama de consultas, incluindo consultas ad-hoc, indexação, agregações e buscas geoespaciais.
- **Agilidade no Desenvolvimento**: Sua estrutura é alinhada com **objetos** em linguagens de programação, o que pode acelerar o desenvolvimento de aplicações.
- **Transações Multi-Documentos**: Suporta transações **ACID** em nível de multi-documentos, importante para aplicações que necessitam de consistência em operações complexas.
### *CouchDB*
Apache CouchDB é um BDNRD open source que enfatiza a facilidade de uso e a escalabilidade horizontal.

**Replicação Multi-Master**: CouchDB foi projetado com uma replicação master-master robusta, permitindo que os dados sejam sincronizados entre múltiplos servidores ou instâncias de forma eficiente.
**Interface RESTful**: Todas as operações em CouchDB podem ser realizadas utilizando HTTP RESTful API, tornando-o acessível a partir de qualquer ambiente que possa fazer chamadas HTTP.
**Consistência Eventual**: Opta por consistência eventual para garantir disponibilidade e tolerância a partições, adequado para aplicações que podem tolerar alguma latência na sincronização de dados entre cópias.
**Conflitos e Resolução:** Tem um sistema para lidar com conflitos de dados que podem ocorrer durante a replicação, permitindo que as aplicações resolvam conflitos de acordo com regras de negócios específicas.
**MapReduce Views:** Utiliza views baseadas em MapReduce para realizar consultas complexas e agregações. Map Function é chamada uma vez para cada documento no banco de dados. Sua tarefa é processar os documentos e emitir pares de chave-valor para cada documento de interesse. Reduce Function é aplicada para condensar ou agregar os resultados emitidos pela função map.
### *Amazon DynamoDB*
Amazon DynamoDB é um serviço de banco de dados NoSQL oferecido pela Amazon Web Services (AWS) que suporta tanto o modelo de chave-valor quanto o de documentos.

**Gerenciado pela AWS:** É um serviço totalmente gerenciado, o que significa que a AWS cuida da manutenção, backups, escalabilidade e segurança.
**Desempenho e Escalabilidade:** Oferece latências de milissegundos em qualquer escala e suporta milhões de solicitações por segundo.
**Modelo de Documentos e Chave-Valor:** Permite que você trabalhe com documentos JSON.
**Indexação Flexível:** Permite criar índices secundários globais e locais para realizar consultas eficientes.
**Integrações AWS:** Se integra profundamente com outros serviços da AWS, oferecendo soluções de ponta a ponta para processamento de dados, análises, machine learning e mais.

___
### Documentos
- Além dos tipos básicos, documentos podem incluir arrays, objetos aninhados, datas, timestamps, e até geoespaciais.
- Cada documento é uma **coleção de pares de chave-valor**, onde a chave é uma string e o valor pode ser de qualquer tipo de dado suportado pelo BD. As chaves servem como identificadores únicos para os valores associados.
![[Pasted image 20240413160219.png]]
### Coleções
- **Grupo** **de documentos**, parecido com uma tabela em um BDR.
- Ao contrário das tabelas, as coleções **não exigem que todos os documentos tenham o mesmo esquema**.
- São usadas para organizar documentos geralmente relacionados por um propósito comum ou contexto de aplicação.
### Relação entre Documentos e Coleções
- Cada documento pertence a **apenas uma coleção**.
- As coleções funcionam como um **namespace** para os documentos, o que significa que **duas coleções podem ter documentos com a mesma chave, mas um documento é unicamente identificado por sua chave dentro de sua coleção.**
___
### *CRUD*

##### Inserção de Documentos
- A criação de novos documentos é feita através de inserções. Isso pode ser feito individualmente ou em lotes
##### Leitura e Consulta de Documentos
- A leitura é realizada por meio de consultas, que podem ser simples, como buscar por uma chave específica, ou complexas, envolvendo filtros, ordenação, e limites.
- BDNRD oferecem uma rica sintaxe de consulta que permite especificar exatamente quais documentos você quer recuperar.
##### Atualização de Documentos
- Pode ser feito substituindo um documento inteiro ou apenas atualizando partes específicas de um documento.
- Muitos BDNRD suportam operações de atualização condicional, onde a atualização ocorre apenas se determinadas condições forem atendidas.
##### Exclusão de Documentos
- Pode ser uma operação direta, onde você especifica o documento a ser removido por sua chave, ou uma operação condicional, onde você especifica um ou mais documentos para exclusão com base em critérios de seleção.
___
### Consultas
- Usadas para buscar e extrair dados dos documentos armazenados.
- Podem variar de muito simples, como buscar por um único campo, a muito complexas, envolvendo múltiplos campos, ordenação e funções de agregação.
- Exemplo no MongoDB:
![[Pasted image 20240413161611.png]]
- Consultas complexas podem envolver o uso de operadores lógicos (AND, OR), operadores de comparação, ordenação de resultados, limitação do número de documentos retornados, etc.
- Operadores de consulta são símbolos ou palavras-chave usadas para especificar condições, como `$gt` , `$lt`, `$ne`, `$in` :
![[Pasted image 20240413161804.png]]
### Indexação
- Estratégia para **otimizar a velocidade** das operações de leitura em um BD, criando uma estrutura de dados chamada índice, que o BD pode usar para encontrar dados **sem ter que pesquisar cada documento.**
- Sem índices, o BD deve realizar uma busca completa por todos os documentos a cada consulta
- Índices permitem que o BD **ignore grande parte dos dados** (irrelevantes)
##### *Tipos de Índices*
- **Índices Simples:** Índices em um único campo, como um índice no campo "nome" para pesquisas rápidas por nome.
- **Índices Compostos:** Índices que abrangem múltiplos campos, permitindo consultas eficientes que envolvem várias condições.
- **Índices Geoespaciais:** Especializados para consultas que envolvem localização geográfica e geometria.
- **Índices de Texto:** Permite realizar buscas de texto completo dentro de documentos, útil para funcionalidades de pesquisa.
##### Criação de Índices
- Geralmente envolve especificar o campo ou campos para indexar e, opcionalmente, a direção da indexação, nesse exemplo é ascendente:
![[Pasted image 20240413162348.png]]
- O gerenciamento de índices envolve monitorar a performance da consulta e entender o impacto dos índices no desempenho da escrita, já que os índices precisam ser atualizados a cada inserção, atualização ou exclusão, o que pode ter um custo de desempenho.
___
### Modelagem para BDNRD
- Normalização é um conceito de BDR, onde os dados são organizados para reduzir redundância e dependência.
- Isso geralmente envolve tabelas relacionadas e chaves estrangeiras 
- **Desnormalização** é mais comum em BDNRD e envolve a inclusão de dados **redundantes** em um documento para melhorar a **performance** de leitura.
- A desnormalização **elimina** a necessidade de realizar **joins**, o que é uma vantagem em termos de **velocidade** em sistemas distribuídos.
##### Estratégias de Modelagem de Documentos
**Documentos Incorporados (Embedded Documents):**
- Envolve a inclusão de **documentos aninhados** dentro de outros documentos.
- Útil para representar **relações hierárquicas**, melhora a performance de leitura, pois todos os **dados relevantes são recuperados em uma única operação** de I/O.
**Referências**:
- Em vez de incorporar documentos, você pode armazenar referências (como um **ID**) para documentos em outras coleções.
- Útil quando você quer **evitar a redundância** e está disposto a realizar **múltiplas operações de leitura** ou quando os documentos referenciados são **atualizados frequentemente**.
**Modelagem Baseada no Acesso aos Dados:**
- Considere como os dados serão acessados e atualizados.
- Por exemplo, se certos dados são sempre lidos juntos, faz sentido armazená-los no mesmo documento.
- Por outro lado, se os dados são atualizados frequentemente e de forma independente, pode ser melhor separá-los.
___
### *Padrões de Design de Documentos*
- Práticas e técnicas que ajudam a estruturar e definir como os dados são armazenados em um BDNRD
- Esses padrões são soluções para problemas comuns de modelagem de dados que levam em conta a maneira como os dados são acessados, consultados e atualizados.
**Attribute Pattern**
- Para quando os dados de um documento contêm **muitos campos que aparecem de forma esporádica** ou têm um **grande número de possíveis atributos**
- Este padrão transforma esses campos em um **array de pares chave-valor** dentro do documento.
- Isso r**eduz a quantidade de espaço vazio** em documentos com muitos campos opcionais e facilita a consulta de quais documentos possuem determinado atributo, independentemente de seu valor.
**Observation Pattern**
- Ideal para situações onde dados são coletados ou registrados **em sequência**, como **logs** **de** **eventos** ou séries temporais.
- Em vez de criar um documento para cada observação, elas são **agrupadas em um único documento** até um limite razoável.
- **Minimiza as operações** de I/O e melhora a performance de leitura.
**Tree Pattern**
- Usado para representar **hierarquias e relações** em dados que têm uma estrutura de árvore natural, como estruturas organizacionais ou categorias de produtos.
- Cada nó da árvore pode ser um documento que contém referências aos seus "filhos" ou ao seu "pai", permitindo navegar pela estrutura hierárquica.
**Bucket Pattern** 
- Para quando os dados são segmentados por algum critério, como tempo
- Este padrão **agrupa dados em documentos baseados em um bucket**, como um documento que armazena todas as transações de uma hora específica.
- Melhora a performance ao diminuir o número de documentos e o número de leituras necessárias para acessar um conjunto de dados relacionados.
**Schema Versioning Pattern**
- À medida que uma aplicação evolui, pode ser necessário mudar o esquema dos documentos.
- Este padrão permite **gerenciar essas mudanças** incorporando uma **versão de esquema dentro de cada documento**.
- Permite que a aplicação identifique e interaja com documentos de **diferentes versões de esquema** e facilite a migração incremental de dados para novos esquemas.