import java.lang.Math;
public class Main {
  public static void main(String[] args) {
    int[] A = new int[15];
    for(int i=0;i<A.length;i++){
        A[i] = i;
    }

    double[] B = new double[A.length];
    for(int i=0;i<A.length;i++){
        B[i] = Math.sqrt(A[i]);
    }

    for(int i=0;i<A.length;i++){
    System.out.print(A[i] + " ");
    }

    System.out.println("");
    for(int i=0;i<A.length;i++){
      System.out.print(B[i] + " ");
    }
  }
}



