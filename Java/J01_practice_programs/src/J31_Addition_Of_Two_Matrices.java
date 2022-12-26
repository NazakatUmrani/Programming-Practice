import java.util.Scanner;

public class J31_Addition_Of_Two_Matrices {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][] matrixA = new int [2][3];
        int [][] matrixB = new int [2][3];
        int [][] matrixC = new int [2][3];
        //Taking Matrix A Elements Input
        System.out.println("Enter Elements of Matrix A (2x3)");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                matrixA[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter Elements of Matrix B (2x3)");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                matrixB[i][j] = sc.nextInt();
            }
        }
        // Calculating of Elements of Matrix A and Matrix B (2x3)
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
        System.out.println("Printing Elements of Matrix C (2x3)");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                System.out.print(matrixC[i][j] + " ");
            }
            System.out.println();
        }
    }
}
