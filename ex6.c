#include <stdio.h>
int main(){
    float a, b, c;
    char y;
    do{
    do {
        printf("digite a primeira nota:\n");
        scanf("%f", &a);
        if (a  <0 || a > 10){
            printf("Nota inválida\n");
        }
    } while (a < 0 || a> 10);
    do {
        printf("digite a segunda nota:\n");
        scanf("%f", &b);
        if (a < 0 || a > 10) {
            printf("Nota inválida\n");
        }
    } while (b < 0 || b > 10);
    c = (a + b)/2;
    printf("A média do aluno é: %.2f\n", c);

    printf("NOVO CALCULO (S/N)? ");
    scanf(" %c", &y);  // O espaço antes de %c é importante para consumir o enter

    } while (y == 'S' || y == 's');
    return 0;

}
