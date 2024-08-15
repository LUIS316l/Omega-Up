def main(): 
    num = int(input())
    array = [int(input()) for _ in range(num)]
    op = int(input())

    if op == 0:
        for i in array:
            if i % 2 == 0: 
                print(f"[ {i} ]")

    if op == 1:
        for i in array: 
            if i % 2 != 0: 
                print(f"[ {i} ]")

main()

# https://omegaup.com/arena/problem/Imprimiendo-enteros-por-paridad/