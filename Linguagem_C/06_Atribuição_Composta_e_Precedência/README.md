# Atribuição composta

| Operador                | Sintaxe | Significado |
| ----------------------- | ------- | ----------- |
| Adição                  | a+=b    | a=a+b       |
| Subtração               | a-=b    | a=a-b       |
| Multiplicação           | a*=b    | a=a*b       |
| Divisão                 | a/=b    | a=a/b       |
| Resto da divisão        | a%=b    | a=a%b       |
| E bit-a-bit             | a&=b    | a=a&b       |
| OU bit-a-bit            | a\|=b   | a=a\|b      |
| Deslocamento a esquerda | a<≤b    | a=a<<b      |
| Deslocamento a direita  | a>≥b    | a=a>>b      |

O lado direito é avaliado e o resultado é aplicado a operação composta:

| Atribuição composta |   | Significado     |
| ------------------- | - | --------------- |
| a*=c+d/e+a-8;       | → | a=*(c+d/e+a-8); |

# Precedência

| Operadores | Significado                             |
| ---------- | --------------------------------------- |
| ++ --      | Incremento e decremento                 |
| * / %      | Multiplicação, divisão, e resto         |
| + -        | Adição e subtração                      |
| << >>      | Deslocamento de bits à esquerda/direita |
| < <=       | Menor e “Menor igual”                   |
| > >=       | Maior e “Maior igual”                   |
|  \|        |

# Prática

Mapeamento RGB ←→ int

```c
#include <stdio.h>

int main() {
    unsigned char r, g, b, alfa;
    unsigned int rgb;
    scanf("%hhu %hhu %hhu %hhu", &r, &g,&b, &alfa);
    rgb = alfa;
    rgb += b<<8;
    rgb += g<<16;
    rgb += r<<24;
    printf("RGB=%u\n", rgb);
    return 0;
}
```

```bash
>>> gcc -o rgb2int rgb2int.c
>>> ./rgb2int
```