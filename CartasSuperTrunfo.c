#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[40];
    char codigocarta1[2];
    char nomecidade1[50];
    int populacao1;
    float areakm21;
    float pib1;
    int pontoturismo1;

    printf("\n--- CARTA 1 ---\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);
    
    printf("Digite o número da populacao:\n");
    scanf("%d", &populacao1);
    
    printf("Digite a área em kilômetros quadrados:\n");
    scanf("%f", &areakm21);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    
    printf("Digite o ponto turismo:\n");
    scanf("%d", &pontoturismo1);

    // Dados da segunda carta
    char estado2[40];
    char codigocarta2[2];
    char nomecidade2[50];
    int populacao2;
    float areakm22;
    float pib2;
    int pontoturismo2;

    printf("\n--- CARTA 2 ---\n");
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);
    
    printf("Digite o número da populacao:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área em kilômetros quadrados:\n");
    scanf("%f", &areakm22);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    
    printf("Digite o ponto turismo:\n");
    scanf("%d", &pontoturismo2);

    // Exibindo os dados
    printf("\nCARTA 1:\n");
    printf("Estado: %s - Codigo da carta: %s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s - populacao: %d\n", nomecidade1, populacao1);
    printf("Área: %.2f - PIB: %.2f\n", areakm21, pib1);
    printf("Número de pontos turísticos: %d\n", pontoturismo1);

    printf("\nCARTA 2:\n");
    printf("Estado: %s - Codigo da carta: %s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s - populacao: %d\n", nomecidade2, populacao2);
    printf("Área: %.2f - PIB: %.2f\n", areakm22, pib2);
    printf("Número de pontos turísticos: %d\n", pontoturismo2);

    return 0;
}
