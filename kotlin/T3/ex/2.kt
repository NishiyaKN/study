fun exibeMensagem(msg: String, contador: Int){
    var i = 1
    while(i++ <= contador){
        println(msg)
    }
}
fun main(){
    var a = 5
    exibeMensagem("USCS", a)
}
