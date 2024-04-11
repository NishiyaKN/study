class Produtos{
    var nome: String
    var quantidade: Int
    var preco: Double

    constructor(nome: String, quantidade: Int, preco: Double){
        this.nome = nome
        this.quantidade = quantidade
        this.preco = preco
    }
    
    fun adicionar():Boolean{
        println("Digite a quantidade para adicionar: ")
        var input = readLine()?.toIntOrNull()?:0
        if (input > 0){
            quantidade += input
            return true
        }
        else{
            return false
        }
    }

    fun remover():Boolean{
        println("Digite a quantidade para remover: ")
        var input = readLine()?.toIntOrNull()?:0
        if (input > 0 && input < quantidade){
            quantidade -= input
            return true
        }
        else{
            return false    
        }
    }

    fun imprimir(){
        println("Nome: $nome Quantidade: $quantidade Preco: R$$preco")
    }
}

fun main(){
    var arroz = Produtos("Arroz", 50, 5.50)

    var adicionar_res = arroz.adicionar()
    if (adicionar_res){
        println("Adicionado com sucesso")
    }
    else{
        print("Erro ao adicionar")
    }
    var remover_res = arroz.remover()
    if (remover_res){
        println("Removido com sucesso")
    }
    else{
        print("Erro ao remover")
    }
    arroz.imprimir()
}
