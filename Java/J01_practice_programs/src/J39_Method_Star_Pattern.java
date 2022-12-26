public class J39_Method_Star_Pattern {
    static void starParttern(int x){
        for (int i=0; i<=x; i++){
            for (int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int num = 9;
        starParttern(num);
    }
}
