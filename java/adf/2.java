import java.util.Scanner;

public class Quiz_Capitais_1Sol{
    public static void main(String[] args){
        String[][] capitaisPaises = {
            {"Italia", "Roma"},
            {"França", "Paris"},
            {"Espanha", "Madrid"},
            {"Alemanha", "Berlim"},
            {"China", "Pequim"},
            {"Portugal", "Lisboa"},
            {"Russia", "Moscou"},
            {"Suica", "Berna"},
            {"Austria", "Viena"},
            {"Egito", "Cairo"},
        };
    int score = 0;
    Scanner scanner = new Scanner(System.in);

    for (int i = 0; i < capitaisPaises.length; i++){
        System.out.println("Qual e a capital do pais " + capitaisPaises[i][0] + "?");
        String respostaUsuario = scanner.nextLine();
        if (respostaUsuario.trim().equalsIgnoreCase(capitaisPaises[i][1])){
                System.out.println("Correto!");
                score++;
        }
        else{
            System.out.println("Errado! A resposta correta e: " + capitaisPaises[i][1]);
        }
    }
        scanner.close();
        System.out.println("\nO quiz terminou. Voce acertou " + score + " de " + capitaisPaises.length + " perguntas.");
        System.out.println("Sua nota e: " + (score * 10 / capitaisPaises.length));
        if (score < 6){
            System.out.println("Baixo Desempenho");
        }
        else if(score >=6 && score <=8){
            System.out.println("Bom desempenho");
        }
        else{
            System.out.println("Otimo desempenho");
        }
    }
}
