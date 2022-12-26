public class J37_Fibonacci_Series {
    static void fibonacciSeries(int x){
        int prevNum = 0, nextNum = 1;
        System.out.print(prevNum);
        for (int i=0; i<x-2; i++){
            System.out.print(" " + nextNum);
            int temp = nextNum;
            nextNum = nextNum+prevNum;
            prevNum = temp;
        }
        System.out.println(" " + nextNum);
    }
    public static void main(String[] args) {
        int n = 11;
        fibonacciSeries(n);
    }
}
