import java.io.*;
import java.util.Arrays;

public class OrdenarArrayMenor {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int[] array = new int[10];

        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(array);

        for (int j : array) {
            System.out.print(j + " ");
        }
    }
}
