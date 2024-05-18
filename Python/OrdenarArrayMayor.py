def main():
    array = []

    for i in range(5):
        array.append(int(input()))


    for i in range(4):
        for j in range(4 - i):
            if array[j] < array[j + 1]:
                num = array[j]
                array[j] = array[j + 1]
                array[j + 1] = num

    for numeros in array:
        print(numeros, end=" ")


main()