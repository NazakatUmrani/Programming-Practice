import java.util.Scanner;
public class J02_Perc_Calc {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        byte math, english, sindhi, science, urdu;
        System.out.print("Enter Marks obtained in Math: ");
        math = sc.nextByte();
        System.out.print("Enter Marks obtained in English: ");
        english = sc.nextByte();
        System.out.print("Enter Marks obtained in Sindhi: ");
        sindhi = sc.nextByte();
        System.out.print("Enter Marks obtained in Science: ");
        science = sc.nextByte();
        System.out.print("Enter Marks obtained in Urdu: ");
        urdu = sc.nextByte();
        float perc = ((math+science+english+urdu+sindhi)/500.0f)*100;
        System.out.println("Percentage is: " + perc);
    }
}