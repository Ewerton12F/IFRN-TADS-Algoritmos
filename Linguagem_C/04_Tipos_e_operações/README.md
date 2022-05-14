# Tipos

- Tipos básicos ANSI C
    
    
    | void | Descrição de tipo vazio |
    | --- | --- |
    | char | Inteiro sem sinal de 8 bits (Caracter ASCII) |
    | short | Inteiro de 16 bits com sinal |
    | int | Inteiro de 16 ou 32 bits (considere 32 nos computadores atuais) |
    | long long | Inteiro de 32 ou 64 bits (considere 64 nos computadores atuais) |
    | float | Valor real de 32 bits (IEEE 754 de precisão simples) |
    | double | Valor real de 64 bits (IEEE 754 de precisão dupla) |
    | long double | Valor real de 128 bits (IEEE 754 de precisão quádrupla) |
- Outros tipos
    
    `array, struct, union, complexo, ponteiros, função, ...`
    

# Especificador de tipo

Todos os tipos inteiros podem ser:

- `signed` = Valores de $-2^{n-1}$ a $2^{n-1} - 1$
- `unsigned` = Valores de 0 (zero) a $2^{n-1}$
    
    **n** é a quantidade de *bits*
    

O *padrão* de `char` é `unsigned`, outros são `signed`.

`int x;` = padrão ‘`signed`’: de $-2^{32}$ a $2^{31} - 1$

`char c;` = padrão ‘`unsigned`’: de $0$ a $2^{8} - 1$

`unsigned int w;` =  de $0$ a $2^{32} - 1$

`unsigned char y;` =  de $-2^{7}$ a $2^{7} - 1$

# Literais

Valores escritos no código

- `Char`:
    
    `‘a’, ‘1’, ‘$’, 65, 121`
    
- `Inteiro`:
    
    `-1, 0, 1, 2, 10, 2134`
    
- `Inteiro longo`:
    
    `-1ll, 0ll, 1ll, 1000ll`
    
- `Real precisão simples`:
    
    `0.0f, 1.0f, 213.2321f`
    
- `Real precisão dupla`:
    
    `0.0, 1.0, 21.321321, -321.0001`
    

# Atribuição

- Sintaxe:
    
    `ID = EXPRESSÃO`
    
- Resultado da expressão deve ser compatível com tipo da variável

# Expressões aritméticas

- Tipo de resultado
    - Mesmo dos operandos
    - Conversão implícita (promoção de tipos)
    - Erro se não compatível

# Operadores aritméticos

- Binários
    
    
    | + | Adiciona dois operandos | x = a + b |
    | --- | --- | --- |
    | - | Subtrai dois operandos | x = a - b |
    | * | Multiplica dois operandos | x = a * b |
    | / | Divide dois operandos | x = a / b |
    | % | Resta da divisão de dois operandos | x = a % b |
- Unários
    
    
    | + | Mais unário | x=+a |
    | --- | --- | --- |
    | - | Menos unário | x=-a |
    | ++ | Incremento: pré (++a) e pós (a++) | x=++a; y=a++; |
    | -- | Decremento: pré (--a) e pós (a--) | x=--a; y=a--; |

# Incremento e Decremento

- Considere
    
    
    | x = a + b;
    b = b + 1; | → | x = a + b;
    b++; | → | x = a + b++; |
    | --- | --- | --- | --- | --- |
- Diferença entre pré e pós incremento
    
    
    | a = 10;
    b = 5;
    x = a + b++; | a = 10;
    b = 5;
    x = a + ++b; |
    | --- | --- |
    | ↓ | ↓ |
    | 15 | 16 |

# Conversão Implícita

- Classificação com promoção
    
    
    | LONG DOUBLE | ↑ |
    | --- | --- |
    | DOUBLE | ↑ |
    | FLOAT | ↑ |
    | LONG LONG | ↑ |
    | INT | ↑ |
    | SHORT | ↑ |
    | CHAR | ↑ |
- Na atribuição
    - **Promoção**
        - Lado direito ***menos*** significativo
    - **Rebaixamento**
        - Lado direito ***mais*** significativo

```c
#include <stdio.h>

int main() {
    unsigned int x, y, z;
    scanf("%u %u", &x, &y);
    z = x + y
    printf("%u + %u = %d\n", x, y, z);
    return 0;
}
```