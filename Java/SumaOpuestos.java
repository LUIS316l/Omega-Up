import java.io.*;

public class SumaOpuestos {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int n = Integer.parseInt(br.readLine());

        int[] array = new int[n];

        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        for (int i = 0; i < array.length / 2; i++) {
            int suma = array[i] + array[n - 1 - i];
            System.out.print(suma + " ");
        }
    }
}

// https://omegaup.com/arena/problem/Sumando-elementos-opuestos-de-un/