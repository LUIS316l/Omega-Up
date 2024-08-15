def main():
    a = int(input())
    b = int(input())

    for i in range(a, b + 1):
        if i % a == 0:
            print(i, end=" ")   

main()

# https://omegaup.com/arena/problem/MDUI-UAMA/#problems