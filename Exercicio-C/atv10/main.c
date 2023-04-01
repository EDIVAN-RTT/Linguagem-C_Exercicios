#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, num, maior = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}
