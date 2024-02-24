fun main(){
    var x = 4
    var a = 15
    var b = 2
    var y = 8
    var t = true

    while (t){
        x = a % b
        if (x != 0){
            y += 1
            b = y + x
            a = a - 1
        }
        else{
        t = false
        }
    }
    println("y = $y")
}
