public class Main {
  public static void main(String[] args) {
      int[] A = {1,2,3,4,5,6,7,8};
      int[] B = new int[A.length];
      for(int i=0;i<A.length;i++){
          B[i] = A[i] * 2;
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


