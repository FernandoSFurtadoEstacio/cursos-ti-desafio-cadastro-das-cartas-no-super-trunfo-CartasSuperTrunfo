#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Dados da primeira Carta
    char estado_1;
    char codigoCarta_1[4];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;

    // Dados da segunda Carta
    char estado_2;
    char codigoCarta_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;

    // Solicitação de dados para as cartas
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigoCarta_1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_1);
    printf("Digite a população: ");
    scanf("%d", &populacao_1);
    printf("Digite a área (km²): ");
    scanf("%f", &area_1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigoCarta_2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_2);
    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    printf("Digite a área (km²): ");
    scanf("%f", &area_2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_2);

    // Exibindo dados das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_2);
    
    return 0;
}
