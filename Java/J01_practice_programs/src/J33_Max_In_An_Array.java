public class J33_Max_In_An_Array {
    public static void main(String[] args) {
        int [] array = {1, 4, 7, 2, 86, 2 ,676, 32 ,5 ,4, 0};
        int max = array[0];
        for(int element: array){
            if (max < element)
               {max = element;}
        }
        System.out.println("Max in array is: " + max);
    }
}
