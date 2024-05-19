import java.io.*;

public class Fibonacci {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num1 = 0, num2 = 1, suma = 1, filas = Integer.parseInt(br.readLine());

        for (int i = 0; i < filas; i++) {
            System.out.println(suma);

            suma = num1 + num2;
            num1 = num2;
            num2 = suma;
        }
    }
}
