fun main(){
    val q = IntArray(10)
    var i = 0
    var maior = 0 
    while(i < 10){
        println("Digite mais ${10 - i} numeros")
        var num = readLine()?.toIntOrNull()?:return
        if(i == 0){
            maior = num
        }
        if(num < 0){
            println("Esse programa so aceita numeros positivos")
        }
        else{
            q[i] = num
            if(num > maior){
                maior = num
            }
            i++
        }
    }
    println("Maior elemento: $maior\nPosicao no array: ${q.indexOf(maior)}")
}