def main():
    array = []

    for i in range(1, 11):
        num = int(input(f"{i}: "))
        array.append(num)

    array.sort()

    for num in array:
        print(num, end=" ")


main()