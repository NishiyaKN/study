fun main(){
    var idade = 0
    println("Digite sua idade")

    var input = readLine()?.toIntOrNull()
    if(input != null){
        idade = input
    }

    if(idade >= 18 && idade <= 67){
        println("Pode doar sangue")
    }
    else{
        println("Nao pode doar sangue")
    }
}
