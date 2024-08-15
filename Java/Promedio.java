import java.io.*;

public class Promedio {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws Exception {

        float[] calificaciones = new float[7];
        float suma = 0;

        for (int i = 0; i < calificaciones.length; i++) {
            System.out.print("Digite la calificacion " + (i + 1) + ": ");
            calificaciones[i] = Float.parseFloat(br.readLine());
        }

        for (int i = 0; i < calificaciones.length; i++) {
            suma += calificaciones[i];
        }

        float promedio = suma / 7;
        String promedioFormateado = String.format("%.3f", promedio);
        System.out.println("El promedio es: " + promedioFormateado);
    }
}

// https://omegaup.com/arena/problem/Promedio-Calificaciones-/
