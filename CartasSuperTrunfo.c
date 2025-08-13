#include <stdio.h>

int main() {
            // Dados da primeira carta
    char estado1[40], codigocarta1[4], nomecidade1[50];
    
    int pontoturismo1, populacao1;
    
    float areakm21, pib1, densidadep, pibcapita1;
            // Dados da segunda carta
    char estado2[40], codigocarta2 [4], nomecidade2[50];
    
    int pontoturismo2, populacao2;
    
    float areakm22, pib2, densidadep1, pibcapita2;
    
            // --- CARTA 1 ---

    printf("\n--- CARTA 1 ---\n");

    printf("Digite a sigla do estado:\n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta:\n");
    scanf(" %s", codigocarta1);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade1);
    
    printf("Digite o número da populacao:\n");
    scanf(" %d", &populacao1);
    
    printf("Digite a área em kilômetros quadrados:\n");
    scanf("%f", &areakm21);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &pontoturismo1);

    densidadep = populacao1 / areakm21;
    pibcapita1 = pib1 / populacao1;

        // --- CARTA 2 ---
    printf("\n--- CARTA 2 ---\n");
    
    printf("Digite a sigla do estado:\n");
    scanf(" %s", estado2);
    
    printf("Digite o código da carta:\n");
    scanf(" %s", codigocarta2);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade2);
    
    printf("Digite o número da populacao:\n");
    scanf(" %d", &populacao2);
    
    printf("Digite a área em kilômetros quadrados:\n");
    scanf(" %f", &areakm22);
    
    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturismo2);

    densidadep1 = populacao2 / areakm22;
    pibcapita2 = pib2 / populacao2;


    // Exibindo os dados
    printf("\nCARTA 1:\n");

    printf("Estado: %s - Codigo da carta: %s\n", estado1, codigocarta1);
    printf("Nome da Cidade: %s - populacao: %d\n", nomecidade1, populacao1);
    printf("Área: %.2f - PIB: %.2f\n", areakm21, pib1);
    printf("Número de pontos turísticos: %d\n", pontoturismo1);
    printf("A densidade populacional é: %.2f\n", densidadep);
    printf("O PIB per capita é: %.2f\n", pibcapita1);

    printf("\nCARTA 2:\n");

    printf("Estado: %s - Codigo da carta: %s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s - populacao: %d\n", nomecidade2, populacao2);
    printf("Área: %.2f - PIB: %.2f\n", areakm22, pib2);
    printf("Número de pontos turísticos: %d\n", pontoturismo2);
    printf("A densidade populacional é: %.2f\n", densidadep1);
    printf("O PIB per capita é: %.2f\n", pibcapita2);

    return 0;
}
