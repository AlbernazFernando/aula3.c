#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, a, b;
    float c, d = 0, e;

    printf("digite o número total de mercadorias no estoque:\n");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        printf("fale o valor da mercadoria:\n");
        scanf("%f", &c);

        d += c;
    }

    printf("o valor total em estoque é:\n%.2f\n", d);

    e = d / a;

    printf("e a média de valor das mercadorias é de:\n%.2f\n", e);

    return 0;
}
