import java.util.Scanner;

public class J40_Recursive_N_Natual_Num_Sum {
    public static int recursiveSum(int N){
        if(N == 1){
            return 1;
        }
        else if (N < 1) {
            return 0;
        }
        else{
            return N+(recursiveSum(N-1));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int sumOfNNaturalNums = recursiveSum(N);
        System.out.println(sumOfNNaturalNums);
    }
}
