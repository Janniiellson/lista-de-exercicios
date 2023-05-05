#include <stdio.h>

int main() {
    
    int opcao, quantidade;
    double total = 0.00;
    char continuar;

    do {
        printf("MENU DE FRUTAS:\n");
        printf("1 => ABACAXI - R$ 5,00 a unidade\n");
        printf("2 => MAÇA - R$ 1,00 a unidade\n");
        printf("3 => PERA - R$ 4,00 a unidade\n");

        printf("Escolha a fruta desejada (1-3): ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3) {
            printf("Opção inválida.\n");
            continue;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        double valor = opcao == 1 ? 5.00 : opcao == 2 ? 1.00 : 4.00;
        valor *= quantidade;
        total += valor;

        printf("Valor da compra atual: R$ %.2f\n", total);

        printf("Deseja comprar mais alguma fruta? (S/N) ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}
