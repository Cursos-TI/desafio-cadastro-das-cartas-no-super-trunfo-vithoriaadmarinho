#include <stdio.h>

int main() {
    char estado1[50], codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    printf("Digite o estado: \n");
    scanf(" %s", estado1);
    printf("Digite o cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite o populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite o area: \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
  
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s01\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    char estado2[50], codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("Digite o estado: \n");
    scanf(" %s", estado2);
    printf("Digite o cidade: \n");
    scanf(" %s", cidade2);
    printf("Digite o populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite o area: \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
  
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s02\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
