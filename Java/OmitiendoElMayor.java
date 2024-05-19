import java.io.*;

public class OmitiendoElMayor {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int cont = 0, num = Integer.parseInt(br.readLine());

        int[] array = new int[num];

        for (int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(br.readLine());
        }

        int mayor = array[0];

        for (int numeros : array) {
            cont += (numeros != mayor) ? 1 : 0;
            mayor = (numeros > mayor) ? numeros : mayor;
        }

        System.out.println("\n" + cont);

        for (int numeros : array) {
            if (numeros != mayor) {
                System.out.print(numeros + " ");
            }
        }
    }
}
