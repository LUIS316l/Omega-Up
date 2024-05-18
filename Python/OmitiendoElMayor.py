def main():
    num = int(input())
    array = []

    for _ in range(num):
        array.append(int(input()))

    mayor = array[0]
    cont = 0

    for numeros in array:
        cont += 1 if numeros != mayor else 0
        mayor = numeros if numeros > mayor else mayor

    print(cont)

    for numeros in array:
        if numeros != mayor:
            print(numeros, end=" ")

main()