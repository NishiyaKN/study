### MVC (Model View Controller)
Para quando precisamos:
- Mudar a interface sem mudar o resto.
- Mudar os dados sem mudar o resto.
- Mudar o processo sem mudar o resto.

Pois o MVC divida a aplicação interativa em três partes:
### Model (dados/regras de negócio)
Classes que armazenam os dados manipulados pela aplicação e que têm a ver com o domínio do sistema em construção.
- Classes de modelo não têm qualquer conhecimento ou dependência para classes de Visão e de Controle.
- Além de dados, classes de modelo podem conter métodos que alteram o estado dos objetos de domínio.
### Visão (saída)
Classes responsáveis pela apresentação da interface gráfica do sistema, incluindo janelas, botões, menus, barras de rolagem, etc.
### Controller (entrada)
Classes que tratam e interpretam eventos gerados por dispositivos de entrada, como mouse e teclado.
- Resultado de tais eventos -> alteração no estado do Modelo ou da Visão.
- Exemplo: quando o usuário clica em um botão + de uma calculadora, uma classe Controladora deve capturar esse evento e chamar um método do Modelo.
- Exemplo: quando o usuário clica no botão “Dark UI”, o Controle solicita à Visão mudar as cores da GUI para tons mais escuros.
