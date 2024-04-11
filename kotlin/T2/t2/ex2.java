public class Main {
    public static void main(String[] args){
        int x = 4, a = 15, b = 2, y = 8;
        while ((x = a % b) != 0){
            y =  y + 1;
            b =  y + x;
            a =  a - 1;
        }
        System.out.println("y = " + y);
    }
}
