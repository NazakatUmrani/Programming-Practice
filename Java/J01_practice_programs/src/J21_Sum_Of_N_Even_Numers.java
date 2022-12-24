public class J21_Sum_Of_N_Even_Numers {
    public static void main(String[] args) {
        int sum = 0;
        int n = 5;
        for (int i = 0; i < n; i++){
            sum += (2*i);
        }
        System.out.println("Sum of n even numbers = " + sum);
    }
}
