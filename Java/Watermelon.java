import java.io.*;

public class Watermelon {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        System.out.print("Ingrese el peso de la sandia: ");
        float peso = Integer.parseInt(br.readLine());

        System.out.println((peso % 2 == 0 && peso > 2) ? "Si" : "No");

    }
}

// https://omegaup.com/arena/problem/Watermel/