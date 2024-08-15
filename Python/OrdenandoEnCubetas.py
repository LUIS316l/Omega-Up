def main():

    cantidad_de_pelotas = int(input())
    maximo_numero_a_encontrar = int(input())

    pelotas = [0] * (maximo_numero_a_encontrar + 1)

    if maximo_numero_a_encontrar <= 100:
        for _ in range(cantidad_de_pelotas):
            num_pelotas = int(input())
            pelotas[num_pelotas] += 1

            if pelotas[num_pelotas] > 100:
                print("El numero de pelota exede el rango.")
                break

        for i in range(1, maximo_numero_a_encontrar + 1):
            print(f"{i}: {pelotas[i]}")

main()


# https://omegaup.com/arena/problem/Ordenando-en-cubetas/