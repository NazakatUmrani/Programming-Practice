public class J28_Sum_Of_Array {
    public static void main(String[] args) {
        float [] arr = {4.5f, 3.5f, 10.0f, 45.5f, 67.5f};
        float sum = 0;
        for(int i = 0; i < 5; i++){
            sum += arr[i];
        }
        System.out.println("Sum = " + sum);
    }
}