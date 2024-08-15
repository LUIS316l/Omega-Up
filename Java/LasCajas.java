import java.io.*;

public class LasCajas {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int c = Integer.parseInt(br.readLine());

        System.out.println(a + b + c);

    }
}

// https://omegaup.com/arena/problem/SB08-Las-cajas/#problems
