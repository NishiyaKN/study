class Produto{
    var nome: String
    var quantidade: Int
    var preco: Double

    constructor(nome: String, quantidade: Int, preco: Double){
        this.nome = nome
        this.quantidade = quantidade
        this.preco = preco
    }
    
    fun adicionar(add: Int):Boolean{
        if (add > 0){
            quantidade += add
            return true
        }
        else{
            return false
        }
    }

    fun remover(rem: Int):Boolean{
        if (rem > 0 && rem < quantidade){
            quantidade -= rem
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
    var arroz = Produto("Arroz", 50, 5.50)

    var adicionar_res = arroz.adicionar(20)
    if(adicionar_res){
        println("Adicionado com sucesso")
    }
    else{
        println("Erro ao adicionar")
    }
    var remover_res = arroz.remover(10)
    if(remover_res){
        println("Removido com sucesso")
    }
    else{
        println("Erro ao remover")
    }
    arroz.imprimir()
}
