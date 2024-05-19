import java.io.*;

public class Pares {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num = Integer.parseInt(br.readLine());

        int[] array = new int[num];

        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        boolean hayPares = false;

        for (int j : array) {
            if (j % 2 == 0) {
                System.out.print("[" + j + "]");
                hayPares = true;
            }
        }

        if (!hayPares) {
            System.out.println(":(");
        }
    }
}
