import java.io.*;

public class Rango {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        int num1 = Integer.parseInt(br.readLine());
        int num2 = Integer.parseInt(br.readLine());

        System.out.println((num1 > num2) ? "El primer valor tiene que ser menor." : "");

        for (int i = num1; i <= num2; i++) {
            System.out.print("[" + i + "]");
        }
    }
}
