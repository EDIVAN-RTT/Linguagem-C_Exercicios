#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char estado_civil;
    int idade, qtd_filhos, idade_filho_mais_velho;
    char sexo, nome_conjuge[50], cidade[50];
    float salario_atual;

    printf("Digite o seu estado civil (S, C, D ou V): ");
    scanf("%c", &estado_civil);

    switch(estado_civil) {
        case 'S':
        case 's':
            printf("Voce eh solteiro(a). Informe sua idade: ");
            scanf("%d", &idade);
            printf("Opcao informada: Solteiro(a)\n");
            printf("Idade informada: %d anos\n", idade);
            break;

        case 'C':
        case 'c':
            printf("Voce eh casado(a). Informe o sexo do conjuge (M ou F): ");
            scanf(" %c", &sexo);
            printf("Informe o nome do conjuge: ");
            scanf("%s", nome_conjuge);
            printf("Opcao informada: Casado(a)\n");
            printf("Sexo do conjuge: %c\n", sexo);
            printf("Nome do conjuge: %s\n", nome_conjuge);
            break;

        case 'D':
        case 'd':
            printf("Voce eh divorciado(a). Informe a quantidade de filhos: ");
            scanf("%d", &qtd_filhos);
            printf("Informe a idade do filho mais velho: ");
            scanf("%d", &idade_filho_mais_velho);
            printf("Opcao informada: Divorciado(a)\n");
            printf("Quantidade de filhos: %d\n", qtd_filhos);
            printf("Idade do filho mais velho: %d anos\n", idade_filho_mais_velho);
            break;

        case 'V':
        case 'v':
            printf("Voce eh viuvo(a). Informe a cidade onde vive: ");
            scanf("%s", cidade);
            printf("Informe o salario atual: ");
            scanf("%f", &salario_atual);
            printf("Opcao informada: Viuvo(a)\n");
            printf("Cidade onde vive: %s\n", cidade);
            printf("Salario atual: R$%.2f\n", salario_atual);
            break;

        default:
            printf("Opcao invalida. Digite S, C, D ou V.\n");
            break;
    }

    return 0;
}
