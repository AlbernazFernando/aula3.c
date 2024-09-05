#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, n;
    printf("digite um valor de N maior que 0:\n");

    do {
        scanf("%d", &n);
        if (n <= 0){
            printf("inválido, digite outro numero\n");
        }
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
