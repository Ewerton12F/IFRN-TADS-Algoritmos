# Desvio condicional

- Comando `if`
    
    ```c
    if (expr) stmt; [else stmt;]
    ```
    
- `stmt` pode ser composto
    
    ```c
    if (expr) {stmt_seq;} [else {stmt_seq;}]
    ```
    

Ex.:

```c
#include <stdio.h>

int main() {
    double nota1, nota2, media;
    scanf("%lf %lf", &nota1, &nota2);
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    printf("Média final é %.1lf\n", media);
    if ( media >= 7.0 ) {
        printf("Aluno aprovado!\n");
    }
    else {
        printf("Aluno em recuperação!\n");
    }
    return 0;
}
```

```bash
gcc -Wall -o aluno aluno.c
./aluno
```

# Operadores relacionais

- Comparar valores
    - Resultado é valor lógico: **Verdadeiro** ou **Falso**
    
    | Operador    | Sintaxe | Exemplo                |
    | ----------- | ------- | ---------------------- |
    | Igual       | ==      | if (x == y)            |
    | Diferente   | !=      | if (a != (b - c))      |
    | Maior       | >       | if ((a + b) > (c + d)) |
    | Menor       | <       | if ((x * y) < d)       |
    | Maior igual | >=      | if (z >= (y = 10)      |
    | Menor igual | <=      | if (5 <= (x-3))        |

# Exemplo

- Salário de vendedor
    - Bônus de 5% se ultrapassar meta
    - Desconto de imposto se maior do que R$ 1.200,00

```c
#include <stdio.h>

double calculadora_salario(double salario_base, double vendas, double meta) {
    double salario;
    salario = salario_base + vendas * 0.05;
    if (vendas >= meta) {
        salario = salario + ((vendas - meta) * 0.10);
    }
    if (salario > 1200.00) {
        salario = salario - (salario_base * 0.15);
    }
    return salario;
}

int main() {
    double salario, salario_base, vendas, meta;
    scanf("%lf", &salario_base);
    scanf("%lf", &vendas);
    scanf("%lf", &meta);
    salario = calculadora_salario(salario_base, vendas, meta);
    printf("%.2f", salario);
    return 0;
}
```

```bash
gcc -Wall -o vendedor vendedor.c
./vendedor
```

# Valor lógico (booleano)

- `0` é falso
    
    `5 == 6 → 0`
    
- Diferente de `0` é verdadeiro
    
    `1 == 1 → 1` (pode ser qualquer valor)
    

Ex.:

```c
int a = 10;
int b = 0;
if (a) /* Verdadeiro */
    printf("...");
if (b) /* Falso */
    printf("...");
```

# Operadores lógicos

| Operador       | Sintaxe | Exemplo                         |
| -------------- | ------- | ------------------------------- |
| E lógico       | &&      | if (a > 3 && b < c)             |
| OU lógico      | \|\|    | if (media < 7 \|\| faltas > 20) |
| Negação lógica | !       | if ( !(a == b) )                |

<aside>
❗ AVALIAÇÃO POR CURTO-CIRCUITO
Se a primeira expressão for verdadeira então a condição entra direto no bloco sem ler o restante da operação.

</aside>

```c
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = a+b;
    d = a*b;
    if (a > b || b++<100) {
        c++;
    }
    if (c < 10) {
        d++;
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
```