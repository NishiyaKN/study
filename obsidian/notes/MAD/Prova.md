**Processo de software** - conjunto de atividades relacionadas que levam á produção de um software, podem envolver a criação a partir do zero
Hoje em dia novos softwares de negócios são desenvolvidos por meio da extensão e modificação de sistemas existentes

**Atividades fundamentais de um processo de software**
1. Especificação (funcionalidades e restrições)
2. Projeto e implementação (produção)
3. Validação (garantir que atenda às demandas)
4. Evolução (manutenção)

Sistemas *críticos* precisam de um processo de desenvolvimento bem estruturado (**dirigidos à plano**), onde tudo é planejado com antecedência
Sistemas de *negócios*, onde requisitos mudam constantemente, é melhor algo menos formal e mais flexível (**processos ágeis**), onde o planejamento é gradativo

Quando a diversidade de processos de software é reduzida, eles podem ser melhorados pela padronização

**Modelo de processo de software** - representação simplificado do processo, fornecendo informações parciais sobre ele.
Normalmente são usadas em conjunto
### Modelo em Cascata
![[Pasted image 20240414095657.png]]
- Derivado de processos mais gerais da engenharia
- Também chamado de "ciclo de vida de software" ou "waterfall"
- Dirigido a **planos**
- Principais estágios:
	1. Análise e definição de requisitos (serviços, metas e restrições)
	2. Projeto de sistema e software (definição da arquitetura geral do sistema)
	3. Implementação e teste unitário (desenvolvimento e teste de cada unidade)
	4. Integração e teste de sistema (junção das unidades e teste como um todo)
	5. Operação e manutenção (colocado em uso, correção de erros, melhorias, etc)
- Na teoria, o estagio seguinte não deve ser iniciado até que o anterior seja concluído, mas na prática não é linear
- Gera muitas iterações e retrabalho, é comum **congelar** parte do desenvolvimento e so continuar depois (o sistema talvez não fará o que o user quer), mal estruturado
- Processo é visível para monitoramento, mas **inflexível** 
- Deve ser usado quando os requisitos são bem compreendidos e inalterados

### Desenvolvimento incremental
![[Pasted image 20240414095813.png]]
- Desenvolve uma implementação inicial e recebe feedback, cria **várias versões** de acordo até que um sistema adequado seja desenvolvido.
- Atividades de especificação, desenvolvimento e validação são **intercaladas**.
- Abordagem dirigida a planos, ágil ou mais comumente uma mistura de **ambos**
- Reflete a maneira como resolvemos problemas
- Barato e fácil de fazer mudanças
- Atualmente a abordagem mais comum para desenvolvimento de aplicativos
- Vantagens sobre o modelo cascata:
	1. **Menos análise e documentação necessário** ser refeitos para acomodar as mudanças dos requisitos do cliente
	2. Mais **fácil** de obter **feedback** do cliente sobre o desenvolvimento
	3. Entrega **rápida** de algo que o cliente já pode **usar** antes de estar concluído
- Problemas:
	1. Processo **não é visível** para gerenciamento do progresso, não é viável produzir documentos que reflitam cada uma das versões
	2. Estrutura do sistema tende a se **degradar com novos incrementos**, e se torna mais difícil e caro
- Esses problemas são críticos para sistemas **grandes e complexos**. Sistemas de grande porte necessitam de um **framework** e as responsabilidades de cada equipe devem ser bem definidas, sendo planejados com antecedência e não incrementalmente.
**Framework**: expor o sistema ao cliente sem realmente entregá-lo: software é usado em processos operacionais reais. 

### Desenvolvimento orientado a reuso
Todos os processos de desenvolvimento incluem um pouco de reúso.
- Abordagens orientadas a reuso dependem de uma ampla base de componentes reusáveis de software
- Estágios:
	- Especificação de requisitos
	- Análise de componentes (busca por componentes para implementar as especifciações)
	- Alterações nos requisitos (modifica os requisitos para refletir os componentes disponíveis)
	- Projeto de sistema com reuso (framework do sistema é projetado ou algo existente é reusado)
	- Desenvolvimento e integração (softwares que não podem ser adquiridos são desenvolvidos e integrados)
	- Validação de sistema
- Componentes:
	1. Web services (invocação remota. xml, json)
	2. Coleção de objetos (desenvolvidas como um pacote a ser integrado com um framework, própria empresa tem o source. .net)
	3. Sistemas stand-alone (uso em ambiente particular)
- Reduz a quantidade de software a ser desenvolvido, custos e riscos
- Entrega mais rápida
- Compromisso com os requisitos, pode não atender às necessidades
- Controle sobre a evolução do sistema é perdido, pois os componentes reutilizáveis não estão sob o controle
___
1. Diferencie processos dirigidos a planos e processos ágeis.
Dirigidos a planos: Define toda a estrutura desde o início, tem controle sobre tudo, entrega tardia
Processos ágeis: Define aos poucos, flexível, menos controle, entregas rápidas, fácil de lidar com mudanças

