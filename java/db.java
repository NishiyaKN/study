import java.sql.*;


public class db {
    public static void main(String[] args) {
        System.out.println("Hello World");
        Connection con = null;

        try {
            con = DriverManager.getConnection("jdbc:mysql://localhost/aula2?user=root&password=Dai6Kuchikutai!");

        Statement st = con.createStatement();

        ResultSet rs = st.executeQuery("SELECT Titulo FROM LIVRO");

        while (rs.next()){
            System.out.println(rs.getString(1));
        }

        }
        catch(SQLException e){
            e.printStackTrace();
        }

    }
}
