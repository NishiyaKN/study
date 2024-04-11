class Pessoa (val nome: String){
    fun imprimeNome(){
        println(nome)
    }
}

fun main(){
    var pessoa = Pessoa("Aparecido Freitas")
    pessoa.imprimeNome()
}
