import time

n = [13, 21, 83, 87, 103, 111, 6471, 6473, 11021, 11027, 32531, 32567, 111467, 2040010289, 2040010291, 61553013897, 62558003897, 62558013447, 91989664471, 91989664481]

def list_prime(lista):
    print('+---------------------------------------+')
    print('|       Valor |  Tempo(s) |   Resultado |')
    print('+-------------+-----------+-------------+')

    for n in lista:
    
        count = 0

        st = time.time()
        
        for x in range(n):
            if n % (x+1) == 0:
                count += 1

        et = time.time()

        time_seg = et - st

        if count > 2:
            print(f'| {n:11d} | {time_seg:9f} | Não é Primo |')
        else:
            print(f'| {n:11d} | {time_seg:9f} |       Primo |')
      
    return None

list_prime(n)