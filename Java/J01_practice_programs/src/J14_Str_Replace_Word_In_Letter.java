import java.util.Scanner;

public class J14_Str_Replace_Word_In_Letter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String letter = "Dear <|name|>, Thanks a lot";
        System.out.print("Enter your name: ");
        String str = sc.nextLine();
        System.out.println(letter.replace("<|name|>", str));
    }
}