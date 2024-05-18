def main():
    print("Ingrese el peso de la sandia: ")
    peso = float(input())

    if peso % 2 == 0 and peso > 2:
        print("Si")
    else: 
        print("No")
    
main()