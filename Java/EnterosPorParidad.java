import java.io.*;

public class EnterosPorParidad {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num = Integer.parseInt(br.readLine());
        int[] array = new int[num];

        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        int op = Integer.parseInt(br.readLine());

        if (op == 0) {
            for (int i = 0; i < array.length; i++) {
                if (array[i] % 2 == 0) {
                    System.out.println("[" + array[i] + "]");
                }
            }
        }

        if (op == 1) {
            for (int i = 0; i < array.length; i++) {
                if (array[i] % 2 != 0) {
                    System.out.println("[" + array[i] + "]");
                }
            }
        }
    }
}
