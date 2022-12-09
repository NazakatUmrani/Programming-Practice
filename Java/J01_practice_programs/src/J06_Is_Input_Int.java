import java.util.Scanner;

public class J06_Is_Input_Int {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number and we will tell you if it is int or not: ");
        boolean isInt = sc.hasNextInt();
        System.out.println("Input Int " + isInt);
    }
}
