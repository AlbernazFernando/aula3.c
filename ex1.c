#include <stdio.h>
int main(){
    float a, b, c;
    printf("digite o primeiro valor:\n");
    scanf("%f", &a);
    printf("digite o segundo valor:\n");
    scanf("%f", &b);

    while (b == 0){
        printf("o segundo valor nao pode ser zero. digite outro valor:\n");
        scanf("%f", &b);
    }

    c = a / b;

    printf("o resultado da divisao e: %.2f\n", c);

    return 0;
  return 0;
}
