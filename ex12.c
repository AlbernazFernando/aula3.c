#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, a;
    for (i = 1; i <= 10; i++) {
        a = 8 * i ;
        printf("8 x %d = %d\n", i, a);
    }
    return 0;
}
