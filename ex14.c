#include <stdio.h>

int main() {
    int i, n, a;
    printf("digite o valor de n:\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for ( a = 1; a <= i; a++) {
            printf("*");

        }
    printf("\n");
    }

    return 0;
}
