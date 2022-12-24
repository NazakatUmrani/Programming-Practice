public class J24_Factorial {
    public static void main(String[] args) {
        int n = 10;
        int fact = 1;
        for (int i=2; i<=n; i++){
            fact *= i;
        }
        System.out.println("Factorial = " + fact);
    }
}
