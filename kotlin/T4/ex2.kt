class Pessoa2(var nome: String?, var idade: Int){
    init{
        // Inicializa a propriedade 'nome'
        nome = "Ana Maria"
        // Executa uma tarefa de inicializacao
        println("Criando um novo objeto da classe Pessoa")
    }
}

fun main(){
    val pessoa = Pessoa2(null,23)
    println(pessoa.nome)
    println(pessoa.idade)

    pessoa.nome = "Pedro"
    pessoa.idade = 55
    println(pessoa.nome)
    println(pessoa.idade)
}
