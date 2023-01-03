import java.util.Scanner;

public class J42_Fibonacci_Series_Recursion {
    static int recursiveFib(int n){
        /* if (n==1){
            return 0;
        }
        else if(n == 2){
            return 1;
        } */
        if(n==1||n==2){
            return n-1;
        }
        else{
            return (recursiveFib(n-1)+recursiveFib(n-2));
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println(recursiveFib(N));
    }
}
