public class Main {
  public static void main(String[] args) {
    int[] A = new int[10];
    for(int i=0;i<A.length;i++){
        A[i] = i;
    }

    int[] B = new int[A.length];
    for(int i=0;i<A.length;i++){
        B[i] = A[i] * i;
    }

    int[] C = new int[A.length];
    for(int i=0;i<A.length;i++){
        C[i] = A[i] + B[i];
    }

    for(int i=0;i<A.length;i++){
    System.out.print(A[i] + " ");
    }

    System.out.println("");
    for(int i=0;i<A.length;i++){
      System.out.print(B[i] + " ");
    }

    System.out.println("");
    for(int i=0;i<A.length;i++){
      System.out.print(C[i] + " ");
    }
  }
}



