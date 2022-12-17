import java.util.Scanner;

public class J15_Remove_Double_And_Triple_Space {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        str = str.replace("   ", " ");
        str = str.replace("  ", " ");
        System.out.println(str.replace("<|name|>", str));
    }
}