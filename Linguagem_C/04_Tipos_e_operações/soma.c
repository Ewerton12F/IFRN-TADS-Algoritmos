#include <stdio.h>

int main() {
    unsigned int x, y, z;
    scanf("%u %u", &x, &y);
    z = x + y;
    printf("%u + %u = %u\n", x, y, z);
    return 0;
}