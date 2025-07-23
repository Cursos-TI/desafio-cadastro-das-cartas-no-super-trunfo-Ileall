#include <stdio.h>


    
int main() {
    char estado[40];
    char codigocarta [2];
    char nomecidade [50];
    int populaçao;
    float areakm2;
    float pib;
    int pontoturismo;

    printf ("Digite o nome do estado: \n");
    scanf("%s", estado);
    getchar();

    printf ("Digite o código da carta: \n");
    scanf("%s", codigocarta);
    getchar();

    printf ("Digite o nome da cidade: \n");
    scanf("%s", nomecidade);
    getchar();

    printf ("Digite o número da população: \n");
    scanf("%d", &populaçao);
    getchar();
    
    printf ("Digite a área em kilômetros quadrados: \n");
    scanf("%f", &areakm2);
    getchar();

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);
    getchar();

    printf ("Digite o ponto turismo: \n");
    scanf ("%d", &pontoturismo);
    getchar();

    printf ("Estado: %s - Codigo da carta: %s \n", estado, codigocarta);
    printf ("Nome da Cidade: %s - População: %d \n", nomecidade, populaçao);
    printf ("Área: %f - PIB: %f \n", areakm2,pib);
    printf ("Número de pontos turísticos: %d \n", pontoturismo);

    

    

    return 0;
}
