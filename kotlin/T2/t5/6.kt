fun main(){
    val arr = IntArray(10)
    for(i in 0 until 10){
        println("Digite mais ${10 - i} numeros")
        arr[i] = readLine()?.toIntOrNull()?:return
    }
    println("")
    for(i in 1..10){
        println("${arr[10-i]}")
    }
}

