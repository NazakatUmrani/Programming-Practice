import java.util.Scanner;

public class J13_Str_Replace_Space_By_Underscore {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("String printed in original format: " + str);
        System.out.println("String printed in replaced format: " + str.replace(" ", "_"));
        str = str.replace(" ", "_");
        System.out.println("String converted in replaced format: " + str);
    }
}
