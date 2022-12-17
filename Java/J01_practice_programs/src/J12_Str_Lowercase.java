import java.util.Scanner;

public class J12_Str_Lowercase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("String printed in original format: " + str);
        System.out.println("String printed in lowercase: " + str.toLowerCase());
        str = str.toLowerCase();
        System.out.println("String converted in lowercase: " + str);
    }
}