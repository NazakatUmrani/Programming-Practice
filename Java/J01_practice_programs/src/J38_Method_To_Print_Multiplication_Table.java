public class J38_Method_To_Print_Multiplication_Table {
    static void multiplicationTable(int n){
        for (int i=1; i<=10; i++){
            System.out.printf("%d x %d = %d\n", n, i, n*i);
        }
    }
    public static void main(String[] args) {
        int num = 9;
        multiplicationTable(num);
    }
}
