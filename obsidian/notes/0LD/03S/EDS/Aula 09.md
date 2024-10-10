==OBJETIVO DE CADA UM DELES, DEFINIÇÃO DE CADA UM, PARA O QUE É UTILIZADO==
### Modelos comportamentais
- Modelam o comportamento dinâmico do sistema quando está em execução.
- Mostram o que acontece ou deve acontecer quando o sistema responde a um estímulo de seu ambiente.
- Dois tipos de estímulo:
	- Dados: chegam e precisam ser processados pelo sistema.
	- Eventos: acontecem e disparam o processamento do sistema (podem ter dados associados, mas não necessariamente).

![[Pasted image 20240410143846.png]]o![[Pasted image 20240410144327.png]]
###  Diagrama de Pacotes (modelo estrutural)
**Objetivo: agrupar classes em pacotes e demonstrar as dependências entre eles.**
- Mecanismo de agrupamento
- Um pacote é definido como um 'mecanismo de propósito geral para organizar elementos semanticamente relacionados em grupos'
- Pode-se organizar as classes, tanto quanto os casos de uso, agrupando-os em pacotes.
### Diagrama de Sequência (modelo de interação)
**Objetivo: representar graficamente o comportamento de uma funcionalidade**
- Determina a sequência de eventos que ocorrem em um processo, identificando quais mensagens devem ser disparadas entre os elementos envolvidos e em que ordem.
- Atores são iguais o de caso de uso
- Lifeline é um objeto (é destruído se não for mais usado)
- Mensagem é método
### Diagrama de Comunicação (modelo de interação)
**Objetivo: organizar estruturalmente os objetos que enviam e recebem mensagens**
- Define estrutura dos objetos (igual de classes)
- Indica mensagens trocadas (igual de sequência)
### Diagrama de Estados (modelo comportamental)
**Objetivo: descrever uma máquina de estados dando ênfase ao fluxo de controle de um estado para outro.**
- Modela as mudanças sofridas por um objeto dentro de um determinado processo.
- Pode ser utilizado para acompanhar os estados pelo qual passa uma instância de uma classe.
### Diagrama de Atividades (modelo comportamental)
**Objetivo: mostrar o fluxo de atividades em um único processo**
- Mostra como uma atividade depende da outra
- Swinlanes = região assdociada a um objeto do modelo
### Diagrama de Componentes (modelo estrutural)
**Objetivo: mostrar a organização e as dependências existentes entre um conjunto de componentes**
- Executáveis, bibliotecas, tabelas, arquivos e documentos
- Permite a modelagem física
- Similar a um pacote
### Diagrama de Implantação (modelo estrutural)
**Objetivo: representar a estrutura física, onde um conjunto de artefatos de softwares são instalados em determinados nós para compor uma configuração de um sistema**
- Artefato: elementos do mundo real usados no processo de implantação do sistema (basicamente componentes acima)
- Determina necessidades de hardware

##### Engenharia/arquitetura dirigida a modelos
- Programa é gerado automaticamente a partir de modelos 
- UML executável