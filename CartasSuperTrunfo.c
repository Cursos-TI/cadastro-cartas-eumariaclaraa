#include <stdio.h>
typedef struct {
    char estado;
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1;
    Carta carta2;
    // --- LEITURA DOS DADOS DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n\n");

    printf("Estado (A-H):");
    scanf(" %c", &carta1.estado);
    printf("Codigo da Carta (A01-B03): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

        // --- LEITURA DOS DADOS DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n\n");


    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo da Carta (A01-B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes de reais): ");
     scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);


    // --- EXIBINDO OS DADOS ---
     printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);


    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

     return 0;
}