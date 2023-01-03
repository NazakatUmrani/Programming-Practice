public class J41_Method_Star_Pattern_Reverse {
    static void starPattern(int x){
        for (int i=x; i>0; i--){
            for (int j=i; j>0; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int num = 9;
        starPattern(num);
    }
}
