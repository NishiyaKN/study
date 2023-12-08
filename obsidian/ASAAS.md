**Opção 1: Vendas realizadas pela conta da Nipomed, envia 20% para a subconta selecionada
Opção 2: Vendas realizadas pela subconta selecionada, envia 80% para a conta da Nipomed**

- Resolução 1: Usar um webhook
	**(1)** Ativa um *único webhook na conta Nipomed*. Ao receber o pagamento, faz o callback para a URL de tratamento backend, deve haver um *front-end para selecionar a walletid da subconta* a qual quer fazer o split.
	- Gerenciamento centralizado
	- Melhor tratamento de erros

	**(2)** Ativa um *webhook para cada subconta*, usa um *backend uniforme* para fazer o split com a conta da Nipomed
	 - Não é necessário front-end
Entretanto, o uso de webhooks demanda a existência de um backend com URL público onde será processado o JSON. 
- Self host
- Free host
- Paid host

- Resolução 2: Realizar tudo pela API
Será necessário criar um app fullstack, para criar a cobrança e usar a API manualmente para fazer o split.
