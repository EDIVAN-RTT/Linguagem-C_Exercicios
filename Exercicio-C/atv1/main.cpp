#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero, resto;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if (resto == 0){
		printf("%d e par.\n", numero);
	}else{
		printf("%d e impar.\n", numero);
	}
	
	return 0;
}
