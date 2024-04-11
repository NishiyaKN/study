fun main(){
    val a = IntArray(10)
    val m = IntArray(10)
    for(i in 0 until 10){
        println("Digite mais ${10 - i} numeros")
        a[i] = readLine()?.toIntOrNull()?:return
    } 
    println("\nDigite o valor x")
    val x = readLine()?.toIntOrNull()?:return
    for(i in 0 until 10){
        m[i] = a[i] * x
    }
    println("\nArray m:")
    for(i in 0 until 10){
        println(m[i])
    }
}
