#include <stdio.h>
int main(){
    int i, n;
    printf("digite o valor de N:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
