public class Main {
  public static void main(String[] args) {
    int[] A = {1,2,3,4,5};
    int[] B = new int[A.length];
    for(int i=0;i<5;i++){
        B[i] = A[i];
    }
    for(int i=0;i<5;i++){
        System.out.print(A[i] + " ");
    }
    System.out.println("\n---------");
    for(int i=0;i<5;i++){
        System.out.print(B[i] + " ");
    }
  }
}

