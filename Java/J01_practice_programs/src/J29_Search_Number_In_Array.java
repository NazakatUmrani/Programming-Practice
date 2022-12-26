public class J29_Search_Number_In_Array {
    public static void main(String[] args) {
        float [] arr = {4.5f, 3.5f, 10.0f, 45.5f, 67.5f};
        float num = 1f;
        int index = -1;
        boolean search = false;
        for(int i = 0; i < 5; i++){
            if (num == arr[i]){
                search = true;
                index = i;
                break;
            }
        }
        if (search){
            System.out.println("Number has been found and it's Index is " + index);
        }
        else{
            System.out.println("Number not found in array");
        }
    }
}