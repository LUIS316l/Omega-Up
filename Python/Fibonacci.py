def main():

    filas = int(input())
    num1 = 0 
    num2 = 1
    suma = 1

    for i in range(filas):
        print(suma)


        suma = num1 + num2
        num1 = num2
        num2 = suma

main()