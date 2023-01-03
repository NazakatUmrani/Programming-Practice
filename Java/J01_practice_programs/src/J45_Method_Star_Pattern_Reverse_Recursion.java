public class J45_Method_Star_Pattern_Reverse_Recursion {
    static void starPatternRecursion(int x){
        if (x>0){
            for (int j=0; j<x; j++){
                System.out.print("*");
            }
            System.out.println();
            starPatternRecursion(x-1);
        }
    }
    public static void main(String[] args){
        int num = 9;
        starPatternRecursion(num);
    }
}
