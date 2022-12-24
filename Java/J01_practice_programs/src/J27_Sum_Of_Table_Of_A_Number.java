public class J27_Sum_Of_Table_Of_A_Number {
    public static void main(String[] args) {
        int n = 8;
        int sum = 0;
        for (int i = 1; i <= 10; i++){
            sum += (n*i);
        }
        System.out.println("Sum = " + sum);
    }
}
