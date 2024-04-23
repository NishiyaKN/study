### BD Relacionais
- Surgiram a partir do modelo relacional, desenvolvido por Codd em 1970
- São os bancos de dados **mais** **utilizados** no mercado.
- Utilizam a linguagem **SQL** para consulta e manipulação de dados e estruturas de dados
- Implementam as propriedades **ACID** para transações
(abaixo suas características)
##### ACID
- **Atomicidade**: transações **executam** **completamente** ou **não** **executam**.
- **Consistência**: as transações criam novos estados válidos, ou, em caso de **falha**, o banco de dados **volta** para o **último** **estado** **válido**.
- **Isolamento**: garante que uma transação em andamento **não** será **interferida** por **outras** **transações**.
- **Durabilidade**: os dados estarão **disponíveis** na sua forma **correta** mesmo se o sistema **falhar** ou reiniciar.
##### Integridade referencial
- Garante **acurácia** e **consistência** dos dados dentro de um relacionamento de tabelas
- Feito por **chave** **estrangeira** 
- O BD Relacional **não permite** a inclusão de um registro com um valor no campo chave estrangeira que **não exista na outra tabela** que está relacionada.
##### Normalização de Dados
- Processo para **otimizar** os bancos de dados e garantir a maior **consistência**, **evitando** a **duplicação** de informações e as dividindo em tabelas de acordo com o tipo de elemento que está sendo armazenado (livros, autores, empréstimos).
- É a regra de “Criar uma tabela para colocar as colunas que possuem **valores** **que** **se** **repetem** em **vários** **registros** **diferentes**”
- Ou seja, “Criamos uma nova tabela e colocamos **chaves** **estrangeiras** para indicar o **relacionamento** entre a tabela **originária** e a nova tabela **recém** **criada**”.
- Desse modo, as tabelas se relacionam por meio do uso de chaves estrangeiras, que garantem a **consistência** das informações.
##### BD Centralizados
- Todos os dados são armazenados em um **único** **local**.
- Pode ser um servidor ou um conjunto de servidores, mas eles são **centralmente** **localizados** e **gerenciados**.
- Há um ponto central de controle, o que **facilita** a **administração** dos **dados**, implementação de políticas de **segurança** e gestão de **backups**, bom **desempenho** no read/write, mais fácil de **proteger**.
- Dados acessados através de uma rede, mas a **fonte** de dados é **única**.
- Se o servidor central falhar, **todos** users perdem o acesso aos dados.
- Problemas de **escalabilidade**
##### BD Descentralizados
- Dados distribuídos por **vários** locais ou **nós**.
- Cada nó pode operar de forma **independente**, armazenando uma **cópia** dos dados ou uma **parte** dos **dados**.
- Não existe um ponto único de controle.
- Cada nó pode ser gerenciado **independentemente**, as decisões podem ser tomadas localmente ou democracy (by nodes)
- Usuários podem acessar dados de **vários** **locais**, melhora a **redundância** e **disponibilidade** dos dados.  Maior **resistência** a **falhas**, pois a falha de um nó não afeta os outros.
- Boa **escalabilidade**, basta **adicionar** mais **nós** 
- Mais **complexo** de **gerenciar**,  principalmente sobre consistência de dados e segurança.
- Pode haver um **comprometimento** na **velocidade** de acesso aos dados devido à necessidade de **sincronização** entre os nós.
### Limitações de BD Relacional
- Esses sistemas **não** foram construídos para **aplicações** **distribuídas**
- O cruzamento de dados através de **joins** pesa no **hardware**
- Modelo de dados disponível é **limitado**, não havendo flexibilidade em casos em que a estrutura de dados não é completamente conhecida.
- Dificuldade de **escalar** esses sistemas de forma **horizontal**
___
### BD Não Relacional
- Também chamados de **NoSQL**, termo criado em 1998 por Carlo Strozzi para se referir a um banco de dados **relacional** que **não** **utilizava** a linguagem **SQL**. Usado para BDNR apenas a partir de **2009**
- São capazes de armazenar dados **não** **estruturados** e os processar de forma mais **rápida**.
- BD NoSQL caracterizado pela ausência de SQL, apesar de alguns deles apresentarem linguagens similares.
- Geralmente são open source.
- **Ausência** de **esquema**, permitindo a adição de novas colunas de **forma** **livre**, para armazenar e processar **rapidamente** **grandes** **volumes** de dados com formatos diversos 
- Dispensa umas características do BDR para adicionar outras mais flexíveis (**integridade** garantida através de **transactions** e flexibilidade na criação de índices e consultas nem sempre são possíveis), **dispensa** mecanismos complexos para **ACID** (isso deixa mais simples o BD)
- Google é capaz de processar 20 petabytes de dados armazenados no Bigtable através do MapReduce. Bigtable é usado para armazenar o texto bruto, e o MapReduce é usado para dividir o texto em palavras-chave e contar o número de vezes que cada palavra-chave aparece. 
##### Sharding
- Processo de **dividir** um BD em **partes** **menores**, cada uma armazenada em um servidor **separado**.
- Cada "**shard**" é um banco de dados **independente**, e **coletivamente**, compõem o banco de dados **inteiro**.
- Dados são divididos **horizontalmente** ou **verticalmente**. A divisão **horizontal**, mais comum, significa dividir as **linhas** de uma tabela entre diferentes shards, enquanto a divisão **vertical** divide as **colunas**.
- Geralmente, a distribuição dos dados é feita com base em uma **chave** de **shard**, que determina **como** os **dados** são **atribuídos** a cada shard.
- Essa chave pode ser um **ID** de usuário, um intervalo de **tempo**, uma região geográfica, etc.
- Essa técnica permite que cada computador seja responsável por uma **parcela** de todos os dados, **aumentando** a capacidade do BD de **responder** a **requisições** e de **armazenar** dados.
##### Teorema CAP
- Também conhecido como Princípio de Brewer, é um conceito fundamental na teoria dos sistemas distribuídos e bancos de dados.
- Formulado por Eric Brewer em 2000 e posteriormente formalizado por Seth Gilbert e Nancy Lynch da MIT em 2002.
- O teorema afirma que é **impossível** para um sistema de banco de dados distribuído garantir simultaneamente **mais** de **duas** das seguintes três propriedades:

