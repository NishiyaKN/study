public class Main {
  public static void main(String[] args) {
    int[] A = new int[15];
    for(int i=0;i<A.length;i++){
        A[i] = i;
    }

    int[] B = new int[A.length];
    for(int i=0;i<A.length;i++){
        B[i] = A[i] * A[i];
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


