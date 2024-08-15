def main():
    num1 = int(input())
    num2 = int(input())

    if num1 > num2: 
        print("El primer numero tiene que ser menor.")
    else:
        for i in range(num1, num2 + 1):
            print(f"[{i}]", end=" ")

main()

# https://omegaup.com/arena/problem/C40/