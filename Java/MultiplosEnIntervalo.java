import java.io.*;

public class MultiplosEnIntervalo {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());

        for (int i = a; i <= b; i++) {
            if (i % a == 0) {
                System.out.print(i + " ");
            }
        }
    }
}

// https://omegaup.com/arena/problem/MDUI-UAMA/#problems