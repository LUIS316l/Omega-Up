import java.io.*;

public class Factorial {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num = Integer.parseInt(br.readLine());
        int fact = 1;

        for (int i = num; i > 0; i--) {
            if (num <= 15) {
                fact = fact * i;
            } else {
                System.out.println("Numero invalido");
            }
        }

        System.out.println(fact);
    }
}

// https://omegaup.com/arena/problem/Calculadora-Factorial/
