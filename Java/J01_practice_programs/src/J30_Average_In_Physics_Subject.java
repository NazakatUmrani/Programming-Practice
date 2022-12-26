public class J30_Average_In_Physics_Subject {
    public static void main(String[] args) {
        float [] marks = {90.0f, 87.5f, 79.0f, 67.5f, 99f, 88f, 87f, 100f, 82.5f, 91f};
        float avg = 0;
        float sum = 0;
        for (float elements : marks) {
            sum += elements;
        }
        avg = sum/10;
        System.out.printf("Average Marks of 10 students in physics is: %.2f%%", avg);
    }
}
