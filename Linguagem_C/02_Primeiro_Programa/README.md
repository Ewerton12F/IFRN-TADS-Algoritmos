# Programa em C

- Conjunto de **funções**/procedimentos;
- Conjunto de **variáveis** globais;
- Ponto de início é a função **`main()`**;
    - Retorna inteiro
        
        ```c
        int main(){
        		/* Aqui vai o programa */
        		return 0;
        }
        ```
        

# Escrever o código

- Extensão de arquivo: **`.c`**
    
    ```c
    #include <stdio.h>
    
    int main(){
        printf("Olá Mundo!\n");
        return 0;
    }
    ```
    

# Compilação

- Transforma código fonte (ANSI C) em código executável (Linguagem de máquina)
- Necessário compilador
    - GCC - Gnu Compiler Collection
    - clang - C Language

Ex:

```bash
>>> gcc olamundo.c -o olamundo
```

# Execução

```bash
>>> ./olamundo
```

# Olá Mundo!

```c
#include <stdio.h> /* Biblioteca de E/S */       

int main(){
    printf("Olá Mundo!\n"); /* Função de escrita (definida em stdio.h) */
    return 0;
}
```