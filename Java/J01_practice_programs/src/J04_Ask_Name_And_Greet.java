import java.util.Scanner;

public class J04_Ask_Name_And_Greet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        System.out.println("Hello " + name + ", have a good day");
    }
}
