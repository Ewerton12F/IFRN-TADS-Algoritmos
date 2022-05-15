# For

- Semelhante ao `while`
    - Código de fácil leitura
- Sintaxe
    
    `for ( init ; expr ; iter ) stmt ;`
    

Ex.:

```c
int contar_divisores(int n) {
    int i, qtd = 1;
    for (i=1; i<n ; ++i) {
        if ((n%1) == 0) {
            qtd++;
        }
    }
    return qtd;
}
```

# Equivalência for-while

- Todo comando `for` pode ser escrito como `while`

```c
for (i=0 ; i<n ; ++i) {
    /* Corpo do for */
}
```

```c
int i=0
for ( ; i<n ; ) {
    /* Corpo do for */
    ++i;
}
```

```c
i=0
while i<n {
    /* Corpo do while */
    ++i;
}
```