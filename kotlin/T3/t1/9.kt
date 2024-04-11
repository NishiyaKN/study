fun fibonacci(num:Int):Int{
    if(num == 0 || num == 1){
        return num
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2)
    }
}
fun main(){
    println("Digite um numero inteiro e positivo")
    val num = readLine()?.toIntOrNull()?:return
    println("${fibonacci(num)}")
}
