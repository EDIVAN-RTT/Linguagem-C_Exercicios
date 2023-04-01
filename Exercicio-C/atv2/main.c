#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if (numero == 0){
		printf("O numero e zero.\n");
	}else if(numero > 0){
	    printf("O numero e positivo.\n");
	}else{
		printf("O numero e negativo.\n");
	}
	return 0;
}
