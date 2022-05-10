import sys
sys.setrecursionlimit(1000000000)

def create_prime(prime):
    count = 0
    prime += 1
    for x in range(prime):
        if prime % (x+1) == 0:
            count += 1
    if count > 2:
        return create_prime(prime)
    else:
        return prime

def verif_prime(num, prime=1):
    primo = create_prime(prime)

    if num % primo == 0:
        return 'não é Primo'
    if (num // primo) <= primo:
        return 'é Primo'
    else:
        return verif_prime(num, primo)

n = [13, 21, 83, 87, 103, 111, 6471, 6473, 11021, 11027, 32531, 32567, 111467, 2040010289, 2040010291, 61553013897, 62558003897, 62558013447, 91989664471, 91989664481]

for x in n:
    print(f'O número {x} {verif_prime(x)}')
