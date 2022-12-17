import java.util.Scanner;

public class J10_Encrypt_Grade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char grade = 'B';
        grade = (char)(grade+8);
        System.out.println("Encrypted grade is " + grade);
        grade = (char)(grade-8);
        System.out.println("Decrypted grade is " + grade);
    }
}
