class Carro {
  #marca;
  #modelo;
  #ano;

  constructor(marca, modelo, ano) {
    this.#marca = marca;
    this.#modelo = modelo;
    this.#ano = ano;
  }

  getMarca() {
    return this.#marca;
  }

  setMarca(novaMarca) {
    this.#marca = novaMarca;
  }

  getModelo() {
    return this.#modelo;
  }

  setModelo(novoModelo) {
    this.#modelo = novoModelo;
  }

  getAno() {
    return this.#ano;
  }

  setAno(novoAno) {
    this.#ano = novoAno;
  }

  exibirDescricao() {
    console.log(`Este carro é um ${this.getMarca()} ${this.getModelo()} do ano ${this.getAno()}`);
  }
}

const meuCarro = new Carro("Toyota", "Corolla", 2022);

console.log("Marca:", meuCarro.getMarca());
console.log("Modelo:", meuCarro.getModelo());
console.log("Ano:", meuCarro.getAno());

meuCarro.setMarca("Honda");
meuCarro.setModelo("Civic");
meuCarro.setAno(2023);

meuCarro.exibirDescricao();

