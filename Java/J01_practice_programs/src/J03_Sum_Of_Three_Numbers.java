import java.util.Scanner;
public class J03_Sum_Of_Three_Numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1, num2, num3, total;
        System.out.print("Enter Three Numbers: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        num3 = sc.nextInt();
        total = num1 + num2 + num3;
        System.out.println("Total = " + total);
    }
}
