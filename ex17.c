#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i = 0;
    float c, d = 0, e;
    char b;

    do {
        printf("digite o valor da mercadoria: ");
        scanf("%f", &c);
        d += c;
        i++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &b);

    } while (b == 'S' || b == 's');

    printf("o valor total em estoque é:\n%.2f\n", d);
    e = d / i;

    printf("e a média de valor das mercadorias é de:\n%.2f\n", e);

    return 0;
}
