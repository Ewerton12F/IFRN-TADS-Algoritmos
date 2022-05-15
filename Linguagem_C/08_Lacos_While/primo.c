#include <stdio.h>

int primo(long long n) {
    long long d = 2, qtd = 1;
    while (d!=(n/2+1) && qtd == 1) {
        if (n%d++ == 0) {
            qtd++;
        }
    }
    if (qtd > 1) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (primo(n)) {
        printf("%lld é primo\n", n);
    }
    else {
        printf("%lld não é primo\n", n);
    }
    return 0;
}
