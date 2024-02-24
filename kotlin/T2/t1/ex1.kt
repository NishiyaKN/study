fun main(){
    var x: Int
    var a = 10
    var b = 3
    var verdade = true

    while(verdade){
        x = a % b
        if (x != 0){
            a = b
            b = x
        }
        else{
            verdade = false
        }
    }
    println(b)
}
