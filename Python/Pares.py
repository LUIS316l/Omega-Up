def main():
    num = int(input())
    array = [int(input()) for _ in range(num)]
    hay_pares = False

    for i in array:
        if i % 2 == 0:
            print(f"[{i}]", end=" ")
            hay_pares = True

    if not hay_pares:
        print(":(")


main()