#include <stdio.h>

int main() {
    unsigned int rgb;
    unsigned char r, g, b, alfa;
    scanf("%u", &rgb);
    printf("RGB=%08X\n", rgb);
    printf("R=%u", r);
    printf("G=%u", g);
    printf("B=%u", b);
    printf("A=%u", alfa);
    return 0;
}