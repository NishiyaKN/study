fun verificaMaioridade(idade:Int):Boolean{
    if(idade >= 18){
        return true
    }
    else{
        return false
    }
}
fun main(){
    println("Digite sua idade")
    val idade = readLine()?.toIntOrNull()?:return
    println("Maioridade: ${verificaMaioridade(idade)}")
}
