fun verificaParidade(num:Int):Boolean{
    if(num % 2 == 0){
        return true
    }
    else{
        return false
    }
}
fun main(){
    println("Digite um numero") 
    val num = readLine()?.toIntOrNull()?:return
    println(verificaParidade(num))
}
