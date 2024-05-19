import java.io.*;

public class ElHueso {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int c = Integer.parseInt(br.readLine());
        int d = Integer.parseInt(br.readLine());

        System.out.println((a < c && b < d) ? "Hueso 2" : (a > c && b > d) ? "Hueso 1" : "Perrito Confundio :(");
    }
}
