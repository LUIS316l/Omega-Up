import java.io.*;

public class TablaDeMultiplicarN {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num = Integer.parseInt(br.readLine());

        for (int i = 0; i < 11; i++) {
            System.out.println(num + "x" + i + "=" + num * i);
        }
    }
}

// https://omegaup.com/arena/problem/Tabla-de-multiplicar-N/