0806
Sistemas -> Analista Programador, DEV, Analista Funcional
TI -> CIO (Chief Information Office, maior cargo de TI), CTO (Chief Technology Office)
Infraestrutura -> Analista de suporte, server, PC, redes, produção, segurança

Processos de negócio depende do tipo de empresa

# Sistemas de negócios
### ERP (Enterprise Resource Planning) 
- É um sistema de gestão empresarial, faz a **integração e automatização dos principais processos e dados de um empresa** em uma única plataforma
- Principal sistemas, as vezes não é o mais importante, faz um monte de processo de sistemas
- Em um mercado faria estoque, contabilidade, RH, contas a pagar, marketing, operacional, lojística
### BI (Business Inteligence)
- Analizar informações de clientes para dar insights, normalmente para vendas, mas pode ser por exemplo de evasão escolar na USCS
- Feito a partir de informações internas
- Big data

 **Planilha de controle de gastos seria ERP, análize da planílha seria o BI**
### CRM (Customer Relationship Manager)
- Pós venda, suporte para problemas nos produtos por exemplo
- Tenta vender mais
- SAC é um exemplo

# Sistemas de Infraestrutura
- Internet
- Ponto Eletrônico
- Email
- Domain Controler -> pega user e passwd e autentica
- Active Director (AD) -> controla o perfil que você pode acessar ou não (tipo groups)
___

Sistemas são formados por aplicação e por banco de dados
USER acessa APP que acessa BD

Quando um usa a internet para user connect server, os dados passam em formato clear text, por isso usa VPN para ter uma rede segura pela internet e não será possível ver os dados, ou dá pra fazer um link dedicado, sem passar pela internet

Server deve possuir alta disponibilidade, 24x7, processo e tecnologias de backup, segurança da informação, desastre recovery

ITIL - library de práticas, processual, usado bastante em infraestrutura, deve ter procedimentos para fazer coisas no servidor, e.g. instalar uma correção de app -> planejar, testar em lab, preparar as mudanças, comunicar aos users, fazer backup, atualizar, testar se está tudo ok, (isto é Changing Manager, muito requerido pelas empresas), pode demorar bastante, tipo 7 a 10 dias. 

DevOps - faz o ITIL de maneira mais rápido, usando diversas ferramentas, usado mais em aplicações mesmo, bom para por exemplo internet banking que não pode ficar off por muito tempo

Alta disponibilidade (ou cluster) -> Server 1 ativo se cair faz fallover para server 2 que estava em standby

Servidor de teste, homologação ou QA é tudo a mesma coisa

### Ambiente de aplicação
Dev -> tests -> produção
BD + app juntos até tests, produção separa

- Virtualização ajudou a criar um ambiente virtual de aplicação
- Ambiente de infraestruturas não tem banco de dados normalmente

Em vez de ter datacenter, faz outsourcing 
- Collocation (equipamento do cliente, paga uma empresa para alocar o server físico)
- Hosting (equipamentos de uma empresa, cliente compra e usa como serviço)
- Cloud computing (hosting por demanda, paga conforme vai utilizando)

Server Físico -> Server VM -> Server **Containers** (microsserviços) 
- Hypervisor é um software para virtualização, caro pra servers, utilizado para criar aplicações monolíticas, se der problema em alguma parte terá que tirar do ar toda a aplicação para poder resolver
- Atualmente melhor usar containers para microsserviços, mais barato e se der problema em alguma parte em específico pode apenas tirar o container com problema para resolver
- Kubernetes -> orquestrador de containers (manager)

