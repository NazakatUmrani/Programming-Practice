import java.util.Scanner;

public class J05_Kilometers_To_Miles {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Distance in KM: ");
        float distanceKM = sc.nextFloat();
        float distanceM = distanceKM / 1.609344f;
        System.out.println(distanceKM + "KM = " + distanceM + "M");
    }
}
