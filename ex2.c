#include <stdio.h>
int main(){
    float a, b, c;
    printf("digite o primeiro valor:\n");
    scanf("%f", &a);

    do{
        printf("digite o segundo valor:\n");
        scanf("%f", &b);
        if (b == 0){
            printf("não pode ser zero. tente de novo\n");
        }
    }while (b == 0);

    c = a / b;
    printf("o resultado da divisao é: %.2f\n", c);
    return 0;
}
