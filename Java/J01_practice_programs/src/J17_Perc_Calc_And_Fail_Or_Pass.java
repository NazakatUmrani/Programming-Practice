import java.util.Scanner;

public class J17_Perc_Calc_And_Fail_Or_Pass {
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

        float perc = ((math+english+sindhi)/300.0f)*100;

        if (perc >= 40 && math >= 33 && english >= 33 && sindhi >= 33)
            System.out.println("Percentage is: " + perc + " You are pass");
        else
            System.out.println("Percentage is: " + perc + " You are fail");
    }
}