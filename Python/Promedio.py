def main():
    calificaciones = [0.0] * 7
    suma = 0.0

    for i in range(len(calificaciones)):
        calificaciones[i] = float(input(f"Digite la calificacion {i + 1}: "))

    for calificacion in calificaciones:
        suma += calificacion

    promedio = suma / 7
    promedio_formateado = "{:.1f}".format(promedio)
    print(f"El promedio es: {promedio_formateado}")

main()

# https://omegaup.com/arena/problem/Promedio-Calificaciones-/