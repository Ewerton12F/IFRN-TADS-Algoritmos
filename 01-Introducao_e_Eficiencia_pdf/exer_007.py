N = int(input())

for x in range(N):
    F1, F2 = map(int, input().split())

    maior = (F1 + F2 + abs(F1 - F2)) / 2
    menor = (F1 + F2 - abs(F1 - F2)) / 2

    resto = maior % menor

    if resto == 0:
        print(int(menor))
    else:
        while resto != 0:
            maior = menor
            menor = resto
            
            resto = maior % menor

        print(int(menor))