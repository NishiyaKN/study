fun concatenaStrings(s1:String, s2:String):String{
    return s1+s2
}
fun main(){
    println("Digite uma string")
    val s1 = readLine().toString()

    println("Digite outra string")
    val s2 = readLine().toString()

    println(concatenaStrings(s1, s2))
}
