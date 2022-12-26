public class J34_Min_In_An_Array {
    public static void main(String[] args) {
        int [] array = {1, 4, 7, 2, 86, 2 ,676, 32 ,5 ,4, 0};
        int min = array[0];
        for(int element: array){
            if (min > element)
               {min = element;}
        }
        System.out.println("Min in array is: " + min);
    }
}
