import java.io.*;

public class FiltrandoMultiplos {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num = Integer.parseInt(br.readLine());
        int[] array = new int[num];

        for (int i = 0; i < num; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        int k = Integer.parseInt(br.readLine());

        for (int i = 1; i <= num; i++) {
            System.out.print((i % k != 0) ? "X" + " " : i + " ");
        }
    }
}

// https://omegaup.com/arena/problem/Filtrando-multiplos/