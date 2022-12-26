import java.util.Scanner;

public class J32_Reverse_An_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] array = new int [3];
        int [] revereseArray = new int [3];
        for(int i=0; i<3; i++){
                array[i] = sc.nextInt();
        }
        int j = 2;
        for(int i=0; i<3; i++) {
            revereseArray[i] = array[j - i];
        }
        for(int k=0; k<3; k++){
            System.out.print(revereseArray[k] + " ");
        }
    }
}
