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