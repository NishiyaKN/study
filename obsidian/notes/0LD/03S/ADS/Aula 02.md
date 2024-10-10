### Arquitetura de software
Arquitetura preocupa-se com projeto em mais alto nível, o foco deixa de ser a organização e interfaces de classes individuais e passa a ser em unidades de maior tamanho, sejam elas pacotes, componentes, módulos, subsistemas, camadas ou serviços.

**Unidades de maior relevância**: Enquanto um banco de dados é fundamental para um sistema de informações como ERP, para um sistema de por exemplo diagnóstico de doenças por IA, o banco de dados não é tão importante.

**Arquitetura:** conjunto de decisões. Decisões importantes, uma vez tomadas, dificilmente podem ser revertidas no futuro.
- Definição dos módulos principais de um sistema;
- Escolha da linguagem de programação e do banco de dados

### Modelos (padrões)
Organização de mais alto nível para sistemas de softwares, definem por ex que um módulo A pode ou não usar os serviços de um módulo B.
- Camadas (duas e três)
- MVC
- Microsserviços
- Orientada a mensagens
- Publish/Subscribe

### Linus - Tanenbaum
Linux - kernel monolítico, tudo está dentro de um único arquivo rodando em modo supervisor, menos modular
Minix - microkernel, boa modularidade, complexo, kernel cuida das funções mais básicas apenas