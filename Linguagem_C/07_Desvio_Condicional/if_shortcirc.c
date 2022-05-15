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