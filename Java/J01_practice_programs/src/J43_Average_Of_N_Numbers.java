import java.util.Scanner;

public class J43_Average_Of_N_Numbers {
    static float avgNNumbers(int a, int ...b){
        float avg = (float)a;
        float size=1f;
        for (int elements: b) {
            avg += elements;
            size++;
        }
        avg /= size;
        return avg;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        System.out.println(avgNNumbers(a,b,c,d));
    }
}
