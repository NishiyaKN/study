fun main(){
    val q = IntArray(10)
    var i = 0
    var menor = 0 
    while(i < 10){
        println("Digite mais ${10 - i} numeros")
        var num = readLine()?.toIntOrNull()?:return
        if(i == 0){
            menor = num
        }
        if(num < 0){
            println("Esse programa so aceita numeros positivos")
        }
        else{
            q[i] = num
            if(num < menor){
                menor = num
            }
            i++
        }
    }
    println("menor elemento: $menor\nPosicao no array: ${q.indexOf(menor)}")
}
