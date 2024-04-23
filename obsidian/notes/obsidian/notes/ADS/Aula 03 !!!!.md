### Arquitetura em camadas
Um dos mais usados, as classes são organizadas em módulos de maior tamanho, chamados de camadas, que estão dispostas de forma hierárquica.
- Uma camada somente pode usar serviços da camada **imediatamente inferior**, como chamar métodos, instanciar objetos, etc.
- Muito usadas na implementação de protocolos de rede e sistemas distribuídos.
- O objetivo é criar limites (boundaries)
- Interface do usuário não pode interagir diretamente com a camada de dados.
- Minimiza o impacto das mudanças
- Particiona a complexidade (desenvolve em componentes menores, que são as camadas)
- Disciplina a dependência entre as ==camadas==
- Ajuda no entendimento, manutenção e evolução do sistema. Ex facilita troca de TCP para UDP

### Três camadas
Comum em processos de downsizing de aplicações corporativas.
![[Pasted image 20240331175149.png]]
##### Interface com o usuário (camada de apresentação)
- Exibe informações, coleta e processa entradas e eventos de interface
- Pode ser um app com GUI ou web

##### Lógica de negócio (camada de aplicação)
- Regras de negócio do sistema
- Ex: as notas devem ser >= 0 e <= ao valor da avaliação
- Ex: alunos devem ser notificado por email após o lançamento das notas

##### Banco de dados (camada de dados)
- Armazena os dados manipulados pelo sistema
- Ex: após o lançamento das notas elas devem ser salvas em um banco de dados
___
### Duas Camadas