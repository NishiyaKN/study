fun listaQuadrados(num:Int){
    for(i in 1..num){
        println(i*i)
    }
}
fun main(){
    println("Digite um numero inteiro e positivo")
    val num = readLine()?.toIntOrNull()?:return
    if (num < 0){
        return
    }
    listaQuadrados(num)
}
