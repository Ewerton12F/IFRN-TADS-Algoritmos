# Laços

- Três instruções
    
    `while`
    
    `do...while`
    
    `for`
    
- O `goto` também existe, porém seu uso, de forma geral, é desaconselhável
- Usados em laços
    
    `break`
    
    `continue`
    

# While

- Repete instruções enquanto teste (expressão) diferente de 0
- Sintaxe:
    
    `while (expr) stmt;`
    

Ex.: Contar divisores de n

```c
int contar_divisores(int n) {
    int d = 1, qtd = 1;
    while (d != n) {
        if ((n % d++) == 0) {
            qtd++;
        }        
    }
    return qtd;
}   
```

<aside>
❗ IMPORTANTE: Corpo deve modificar resultado da expressão

</aside>

# Do...While

- Repete instruções enquanto teste (expressão) diferente de 0
    - Teste é feito **após** primeira execução
- Sintaxe:
    
    `do stmt while (expr);`
    

Ex.: Contar divisores de n

```c
int contar_divisores(int n) {
    int d = 1, qtd = 1;
    do {
        if ((n % d++) == 0) {
            qtd++;
        }        
    } while (d != n);
    return qtd;
}   
```

```c
int contar_divisores2(int n) {
    int d = 1, qtd = 1;
    do if ((n % d++) == 0) qtd++; while (d != n);
    return qtd;
}   
```

# Exercício

```c
#include <stdio.h>

int primo(long long n) {
    long long d = 1, qtd = 1;
    while (d!=n/2+1) {
        if (n%d == 0) {
            qtd++;
        }
    }
    if (qtd > 2) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    long long n;
    scanf("%ld", &);
    if (primo(n)) {
        printf("%ld é primo\n");
    }
    else {
        print("%ld não é primo\n")
    }
    return 0;
}
```

```bash
gcc -Wall -o primo primo.c
./primo
```