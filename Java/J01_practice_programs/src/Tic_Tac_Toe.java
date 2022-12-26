import java.util.Scanner;
import java.util.Random;
public class Tic_Tac_Toe {
    static char [][]board = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    static char CurrentMark;
    static int CurrentPlayer;
    static int Pc=2,Human=1;

    static boolean placeMarker(int slot){
        int row;
        int col;
        row = slot/3;
        if((slot%3) ==0){
            row = row-1;
            col = 2;
        }
        else {
            col = (slot%3)-1;
        }

        if(board[row][col]=='X' || board[row][col]=='x' || board[row][col]=='O' || board[row][col]=='o'){
            return false;
        }
        else{
            board[row][col] = CurrentMark;
            return true;
        }
    }

    static void drawBoard(){
        System.out.println("\n      |       |      ");
        System.out.println("   "+board[0][0]+"  |   "+board[0][1]+"   |   "+board[0][2]);
        System.out.println("______|_______|______");
        System.out.println("      |       |      ");
        System.out.println("   "+board[1][0]+"  |   "+board[1][1]+"   |   "+board[1][2]);
        System.out.println("______|_______|______");
        System.out.println("      |       |      ");
        System.out.println("   "+board[2][0]+"  |   "+board[2][1]+"   |   "+board[2][2]);
        System.out.println("      |       |      ");
    }
    static void reset_Board(){

        if(board[0][0]!= 0){
            board[0][0]='1';
        }
        if(board[0][1]!=0){
            board[0][1]='2';
        }
        if(board[0][2]!=0){
            board[0][2]='3';
        }
        if(board[1][0]!=0){
            board[1][0]='4';
        }
        if(board[1][1]!=0){
            board[1][1]='5';
        }
        if(board[1][2]!=0){
            board[1][2]='6';
        }
        if(board[2][0]!=0){
            board[2][0]='7';
        }
        if(board[2][1]!=0){
            board[2][1]='8';
        }
        if(board[2][2]!=0){
            board[2][2]='9';
        }
    }

    static int theWinner() // This will Declare the Winner
    {
        for(int i=0; i<3; i++){
            // Rows
            if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]) {
                return CurrentPlayer;
            }
            // Columns
            if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]) {
                return CurrentPlayer;
            }
        }

        if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]) {
            return CurrentPlayer;
        }
        if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]) {
            return CurrentPlayer;
        }

        return 0;
    }

    static void swaping() // This will Exchange Player and Markers
    {
        if(CurrentMark == 'X') {
            CurrentMark = 'O';
        }else {
            CurrentMark = 'X';
        }

        if(CurrentPlayer == Human) {
            CurrentPlayer = Pc;
        }
        else {
            CurrentPlayer = Human;
        }
    }

    static void Player_vs_Pc(){
        Scanner in = new Scanner(System.in);
        Random  r  = new Random();
        int slot=0,winner=0;
        char Marker;

        System.out.print("Human Please Enter Your Marker\nChoose (X or O) : ");
        Marker = in.nextLine().charAt(0);

        CurrentMark = Marker;
        CurrentPlayer = Human;
        drawBoard();

        for(int i=0; i<9; i++){
            if(CurrentPlayer == Human){
                System.out.print("\nHuman's Turn : ");
                slot = in.nextInt();
                System.out.print("\nYou Choosed Slot : "+slot);
                if((slot<1) || (slot>9)){
                    drawBoard();
                    System.out.print("\nInvalid Slot!\nPlease Re-Enter Slot");
                    --i;
                    continue;
                }
                placeMarker(slot);
                if(placeMarker(slot)){
                    drawBoard();
                    System.out.println("Current Slot is Occupied\nSelect another.");
                    --i;
                    continue;
                }
            }
            else if(CurrentPlayer == Pc){
                System.out.print("\nPc's Turn : ");
                slot = r.nextInt(1,10);
                System.out.println("\nPc Choosed Slot : "+slot);

                if((slot<1) || (slot>9)){
                    drawBoard();
                    --i;
                    continue;
                }
//                placeMarker(slot);
                if(!placeMarker(slot)){
                    drawBoard();
                    --i;
                    continue;
                }

            }

            winner = theWinner();
            if(winner == Human){
                System.out.println("\nHuman is the Winner <3");
                break;
            }
            if (winner == Pc) {
                System.out.println("\nPc is the Winner <3");
                break;
            }
            swaping();
            drawBoard();
        }

        if(winner == 0){
            System.out.println("Game Tied!");
        }

        reset_Board();
    }
    public static void main(String[] args) {
        Player_vs_Pc();
    }
}
