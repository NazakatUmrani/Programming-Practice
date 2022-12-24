public class J20_Star_Pattern {
    public static void main(String[] args) {
        int n = 9;
        for (int i = n; i > 0; i--){
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
