class ContaBancaria{
    var titular: String = "Nome" 
    var saldo: Double = 0.0
    //constructor(titular: String, saldo:Double){
    //    this.titular = titular
    //    this.saldo = saldo
    //}
    fun depositar(valor: Double){
        saldo += valor 
    }
    fun sacar(valor: Double):Boolean{
        if(saldo >= valor){
            saldo -= valor 
            return true
        }
        else{
            return false
        }
    }
    fun imprimir(){
       println("Titular: $titular \nSaldo: $saldo") 
    }
}
fun main(){
    val conta = ContaBancaria() 
    conta.titular = "Joao Silva"
    conta.saldo = 1000.0

    conta.depositar(200.0)
    val saqueRealizado = conta.sacar(150.0) // opcional esse val
    if(saqueRealizado){
        println("Saque realizado com sucesso!")
    }
    else{
        println("Saldo insuficiente")
    }
    conta.imprimir()
}
