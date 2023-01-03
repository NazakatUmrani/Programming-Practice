import java.util.Scanner;

public class J46_Celsius_To_FahrenheitMethod {
    static float celsiusToFahrenheit(float C){ //(°C × 9/5) + 32 = °F
        return ((C*(9f/5f))+32);
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float C = sc.nextFloat();
        float F = celsiusToFahrenheit(C);
        System.out.format("%.2fC = %.2fF", C, F);
    }
}
