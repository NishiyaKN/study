package quiz3_01;
import java.util.Scanner;
public class LogicaQuiz {
    private DadosQuiz dadosQuiz = new DadosQuiz();
    private int score = 0;

    public void processarQuiz(){
        Scanner scanner = new Scanner(System.in);
        String[][] capitaisPaises = dadosQuiz.getCapitaisPaises();

        for(int i = 0; i < capitaisPaises.length; i++){
            System.out.println("Qual e a capital do pais " + capitaisPaises[i][0] + "?");
            String respostaUsuario = scanner.nextLine();
            verificarResposta(respostaUsuario, capitaisPaises[i][1]);
        }
        scanner.close();
        finalizarQuiz(capitaisPaises.length);
    }

    private void verificarResposta(String resposta, String respostaCorreta){
        if(resposta.trim().equalsIgnoreCase(respostaCorreta)){
            System.out.println("Correto!");
            score++;
        }
        else{
            System.out.prinln("Errado! A resposta correta e: " + respostaCorreta);
        }
    }

private void finalizarQuiz(int totalPerguntas){
    System.out.println("\nO quiz terminou. Voce acertou " + score + " de " + totalPerguntas + " perguntas.");
    int nota = score * 10 / totalPerguntas;
    System.out.println("Sua nota e: " + nota);
    avaliarDesempenho(nota);
}

private void avaliarDesempenho(int nota){
    if (nota > 8) {
        System.out.println("Otimo desempenho!");
    }
    else if(nota < 6){
        System.out.println("Baixo desempenho!");
    }
    else{
        System.out.println("Bom desempenho");
    }
}
