def main():
    num = int(input())
    fact = 1

    if num <= 15:
        for i in range(num, 0, -1):
            fact *= i
    else:
        print("Numero invalido")

    print(fact)


main()
