fun main(){
    var count = 0
    var notas = DoubleArray(3) // inicializa como um array de double com 3 posicoes
    var soma = 0.0 // inicializa como double
    var media: Double

    while(count < 3){
        println("Digite a nota ${count+1}")
        var input = readLine()?.toDoubleOrNull()
        if(input != null){
            notas[count] = input
            soma = soma + notas[count]
            count++
        }
        else{
            println("Nota invalida")
        }
    }
    media = soma / 3
    count = 0
    while(count < 3){
        println("Nota ${count+1}: ${notas[count]}")
        count++
    }
    println("Media: $media")
    if(media >= 6){
        println("Aprovado")
    }
    else{
        println("Reprovado")
    }
}
