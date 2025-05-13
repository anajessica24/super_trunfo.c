#include <stdio.h>

int main()
{
    //Informações da Carta 01
    char estado_1;
    char codigo_1[3];
    char cidade_1[10];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_tur_1;
    float den_populacional_1;
    float per_capita_1;

    //Informações da Carta 02
    char estado_2;
    char codigo_2[3];
    char cidade_2[10];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_tur_2;
    float den_populacional_2;
    float per_capita_2;


    //Input das informações da Carta 01
    printf("Digite o Estado da Carta 01: ");
    scanf(" %c", &estado_1);

    printf("Digite o Código da Carta 01: ");
    scanf("%s", codigo_1);

    printf("Digite o Nome da Cidade 01: ");
    scanf("%s", cidade_1);

    printf("Digite a População da Cidade 01: ");
    scanf("%i", &populacao_1);

    printf("Digite a Área da Cidade 01 em km2: ");
    scanf("%f", &area_1);

    printf("Digite o PIB da Cidade 01: ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos da Cidade 01: ");
    scanf("%i", &pontos_tur_1);

    //Input das informações da Carta 01
    printf("Digite o Estado da Carta 02: ");
    scanf(" %c", &estado_2);

    printf("Digite o Código da Carta 02: ");
    scanf("%s", codigo_2);

    printf("Digite o Nome da Cidade 02: ");
    scanf("%s", cidade_2);

    printf("Digite a População da Cidade 02: ");
    scanf("%i", &populacao_2);

    printf("Digite a Área da Cidade 02 em km2: ");
    scanf("%f", &area_2);

    printf("Digite o PIB da Cidade 02: ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos da Cidade 02: ");
    scanf("%i", &pontos_tur_2);

    //Cálculos de Densidade e Per capita
    den_populacional_1 = populacao_1/area_1;
    den_populacional_2 = populacao_2/area_2;

    per_capita_1 = pib_1/populacao_1;
    per_capita_2 = pib_2/populacao_2;

    //Dados à imprimir na tela
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c%s\n", estado_1, codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %i\n", pontos_tur_1);
    printf("A densidade populacional de %s é %f\n", cidade_1, den_populacional_1);
    printf("O PIB per capita da cidade %s é %f\n", cidade_1, per_capita_1);
    
    printf("\n"); //quebra de linha para organização

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n", estado_2, codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n", pontos_tur_2);
    printf("A densidade populacional de %s é %f\n", cidade_2, den_populacional_2);
    printf("O PIB per capita da cidade %s é %f\n", cidade_2, per_capita_2);
    

    return 0;

}