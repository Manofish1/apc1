#include <stdio.h>

int main() {
    printf("---------------------------------\n");
    printf("              NOTA LEGA          \n");
    printf("---------------------------------\n");
    printf("item           Qde   prc    valor\n");
    printf("%-14s %03i %7.2f %7.2f\n", "caneta azul",  2, 2.0, 4.0);
    printf("%-14s %03i %7.2f %7.2f\n", "borracha",     1, 5.0, 5.0);
    printf("%-14s %03i %7.2f %7.2f\n", "resma de papel", 1, 12.0, 12.0);
    printf("---------------------------------\n");
    printf("total................: $S %7.2f\n", 21.0);

    return 0;
}