2.  Processos dirigidos a planos são indicados para qual situação?
Para sistemas críticos que necessitam de segurança e que se tem uma clara compreensão dos requisitos

3. Devido ao encadeamento entre uma fase e outras, o modelo “waterfall” também conhecido como “modelo em cascata” prevê o congelamento prematuro dos requisitos. Quando isso ocorre? E quais são suas consequências?
Quando não está sendo possível entrar em acordo com o cliente em relação aos requisitos, entrega algo próximo ao que ele quer, não exatamente

4. Quais são os três componentes de software que podem ser utilizados na metodologia orientada a reuso, cite suas características?
Web service (na internet, padrao http)
Coleções de objeto (funcionalidades encapsuladas em objetos diferetes, modularidade)
Sistemas stand-alone (funciona de maneira independente, não há source code em mãos)

5. Cite duas desvantagens da utilização da metodologia orientada a reuso.
Não tem controle sobre todo o projeto, depende de terceiros que criaram os componentes sendo utilizados
Há um compromisso com os requisitos, não é possível entregar o que o cliente realmente quer

6. Cite duas vantagens da utilização da metodologia desenvolvimento incremental.
Entrega rápida
Fácil de acomodar mudança nos requisitos
___
![[Pasted image 20240312140902.png]]
___
### Prototipação
Versão inicial de um software, demonstra conceitos, experimenta opções e identifica falhas nos requisitos para solucioná-los e alterá-los
Stakeholders podem testar no incicio do processo de software
Parte essencial do processo de projeto da interface

**Wireframe** - carcaça do software (muito rapido,simples e barato, ate msm sem software, joga no lixo depois) descartavel
**modelos** - focam no design visual. figma, adobe xp (esteticamente parecido mas nao avança, nao contribui diretamente no desenvolvimento do software) evolutiva
**protótipo** - desenvolvido diretamente com a linguagem de programacao (evolui para o software em si, demora mais) evolutiva

Benefícios:
1. Identificação antecipada de erros e modificações
2. Visualização de como será o sistema
3. Identificação de funcionalidades e fluxo, eficiente para coleta de requisitos de interface
4. Facilitação do entendimento por parte dos devs e testers
5. Redução de riscos
6. Antecipação o treinamento dos usuários
7. Dependendo do software usado, é possível gerar códigos que serão reaproveitados

**Protótipo Magico de Oz**: apenas a interface do usuário é desenvolvida, os usuários interagem com essa interface mas suas solicitações são passadas para uma pessoa que os interpreta e produz a resposta adequada.

**Entrega incremental**: alguns dos incrementos desenvolvidos são entregues ao cliente e implantados para uso em um ambiente operacional.
 Os clientes identificam os serviços a serem fornecidos pelo sistema, quais são os mais e menos importantes.
 Problemas:
 1. A maioria dos sistemas exige um conjutno de recursos básicos. Há a dificuldade em identificar recursos comuns, necessários a todos os incrementos. 
 2. Pode ser difícil de iterar quando um sistema substituto está a ser desenvolvido, usuarios ficam relutantes em experimentar um sistema novo incompleto
 3. Especificação desenvolvida junto ao software, o que significa que não há especificação completa até que o último incremento seja especificado
___
Ágeis:
- XP - Extreme Programming
- SCRUM
- FDD - Feature Drive Development
- DSDM - Dynamix Systems Development Method
Não ágeis:
- RUP - Rational Unified Process
- Waterfall - Cascata/Clássico
___
1. Quando uma metodologia de desenvolvimento de software utiliza o recurso de prototipação seja ele através de wireframes, modelos ou protótipos e possível implementar através da técnica de baixa fidelidade e alta fidelidade. Qual a diferença entre os três tipos e suas duas variações?
Wireframe - carcaça do projeto, bem básico, sem detalhes, apenas o essencial. Rápido e barato de se fazer, é uma base inicial do sistema
Modelos - protótipos com foco no design gráfico, para mostrar como o resultado final ficaria
Protótipos - construídos diretamente com a linguagem de programação que será usada no projeto, é funcional, evolutivo. 
Baixa fidelidade - foco nas funcionalidades, o essencial do sistema
Alta fidelidade - foco no design, na interface do sistema

2. No que condiz a técnica de prototipação denominada Mágico de Oz?
Entrega somente a interface para o usuário, as operações de funcionalidade são scriptadas, manuais, só pra ter uma idéia de como ficaria a interação

3. Quais as desvantagens no modelo de desenvolvimento que utiliza a entrega incremental?
Não há especificação completa do sistema até que o último incremento seja especificado
Dificuldade em identificar recursos comuns à todos os incrementos
Quando o sistema em questão está sendo desenvolvido para substituir outro, os usuários ficam com receio de testar um software experimental incompleto

4. Entre os modelos listados a seguir, quais utilizam os princípios dos métodos ágeis?
(x) XP (x) SCRUM ( ) RUP (x) FDD ( ) Waterfall (x) DSDM

5. Reescreva o modelo de desenvolvimento utilizado na aula anterior para a utilização do desenvolvimento ágil.
?????

