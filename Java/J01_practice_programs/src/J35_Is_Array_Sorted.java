public class J35_Is_Array_Sorted {
    public static void main(String[] args) {
        int [] arrayNotSorted = {1, 4, 7, 2, 86, 2 ,676, 32 ,5 ,4, 0};
        int [] arraySorted = {0, 1, 2, 2, 4, 4, 5, 7, 32, 86 ,676};
        boolean array1 = true, array2 = true;
        for(int i=0; i<10; i++){
            if (arrayNotSorted[i] >arrayNotSorted[i+1]){
                array1 = false;
                break;
            }
        }
        for(int i=0; i<10; i++){
            if (arraySorted[i] >arraySorted[i+1]){
                array2 = false;
                break;
            }
        }
        if (array1){
            System.out.println("First array is sorted");
        }
        else{
            System.out.println("First array is not sorted");
        }
        if (array2){
            System.out.println("Second array is sorted");
        }
        else{
            System.out.println("Second array is not sorted");
        }
    }
}
