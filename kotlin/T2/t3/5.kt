fun main(){
    var preco = 0.0
    var quant = 0

    println("Digite o preco do produto")
    var input1 = readLine()?.toDoubleOrNull()
    if (input1 != null){
        preco = input1
    }

    println("Digite a quantidade do produto")
    var input2 =  readLine()?.toIntOrNull()
    if(input2 != null){
        quant = input2
    }

    // preco e quant precisam estar inicializados
    var total = preco * quant
    
    if(quant >= 10){
       total -= total * 0.1 
    }

    println("Preco: $preco")
    println("Quantidade: $quant")
    println("Total: $total")
}
