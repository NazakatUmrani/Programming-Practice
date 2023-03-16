import java.io.*;



public class J005_java_loops_i {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        bufferedReader.close();
        for(int i=1; i<=10; i++){
            System.out.printf("%d x %d = %d\n", N, i, N*i);
        }
    }
}
