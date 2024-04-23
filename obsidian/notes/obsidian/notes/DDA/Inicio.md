Para desenvolvimento de servidor - Java (Springboot)

```shell
kotlinc "caminho/pro/arquivo.kt" -include-runtime -d "caminho/pro/arquivo.jar"
java -jar arquivo.jar
```

pode criar um objeto sem classe? nao
pode ter classe sem objeto? sim

kotlin consegue fazer GUI sem ajuda 
java nao

15.A equipe de qualidade (QA) enfrenta desafios ao testar componentes assíncronos de um aplicativo financeiro desenvolvido em Kotlin, onde as transações devem ser processadas em segundo plano. Qual estratégia Kotlin facilita a escrita de testes unitários para código assíncrono?
**C) Utilizar a biblioteca kotlinx-coroutines-test para simular comportamento assíncrono.**

23.Ao adaptar um módulo crítico de processamento de pagamento para Kotlin, um desenvolvedor se depara com a flexibilidade do tratamento de exceções em Kotlin comparado ao Java. Como o Kotlin melhora a abordagem de exceções verificadas em relação ao Java?
**C) Kotlin trata exceções verificadas como não verificadas, simplificando o código e reduzindo a verbosidade.**

24.Durante a refatoração de um sistema de logística, um desenvolvedor utiliza extensivamente expressões em Kotlin para simplificar cálculos complexos. Como as expressões em Kotlin diferem das declarações em termos de utilidade e função no código?
**C) As expressões sempre retornam um valor e podem ser parte de declarações mais amplas, que estruturam o programa sem produzir valores diretamente. ==Atribuicoes nao retornam valor==**

26.Considerando a segurança contra valores nulos (null safety) que Kotlin enfatiza, como um desenvolvedor pode declarar uma variável que pode ou não conter um valor nulo, e qual é a importância dessa funcionalidade na prevenção de erros comuns em aplicativos Android?
**B) Declarando variáveis com val e especificando o tipo como nullable adicionando um ? após o tipo.**

27.Na reestruturação de um sistema de gerenciamento de estoque, um desenvolvedor está aproveitando as capacidades de tratamento de exceções de Kotlin. Diferentemente do Java, Kotlin não requer que exceções verificadas sejam declaradas ou capturadas. Como essa característica afeta o desenvolvimento de aplicativos robustos e a experiência geral do desenvolvedor?
**B) Simplifica o código, reduzindo a verbosidade e melhorando a legibilidade sem comprometer a robustez.**

28.Ao construir uma nova funcionalidade de análise de dados para um aplicativo financeiro, um desenvolvedor escolhe Kotlin devido à sua capacidade de agrupar declarações em blocos de código usando chaves. Organizar o código em blocos delimitados por chaves significa agrupar várias instruções, declarações ou expressões dentro de um par de chaves {} para formar uma unidade lógica ou um escopo. Isso é uma prática comum em muitas linguagens de programação, incluindo Kotlin, Java, C, e C++, entre outras. Como os blocos de código em Kotlin influenciam a organização do código e a implementação de lógica complexa?
**B) Facilitando a modularização e reutilização de código através do agrupamento lógico de declarações.**

29.Durante o desenvolvimento de um recurso interativo para um aplicativo educativo, um programador utiliza expressões Kotlin para processar cálculos em tempo real. De que maneira a capacidade de Kotlin de avaliar expressões contribui para melhorar a interatividade e a reatividade das interfaces de usuário?
**C) Permitindo que expressões sejam avaliadas para um valor, refletindo as mudanças imediatamente na interface do usuário.**
==Ou seja, resultados das operações é calculado imediatamente==

31.A equipe de desenvolvimento de um novo sistema de recomendação de produtos opta por Kotlin devido ao seu suporte robusto ao paradigma de programação funcional. Como a adoção desse paradigma em Kotlin pode melhorar a qualidade e a manutenibilidade do código do sistema de recomendação?
**C) Favorecendo a imutabilidade, expressões lambda e funções de ordem superior, o que promove código mais claro e modular.**

32.Ao desenvolver a funcionalidade de processamento de linguagem natural de um chatbot, um desenvolvedor se beneficia das capacidades avançadas de manipulação de strings oferecidas por Kotlin. Como essas capacidades podem ser exploradas para analisar e responder a entradas do usuário de maneira eficiente?
**B) Através de templates de string e operações embutidas em strings, facilitando a extração e formatação de dados.**
==Template de string é tipo `val msg = "ola $user"`==

57.Em uma tarefa de cálculo de despesas de um aplicativo financeiro Kotlin, quais operadores são essenciais para realizar adições, subtrações, multiplicações e divisões?
**A) plus, minus, times, div**
==var soma = a.plus(b)==
___
4.Um programador está desenvolvendo uma funcionalidade em Kotlin que calcula o preço final de um produto baseado em seu preço original e uma taxa de imposto aplicável. O cálculo é realizado através de uma expressão que multiplica o preço original pela soma de 1 com a taxa de imposto (representada como uma fração do preço). Considerando que as expressões em Kotlin são avaliadas para um valor, qual seria a maneira correta de implementar este cálculo?
**E) Utilizar a expressão diretamente no retorno de uma função que calcula o preço final, pois Kotlin avalia expressões para um valor.**

11.Em Kotlin, ao contrário de Java, não há distinção entre exceções verificadas e não verificadas. Isso influencia diretamente em qual aspecto do desenvolvimento?
**B) Elimina a necessidade de especificar exceções em uma cláusula throws.**

24 Quando comparado com Java, Kotlin trata todos os tipos básicos como:
**A) Referências a objetos, eliminando tipos primitivos.**

30.Na linguagem Kotlin, argumentos default em funções:
**B) Permitem que o chamador de uma função omita argumentos que possuem um valor padrão.**

32.O modificador vararg em Kotlin é usado para indicar:
**C) Um número variável de argumentos do mesmo tipo.**

33.As extension functions em Kotlin:
**C) São uma maneira de adicionar novas funcionalidades a classes sem herança.**

38.A utilização de parâmetros nomeados em Kotlin facilita:
**B) A chamada de funções com muitos parâmetros, melhorando a legibilidade ao especificar os argumentos pelo nome.**

41.Ao estender a classe String com uma função de extensão em Kotlin, é possível:
**C) Inserir novos métodos que se comportem como se fossem parte da classe String.**

46.Em Kotlin, o construtor primário é integrado na declaração da classe. Como se declara um construtor primário que inicializa um objeto "Livro" com título e autor?
**C) class Livro(var title: String, var author: String)**

48 Qual é o propósito do bloco init em uma classe Kotlin?
**C) Executar código de inicialização quando uma nova instância é criada, complementando o construtor.**

49.Como as propriedades de objetos em Kotlin diferem das variáveis membro em Java?
**C) Em Kotlin, as propriedades substituem a necessidade de definir métodos getter e setter explicitamente.**

52.No contexto de setters personalizados em Kotlin, o que representa o identificador value?
**C) O novo valor atribuído à propriedade.**

54.Um programador está modelando uma aplicação de gerenciamento de biblioteca no Kotlin. Qual seria a maneira correta de definir uma classe Livro que contém titulo, autor e anoDePublicacao como propriedades?
**A) data class Livro(val titulo: String, val autor: String, val anoDePublicacao: Int)**
==data class gera uns metodos, usado para armazenar dados ==
___
3. Na programação Kotlin, qual declaração sobre a implementação de classes está correta?
**A) Todas as classes são finais por padrão, não podendo ser herdadas, a menos que marcadas com a palavra-chave open.**