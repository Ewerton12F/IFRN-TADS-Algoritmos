# Funções

```c
int soma(int a, int b) {
    /* Corpo da função */
}
```

`int` = Tipo válido para retorno

`soma` = Identificador válido

`(int a, int b)` = Lista de argumentos

`{` = início da função

`/* Corpo da função */` = Sequencia de declarações de variáveis locais e instruções válidas

`}` = fim da função

# Corpo da função

Declarações e instruções

```c
int soma(int a, int b) {
    int s;
    s = a+b;
    return s;
}
```

`int s;` = Declarações

`s = a+b;` = Instrução

`return s;` = Instrução

# Escrever dados

- Função `**printf()**`
    - Escreve na saída padrão (*console*)
- Sequencia de caracteres (aspas duplas)
    
    `"Isto é uma string"`
    
- Dados formatados
    
    Ex.:
    
    - Simples:
        
        ```c
        printf("Uma sequencia de caracteres");
        ```
        
    - Inteiro:
        
        ```c
        printf("%d + %d = %d\n",a,b,soma);
        ```
        
    - Real:
        
        ```c
        printf("%f dividido por %f é %f\n",x,y,x/y);
        ```
        

# Ler dados

- Função `**scanf()**`
- Ler texto e converte
- Tipo especificado
    
    Ex.:
    
    - Inteiro (32bits):
        
        ```c
        scanf("%d",&a);
        ```
        
    - Real (32bits):
        
        ```c
        scanf("%f",&a);
        ```
        
    - String:
        
        ```c
        scanf("%s",a);
        ```
        

# Um programa completo

```c
#include <stdio.h>

int soma(int a, int b) {
    int r;
    r = a+b;
    return r;
}

int main() {
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = soma(a, b);
    printf("A soma é %d\n", s);
    return 0;
}
```

```bash
>>> gcc -Wall -ansi soma.c -o soma
>>> ./soma
```

# Declaração de variáveis

Lugar de armazenamento com nome simbólico (identificador)

- Declaração
    
    ```c
    tipo ID [=valor][,ID [=valor]]*;
    ```
    
- **Deve** ser definida antes do uso
    - Especificação do **tipo**
        - Determina valor binário armazenado na variável