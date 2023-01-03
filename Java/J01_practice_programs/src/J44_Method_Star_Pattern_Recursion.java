public class J44_Method_Star_Pattern_Recursion {
    static void starPatternRecursion(int x){

        if (x>0){
            starPatternRecursion(x-1);
            for (int j=0; j<x; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int num = 9;
        starPatternRecursion(num);
    }
}