1. Consistency (C):
- Indica se e quando um sistema está em um estado consistente após a execução de uma operação.
- Todos os nós veem os **mesmos** **dados** ao **mesmo** **tempo**.
- Em outras palavras, após uma gravação, todas as **leituras** **retornarão** o valor dessa **gravação** mais **recente**.

2. Availability (A):
- O sistema deve permanecer disponível mesmo após a **falha** de **nós** ou a **indisponibilidade** de algum hardware ou software.
- Garante que cada **solicitação** receba uma **resposta** se foi **bem**-**sucedida** ou **não**.
- Isso **não** significa que cada transação será concluída com sucesso, mas que cada transação **receberá** uma **resposta**.

3. Partition tolerance (P):
- O sistema continua a operar apesar de um número arbitrário de **mensagens** serem **perdidas** ou **atrasadas** pela rede entre nós.
- Em outras palavras, o sistema continua a funcionar mesmo que haja "partições" (**falhas** de **comunicação**) na rede que **impedem** que alguns nós **comuniquem**-se entre si.

**Segundo o teorema CAP, um sistema distribuído só pode ter duas das três propriedades descritas, gerando, assim, três combinações possíveis de sistemas, descritas a seguir.**

1. **CA**: São sistemas que garantem a **consistência** dos dados e possuem **alta** **disponibilidade**, mas não suportam falhas de partição.
Por exemplo: Vertica, Greenplum.
2. **CP**: São sistemas que garantem a **consistência** dos dados e são **tolerantes** a **falhas** de **partição**, porém são bancos de dados que não têm boa disponibilidade.
Esses sistemas possuem as propriedades ACID: Google BigTable, Hypertable, HBase, MongoDB.
3. **AP**: São sistemas que estão **sempre** **disponíveis**, mas podem apresentar **inconsistências** nos dados.
Esses sistemas possuem as propriedades BASE: Voldemort, Tokyo Cabinet, CouchDB, Riak

