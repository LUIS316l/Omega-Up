
def main(): 
    
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())

    if a < c and b < d:
        print("Hueso 2")
    elif a > c and b > d:
        print("Hueso 1")
    else:
        print("Perrito confuncido :( ")

main()

# https://omegaup.com/arena/problem/El-perrito-que-quiere-un-hueso/