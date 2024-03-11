fun connectDB(
    hostname: String = "localhost",
    username: String = "mysql",
    password: String = "secret"){
        println("hostname =$hostname")        
        println("username =$username")        
        println("password =$password")        
    }

    fun main(){
        connectDB("MyCoumputer", "root")
    }
    
