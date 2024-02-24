public class Main {
    public static void main(String[] args){
        int x, a = 10, b = 3;
        while ((x = a % b) != 0){
            a = b;
            b = x;
        }
        System.out.println(b);
    }
}
