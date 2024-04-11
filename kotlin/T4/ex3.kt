class Pessoa3{
    var nome: String = "Nome inicial"
        get() = field
        set(value){
            field = value.trim() // Remove espacos em branco de armazenar
        }

    var idade: Int = 55
        get() = field
        set(value){
            if(value >= 0){
                field = value // Atribuir a idade se for um valor positivo
            }
            else{
                println("Idade nao pode ser negativa")
            }
        }
}

fun main(){
    val pessoa = Pessoa3()

    pessoa.nome = "    Carlos de Souza  "
    pessoa.idade = -5 //tentativa de atribuir uma idade negativa 

    println("Nome: ${pessoa.nome}, Idade: ${pessoa.idade}")
}
