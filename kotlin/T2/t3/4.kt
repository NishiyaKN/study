fun main(){
    var notas = DoubleArray(3)
    var count = 0
    var media: Double
    while(count < 3){
        println("Digite a nota ${count+1}")
        var input = readLine()?.toDoubleOrNull()
        if(input != null){
            notas[count] = input
            count++
        }
        else{
            println("Nota invalida")
        }
    }
    media = (notas[0] * 2 + notas[1] * 3 + notas[2] * 4) / 9
    count = 0
    while(count < 3){
        println("Nota ${count+1}: ${notas[count]}")
        count++
    }
    println("Media: $media")
    if(media >= 5){
        println("Aprovado")
    }
    else{
        println("Reprovado")
    }
}
