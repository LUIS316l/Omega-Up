def main():
    num = int(input())
    array = [int(input()) for _ in range(num)]
    k = int(input())

    for i in range(1, num + 1):
        print("X" if i % k != 0 else str(i), end=" ")


main()
