import java.util.Scanner;

public class J11_Is_Input_Greater {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int c = sc.nextInt();
        if (c > 3){
            System.out.println(c + " is greater than 3");
        }
        else{
            System.out.println(c + " is not greater than 3");
        }
    }
}
