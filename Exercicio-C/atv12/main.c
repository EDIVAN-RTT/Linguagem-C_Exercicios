#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int preco = 2; 
    int qtde_choc, cedula_pago, troco;

    printf("Bem-vindo a maquina de venda de chocolates!\n\n");
    printf("Digite a quantidade de chocolates que deseja comprar: ");
    scanf("%d", &qtde_choc);

    int valor_total = preco * qtde_choc;

    printf("O valor total da compra eh: R$ %d,00\n", valor_total);
    printf("Insira a cedula para efetuar o pagamento (somente notas de 2, 5, 10, 20 e 50): ");
    scanf("%d", &cedula_pago);

    if (cedula_pago < valor_total) {
        printf("Cedula inserida e menor que o valor da compra. Cancelando a transacao.\n");
    } else {
        troco = cedula_pago - valor_total;
        printf("O seu troco eh: R$ %d,00\n", troco);

        
        int cedula_50 = troco / 50;
        troco = troco % 50;

        int cedula_20 = troco / 20;
        troco = troco % 20;

        int cedula_10 = troco / 10;
        troco = troco % 10;

        int cedula_5 = troco / 5;
        troco = troco % 5;

        int cedula_2 = troco / 2;
        troco = troco % 2;

        int moeda_1 = troco;

        printf("Entregando troco:\n");
        if (cedula_50 > 0) {
            printf("%d cedulas de R$ 50,00\n", cedula_50);
        }
        if (cedula_20 > 0) {
            printf("%d cedulas de R$ 20,00\n", cedula_20);
        }
        if (cedula_10 > 0) {
            printf("%d cedulas de R$ 10,00\n", cedula_10);
        }
        if (cedula_5 > 0) {
            printf("%d cedulas de R$ 5,00\n", cedula_5);
        }
        if (cedula_2 > 0) {
            printf("%d cedulas de R$ 2,00\n", cedula_2);
        }
        if (moeda_1 > 0) {
            printf("%d moedas de R$ 1,00\n", moeda_1);
        }
    }
    return 0;
}
