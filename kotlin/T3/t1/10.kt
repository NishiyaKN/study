fun fatorial(num:Int):Int{
    if (num == 0 || num == 1){
        return 1
    }
    else{
        return num * fatorial(num - 1)
    }
}

fun main(){
    println("Digite um numero inteiro e positivo")    
    val num = readLine()?.toIntOrNull()?:return
    if (num < 0){
        return
    }
    println("${fatorial(num)}")
}
