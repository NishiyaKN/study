fun main(){
    val notas = IntArray(10)
    var soma = 0
    for(i in 0 until 10){
        println("Digite mais ${10 - i} notas");
        notas[i] = readLine()?.toIntOrNull() ?: return
        soma += notas[i]
    }
    val media = soma / 10.0
    var acima_media = 0
    println("Media da turma: $media")
    for(i in 0 until 10){
        if(notas[i] > media){
            acima_media++
        }
    }
    println("$acima_media alunos tiveram a nota acima da media")
}
