public class J25_Factorial_While_Loop {
    public static void main(String[] args) {
        int n = 10;
        int fact = 1;
        int i =2;
        while(i <= n){
            fact *= i;
            i++;
        }
        System.out.println("Factorial = " + fact);
    }
}
