fun saudacao(nome: String?, idade: Int?): String{
    if(nome == null || idade == null){
        return "error"
    }
    var msg = "Ola, " + nome + " ! " + "Voce tem " + idade + " anos!"

    if (idade >= 18 && idade <=65){
        return msg + " Voce pode doar sangue!"
    }
    else{
        return msg
    }
}

fun main(){
    val nome : String?
    val idade : Int?

    println("Entre com o seu nome: ")
    nome = readLine()

    println("Entre com sua idade: ")
    idade = readLine()?.toIntOrNull()

    val retorno = saudacao(nome,idade)
    println(retorno)
}
