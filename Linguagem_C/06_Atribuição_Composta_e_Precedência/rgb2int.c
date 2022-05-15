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