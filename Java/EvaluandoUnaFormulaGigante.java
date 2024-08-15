import java.io.*;

public class EvaluandoUnaFormulaGigante {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        double x = Double.parseDouble(br.readLine());
        double y = Double.parseDouble(br.readLine());
        double z = Double.parseDouble(br.readLine());

        double operacion = (((2 * x + y) / z) * (Math.pow(y, 3) - z))
                / ((x + 2 * y + 3 * z) / (z - 2 * y - 3 * x) + Math.pow(x, 2) + Math.pow(z, 2));

        System.out.println(operacion);
    }
}

// https://omegaup.com/arena/problem/Evaluando-una-formula-gigante/
