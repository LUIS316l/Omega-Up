def main():

    num = int(input())
    array = []

    for i in range(num):
        array.append(int(input()))

    for i in range(num // 2):
        suma = array[i] + array[num - 1 - i]
        print(suma, end=" ")

main()

# https://omegaup.com/arena/problem/Sumando-elementos-opuestos-de-un/