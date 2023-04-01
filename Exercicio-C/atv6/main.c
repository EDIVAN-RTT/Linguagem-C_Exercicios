#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;

    printf("Multiplos de 5 no intervalo de 1 a 500:\n");
    for(i = 1; i <= 500; i++) {
        if(i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
