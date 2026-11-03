#include <stdio.h>

int main() {
    int N;
    int equip[10];
    int ativo;
    int inativo;
    int cont;
    float porcent;

    printf("Digite a quantidade: ");
    scanf("%d", &N);

    while (N > 10 || N < 0) {
        printf("Quantidade invalida\n");
        scanf("%d", &N);
    }
	printf("indique o estado do componente (1-ativo/0-inativo)\n");
    for (cont = 0; cont < N; cont++) {
        printf("Estado do equipamento: %d\n", cont + 1);
        scanf("%d", &equip[cont]);

        while (equip[cont] > 1 || equip[cont] < 0) {
            printf("Digito invalido\n");
            scanf("%d", &equip[cont]);
        }

        if (equip[cont] == 1) {
            ativo++;
        }
    }

    inativo = N - ativo;

    if (N > 0) {
        porcent = (ativo * 100.0) / N;
    } else {
        porcent = 0;
    }

    printf("\n=======RESULTADOS========\n");
    printf("Total de dispositivos: %d\n", N);
    printf("Quantidade ativa: %d\n", ativo);
    printf("Disponibilidade: %.2f%%\n", porcent);

    if (inativo > 1) {
        printf("ALERTA! %d dispositivos inativos\n", inativo);
    }

    return 0;
}
