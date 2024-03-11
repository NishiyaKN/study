fun exibeMensagem(msg: String, contador: Int): Unit{ // nao tem retorno, igual void em java, pode deixar em branco se quiser
    var i = 1
    while(i <= contador){
        println(msg)
        i++
    }
}
fun main(){
    var a = 5
    exibeMensagem("USCS", a)
}
