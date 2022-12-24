public class J26_Star_Pattern_While_Loop {
    public static void main(String[] args) {
        int n = 5;
        int i = n;
        while(i > 0){
            int j = 0;
            while(j < i) {
                System.out.print("*");
                j++;
            }
            i--;
            System.out.println();
        }
    }
}
