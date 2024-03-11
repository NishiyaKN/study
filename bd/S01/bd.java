 import java.sql.*;
import java.util.Scanner;

public class JDBC_Test {
    public static void main(String[] args) {
        Connection con = null;
        String cliente;
        Scanner entrada = new Scanner(System.in);
        
        System.out.println("Este programa busca os livros emprestados de um cliente.\n");
        System.out.print("Digite o nome do cliente: ");
        cliente = entrada.nextLine();
        cliente.trim();

        
        try {
            con = DriverManager.getConnection("jdbc:mysql://localhost/aula2?user=root&password=");

	        Statement st = con.createStatement();
	
	        String consulta = "select u.nome, l.Titulo, le.datasaida from livros_emprestados le, livro l, "
	        		+ "usuario u where le.IdLivro = l.IdLivro "
	        		+ "  and le.NoCartao = u.NoCartao and u.Nome like '%"+ cliente + "%'";
	        
	        ResultSet rs = st.executeQuery(consulta);
	
	        while (rs.next()){
	            System.out.println(rs.getString(1) + " - " + rs.getString(2) + " - " + rs.getString(3));
	        }

        }
        catch(SQLException e){
            e.printStackTrace();
        }

    }
}
