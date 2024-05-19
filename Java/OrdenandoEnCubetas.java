import java.io.*;

public class OrdenandoEnCubetas {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        byte cantidadDePelotas = Byte.parseByte(br.readLine());
        byte maximoNumeroAEncontrar = Byte.parseByte(br.readLine());

        byte[] pelotas = new byte[cantidadDePelotas + 1];

        if (maximoNumeroAEncontrar <= 100) {

            for (byte i = 0; i < cantidadDePelotas; i++) {

                byte numPelotas = Byte.parseByte(br.readLine());
                pelotas[numPelotas]++;

                if (pelotas[numPelotas] > 100) {
                    System.out.println("El numero de pelota exede el rango.");
                    break;
                }
            }

            for (byte i = 1; i <= maximoNumeroAEncontrar; i++) {

                System.out.println(i + ": " + pelotas[i]);

            }
        }
    }
}
