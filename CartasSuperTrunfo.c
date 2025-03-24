#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    
    char estado1[50];
    char codigo1[50];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    // Variáveis para a segunda carta
    
    char estado2[50];
    char codigo2[50];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

   
   
    // Coletando as informações da primeira carta
   
    printf("Insira as informações da Carta 1:\n");
    printf("Estado:\n");
    scanf("%s", estado1);
    printf("Código:\n ");
    scanf("%s", codigo1);
    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade1);
    printf("População:\n ");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n");
    scanf("%f", &area1);
    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numPontosTuristicos1);

   
   
    // Coletando as informações da segunda carta
   
    printf("\nInsira as informações da Carta 2:");
    printf("Estado:\n");
    scanf("%s", estado2);
    printf("Código:\n");
    scanf("%s", codigo2);
    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &area2);
    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numPontosTuristicos2);

    
    
    // Exibindo as informações da primeira carta
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);

  
  
    // Exibindo as informações da segunda carta
    
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);

    return 0;
}