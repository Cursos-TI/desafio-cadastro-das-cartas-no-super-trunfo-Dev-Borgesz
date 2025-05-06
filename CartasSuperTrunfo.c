#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Suporte a acentuação

    // Variáveis da carta 1
    char estado1;
    char codigo1[4]; 
    char nomedacidade1[50];
    int populacao1;
    int pontoturistico1;
    float PIB1;
    float area1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomedacidade2[50];
    int populacao2;
    int pontoturistico2;
    float PIB2;
    float area2;

    // Entrada de dados da carta 1
    printf("Dados da carta 1:\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("População (ex: 6211000): ");
    scanf("%d", &populacao1);

    printf("PIB (em bilhões, use ponto - ex: 299.75): ");
    scanf("%f", &PIB1);

    printf("Área (em km², use ponto - ex: 1521.11): ");
    scanf("%f", &area1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturistico1);

    // Entrada de dados da carta 2
    printf("\nDados da carta 2:\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("População (ex: 6211000): ");
    scanf("%d", &populacao2);

    printf("PIB (em bilhões, use ponto - ex: 299.75): ");
    scanf("%f", &PIB2);

    printf("Área (em km², use ponto - ex: 1521.11): ");
    scanf("%f", &area2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturistico2);

    // Impressão das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", pontoturistico1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", pontoturistico2);

    return 0;
}
