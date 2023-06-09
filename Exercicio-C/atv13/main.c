#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor_unitario;
    int itens = 0;
    float total = 0;
    int opcao_pagamento;
    float desconto_percentual;
    float desconto;
    float total_com_desconto;
    int total_itens_vendidos = 0;
    float total_vendas = 0;

    do {
        printf("Informe o valor unitario do produto (ou 0 para encerrar): ");
        scanf("%f", &valor_unitario);

        if (valor_unitario > 0) {
            itens++;
            total += valor_unitario;
        }
    } while (valor_unitario > 0);

    if (total > 0) {
        printf("Total de itens: %d\n", itens);
        printf("Total da compra: R$ %.2f\n", total);

        printf("Opcao de pagamento:\n");
        printf("1. dinheiro\n");
        printf("2. cartao debito\n");
        printf("3. cartao credito\n");
        scanf("%d", &opcao_pagamento);

        switch (opcao_pagamento) {
            case 1:
                desconto_percentual = 10;
                break;
            case 2:
                desconto_percentual = 5;
                break;
            case 3:
                desconto_percentual = 0;
                break;
            default:
                printf("Opcao de pagamento invalida\n");
                return 1;
        }

        desconto = total * desconto_percentual / 100;
        total_com_desconto = total - desconto;

        printf("Opcao de pagamento escolhida: %d\n", opcao_pagamento);
        printf("Percentual de desconto: %.2f%%\n", desconto_percentual);
        printf("Desconto obtido: R$ %.2f\n", desconto);
        printf("Total a pagar: R$ %.2f\n", total_com_desconto);
    }

    total_itens_vendidos += itens;
    total_vendas += total;

    printf("Total de itens vendidos no dia: %d\n", total_itens_vendidos);
    printf("Total de vendas no dia: R$ %.2f\n", total_vendas);

    return 0;
}
