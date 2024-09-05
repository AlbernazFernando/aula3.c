#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, i, b;
    do {
        printf("digite um valor entre 1 e 10: ");
        scanf("%d", &a);
    } while (a < 1 || a > 10);

    for (i = 1; i <= 10; i++) {
        b = a * i;
        printf("%d x %d = %d\n", i, a, b);
    }

    return 0;
}
