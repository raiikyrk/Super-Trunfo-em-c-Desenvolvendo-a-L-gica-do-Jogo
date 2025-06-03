#include <stdio.h>

// Programa super simples para o Super Trunfo
int main() {
    // Variaveis para a primeira cidade
    char cidade1[50];
    int populacao1;
    float pib1;

    // Variaveis para a segunda cidade
    char cidade2[50];
    int populacao2;
    float pib2;

    // Entrada dos dados
    printf("=== Carta 1 ===\n");
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("\n=== Carta 2 ===\n");
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    // Menu para escolher o atributo
    int opcao;
    printf("\n=== Escolha ===\n");
    printf("1 - Populacao\n");
    printf("2 - PIB\n");
    printf("Digite 1 ou 2: ");
    scanf("%d", &opcao);

    // Comparacao
    if (opcao == 1) {
        printf("\nComparando Populacao...\n");
        if (populacao1 > populacao2) {
            printf("%s vence com %d pessoas!\n", cidade1, populacao1);
        } else if (populacao1 < populacao2) {
            printf("%s vence com %d pessoas!\n", cidade2, populacao2);
        } else {
            printf("Empate! Mesma populacao.\n");
        }
    } else if (opcao == 2) {
        printf("\nComparando PIB...\n");
        if (pib1 > pib2) {
            printf("%s vence com %.1f bilhoes!\n", cidade1, pib1);
        } else if (pib1 < pib2) {
            printf("%s vence com %.1f bilhoes!\n", cidade2, pib2);
        } else {
            printf("Empate! Mesmo PIB.\n");
        }
    } else {
        printf("Opcao errada! Use 1 ou 2.\n");
    }

    // Pausa para nao fechar o terminal
    printf("\nPressione Enter para sair...");
    int espera;
    scanf("%d", &espera);

    return 0;
}