#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, n;
    float a = 0, b =0, c;

    for ( i = 15; i <= 100; i++) {
        a += i;
        b++;
    }

    c = a / b;
    printf("a média aritmética é: %.2f\n", c);
    return 0;
}
