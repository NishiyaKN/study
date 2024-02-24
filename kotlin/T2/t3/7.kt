fun main(){
    var num1: Int = 0
    var num2: Int = 0

    println("Digite o primeiro numero")
    var input1 = readLine()?.toIntOrNull()
    if(input1 != null){
        num1 = input1
    }
    
    println("Digite o segundo numero")
    var input2 = readLine()?.toIntOrNull()
    if(input2 != null){
        num2 = input2
    }

    if(num1 == num2){
        println("Numeros sao iguais")
    }
    else{
        if(num1 > num2){
            println("O maior numero e: $num1")
        }
        else{
            println("O maior numero e: $num2")
        }
    }

}

