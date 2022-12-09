import java.util.Scanner;

public class J08_Expression {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float v = sc.nextFloat();
        float u = sc.nextFloat();
        float a = sc.nextFloat();
        float s = sc.nextFloat();
        System.out.println(((v*v) - (u*u))/(2*a*s));
    }
}