### Consistência eventual
- Com o advento de **sistemas** largamente **distribuídos**, **consistência** passou a ser **menos** **importantes**, dando espaço para modelos mais fracos (em consistência), como a consistência eventual.
- Fornece algumas garantias: caso **não** haja mais nenhuma **atualização** em determinado dado, **todas** **as** **leituras** para esse dado, eventualmente, **retornarão** **o** **mesmo** **valor**.
- Não descarta a possibilidade de o cliente **ler** um dado **inconsistente**, mas garante que **eventualmente** o dado estará **consistente**.
- Uma das vantagens é a possibilidade de criar sistemas de larga escala capazes de **continuar** **operando** mesmo na presença de **falhas**.
- Eles estão **sempre** **disponíveis**, mesmo que uma **parcela** dos usuários **leia** dados **desatualizados** por um **período** **de** **tempo**.
- Geralmente propagam **atualizações** de forma **assíncrona**, garantindo que em **algum** **momento** todos os **nós** terão a **mesma** **cópia** do dado **atualizada**.
- A propagação de atualizações, que podem ocorrer de forma concorrente para um mesmo dado, implica o uso de mecanismos para garantir que os **nós** de um sistema **consigam** **saber** qual é a **atualização** **mais** **nova** que deve ser aplicada.
- Um desses mecanismos é o uso de Unix Timestamp atrelado a cada escrita.
___
### Tipos de BD Não Relacionais
 São agrupados nessa categoria por terem algumas semelhanças com relação ao problema que se propuseram a resolver:
- lidar com **grandes** **volumes** **de** **dados** através de **escalabilidade** **horizontal**.
- ser open source em sua maioria
- lidar com **tipos** **de** **dados** **diversos**
- muitas vezes **sem** **um** **esquema** **de** **dados** definido
##### BD Baseados em Documentos
- Armazenam dados em documentos (geralmente JSON ou BSON).
- Os documentos contêm **pares** **chave**-**valor** e podem conter estruturas aninhadas.
- Exemplos: **MongoDB**, CouchDB.
- Adequados para aplicações que lidam com **dados** **semi**-**estruturados**, como sistemas de gerenciamento de conteúdo, catálogos de produtos e aplicações que necessitam de **flexibilidade** **no** **esquema** **de** **dados**.
##### BD de Chave-Valor
- Armazenam dados como um conjunto de pares de chave-valor.
- Cada chave é **única** e mapeia diretamente para um valor.
- Exemplos: **Redis**, DynamoDB.
- Ideal para cenários que exigem **armazenamento** **e** **recuperação** r**á**pida de dados, como cache de sessões, configurações de aplicativos, sistemas de recomendação.
##### BD Colunares
- Organizam dados por colunas em vez de linhas.
- Cada coluna pode ser armazenada **separadamente**, o que otimiza o **desempenho** de leitura e escrita para determinados tipos de consultas.
- Exemplos: **Cassandra**, HBase.
- Eficientes para análises de **grandes** **volumes** **de** **dados** e para aplicações que requerem **grande** **escalabilidade**, como o processamento de big data e armazenamento de séries temporais.
##### BD de Grafos
- Projetados para **armazenar** **e manipular relações** entre os dados.
- Eles usam **nós** (para representar **entidades**) e **arestas** (para representar **relações**) com propriedades em ambos.
- Exemplos: **Neo4j**, ArangoDB.
- Excelentes para aplicações que necessitam de a**nálise complexa de relações**, como redes sociais, sistemas de recomendação e detecção de fraudes.