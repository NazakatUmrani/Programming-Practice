import java.util.Comparator;
import java.util.Scanner;
import java.util.Random;

public class J19_Rock_Paper_Scissor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random r = new Random();
        int userScore = 0, computerScore = 0;
        int i = 0;
        while(i < 5) {
            int computerChoice = r.nextInt(0, 3);
            System.out.println("0 -- for Rock\n1 -- for Paper\n2 -- for Scissor");
            System.out.print("Enter your Choice: ");
            int userChoice = sc.nextInt();
            if (userChoice == 0) {
                System.out.println("User Choose Rock");
                if (computerChoice == 1) {
                    computerScore += 1;
                    System.out.println("Computer Choose Paper");
                } else if (computerChoice == 2) {
                    userScore += 1;
                    System.out.println("Computer Choose Scissor");
                }
                else{
                    System.out.println("Computer Choose Rock");
                }
            } else if (userChoice == 1) {
                System.out.println("User Choose Paper");
                if (computerChoice == 0) {
                    userScore += 1;
                    System.out.println("Computer Choose Rock");
                } else if (computerChoice == 2) {
                    computerScore += 1;
                    System.out.println("Computer Choose Scissor");
                }
                else{
                    System.out.println("Computer Choose Paper");
                }
            } else if (userChoice == 2) {
                System.out.println("User Choose Scissor");
                if (computerChoice == 0) {
                    computerScore += 1;
                    System.out.println("Computer Choose Rock");
                } else if (computerChoice == 1) {
                    userScore += 1;
                    System.out.println("Computer Choose Paper");
                }
                else{
                    System.out.println("Computer Choose Scissor");
                }
            }
            System.out.println("User Score is: " + userScore);
            System.out.println("Computer Score is: " + computerScore);
            i++;
        }
        if (computerScore > userScore){
            System.out.println("Computer Wins");
        }
        else if (userScore > computerScore){
            System.out.println("User Wins");
        }
        else{
            System.out.println("Tie");
        }
    }
}
