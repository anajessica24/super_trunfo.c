#include <stdio.h>
#include <stdlib.h>  //para o rand
#include <time.h>    // para o time


int main()
{
    //Variáveis
    int atributo1;
    int atributo2;
    int resultado; 

    //Variáveis da Carta 01
    char pais_1[20];
    char estado_1[20];
    char codigo_1[4];
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_tur_1;
    float den_populacional_1;
    float per_capita_1;
    float super_poder_1;
    

    //Variáveis da Carta 02
    char pais_2[20];
    char estado_2[20];
    char codigo_2[4];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_tur_2;
    float den_populacional_2;
    float per_capita_2;
    float super_poder_2;
    
    //Bem vindo
    printf("## Bem vindo ao Super Trunfo! ##\n");
    printf("Comece inserindo os valores do atributos das Cartas.\n\n");


    //Input das informações da Carta 01
    printf("Digite o País da Carta 01: ");
    scanf(" %[^\n]", pais_1);

    printf("Digite o Estado da Carta 01: ");
    scanf(" %[^\n]", estado_1);

    printf("Digite o Código da Carta 01: ");
    scanf("%s", codigo_1);

    printf("Digite o Nome da Cidade 01: ");
    scanf(" %[^\n]", cidade_1); // Lê até encontrar uma quebra de linha ([^\n])

    printf("Digite a População da Cidade 01: ");
    scanf("%d", &populacao_1);

    printf("Digite a Área da Cidade 01 em km2: ");
    scanf("%f", &area_1);

    printf("Digite o PIB da Cidade 01: ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos da Cidade 01: ");
    scanf("%d", &pontos_tur_1);

    //Input das informações da Carta 02
    printf("Digite o País da Carta 02: ");
    scanf(" %[^\n]", pais_2);

    printf("Digite o Estado da Carta 02: ");
    scanf(" %[^\n]", estado_2);

    printf("Digite o Código da Carta 02: ");
    scanf("%s", codigo_2);

    printf("Digite o Nome da Cidade 02: ");
    scanf(" %[^\n]", cidade_2);

    printf("Digite a População da Cidade 02: ");
    scanf("%d", &populacao_2);

    printf("Digite a Área da Cidade 02 em km2: ");
    scanf("%f", &area_2);

    printf("Digite o PIB da Cidade 02: ");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos da Cidade 02: ");
    scanf("%d", &pontos_tur_2);

    //Cálculos de Densidade, Per capita e Super Poder
    if (area_1 != 0 && area_2 != 0)
    {
        den_populacional_1 = (float)populacao_1/area_1;
        den_populacional_2 = (float)populacao_2/area_2;
    }

    if (populacao_1 != 0 && populacao_2 != 0)
    {
        per_capita_1 = pib_1/populacao_1;
        per_capita_2 = pib_2/populacao_2;
    }

    if (den_populacional_1 && den_populacional_2 != 0)
    {
        super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_tur_1 + per_capita_1 + (1.0/den_populacional_1); 
        super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_tur_2 + per_capita_2 + (1.0/den_populacional_2);
    }    
    
    //Dados à imprimir na tela
    printf("Carta 1:\n");
    printf("País: %s\n", pais_1);
    printf("Estado: %s\n", estado_1);
    printf("Código: %c%s\n", estado_1[0], codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %i\n", pontos_tur_1);
    printf("A densidade populacional de %s é %f\n", cidade_1, den_populacional_1);
    printf("O PIB per capita da cidade de %s é %f\n", cidade_1, per_capita_1);
    
    printf("\n"); //quebra de linha para organização

    printf("Carta 2:\n");
    printf("País: %s\n", pais_2);
    printf("Estado: %s\n", estado_2);
    printf("Código: %c%s\n", estado_2[0], codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n", pontos_tur_2);
    printf("A densidade populacional de %s é %f\n", cidade_2, den_populacional_2);
    printf("O PIB per capita da cidade de %s é %f\n", cidade_2, per_capita_2);
    
    printf("\n");             

    //1º Menu interativo
    printf("O duelo será com 2 atributos.\n");
    printf("Escolha o 1º atributo:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Nº de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Escolha um nº entre 1 e 5.\n");
    scanf("%d", &atributo1);

    //2º Menu interativo
    if(atributo1 == 1)
    {
        printf("Escolha o 2º atributo:\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Nº de pontos turísticos.\n");
        printf("5. Densidade demográfica.\n");
        printf("Escolha um nº entre 2 e 5.\n");
        scanf("%d", &atributo2);
    }
    else if (atributo1 == 2)
    {
        printf("Escolha o 2º atributo:\n");
        printf("1. População.\n");
        printf("3. PIB.\n");
        printf("4. Nº de pontos turísticos.\n");
        printf("5. Densidade demográfica.\n");
        printf("Escolha um nº entre 3 e 5 ou 1.\n");
        scanf("%d", &atributo2);
    }
    else if (atributo1 == 3)
    {
        printf("Escolha o 2º atributo:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("4. Nº de pontos turísticos.\n");
        printf("5. Densidade demográfica.\n");
        printf("Escolha um nº entre 1 e 5, menos o 3.\n");
        scanf("%d", &atributo2);
    }
    else if (atributo1 == 4)
    {
        printf("Escolha o 2º atributo:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("5. Densidade demográfica.\n");
        printf("Escolha um nº entre 1 e 5, menos o 4.\n");
        scanf("%d", &atributo2);
    }
    else if (atributo1 == 5)
    {
        printf("Escolha o 2º atributo:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Nº de pontos turísticos.\n");
        printf("Escolha um nº entre 1 e 4.\n");
        scanf("%d", &atributo2);
    }
    else
    {
        printf("Entrada inválida.");
    }

    switch (atributo1)
        {
        case 1:
            printf("Atributo 1: População\n");
            printf("Carta 1 - %s tem: %d habitantes.\n", pais_1, populacao_1);
            printf("Carta 2 - %s tem: %d habitantes.\n", pais_2, populacao_2);
            switch (atributo2)
            {
            case 2:
                printf("Atributo 2: Área.\n");
                printf("Carta 1 - %s tem: %.2f km².\n", pais_1, area_1);
                printf("Carta 2 - %s tem: %.2f km².\n", pais_2, area_2);
                resultado = (populacao_1 + area_1) > (populacao_2 + area_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((populacao_1 + area_1) == (populacao_2 + area_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 3:
                printf("Atributo 2: PIB.\n");
                printf("Carta 1 - %s tem: %.2f bilhões de reais de PIB.\n", pais_1, pib_1);
                printf("Carta 2 - %s tem: %.2f bilhões de reais de PIB.\n", pais_2, pib_2);
                resultado = (populacao_1 + pib_1) > (populacao_2 + pib_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((populacao_1 + pib_1) == (populacao_2 + pib_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 4:
                printf("Atributo 2: Pontos turísticos.\n");
                printf("Carta 1 - %s tem: %d pontos turísticos.\n", pais_1, pontos_tur_1);
                printf("Carta 2 - %s tem: %d pontos turísticos.\n", pais_2, pontos_tur_2);
                resultado = (populacao_1 + pontos_tur_1) > (populacao_2 + pontos_tur_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if ((populacao_1 + pontos_tur_1) == (populacao_2 + pontos_tur_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 5:
                printf("Atributo 2: Densidade demográfica.\n");
                printf("Carta 1 - %s tem: %.2f de densidade populacional.\n", pais_1, den_populacional_1);
                printf("Carta 2 - %s tem: %.2f de densidade populacional.\n", pais_2, den_populacional_2);
                resultado = (populacao_1 + 1/den_populacional_1) > (populacao_2 + 1/den_populacional_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((populacao_1 + 1/den_populacional_1) == (populacao_2 + 1/den_populacional_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            default:
                printf("Opção inválida");
                break;
            }
            break;
        case 2:
            printf("Atributo 1: Área.\n");
            printf("Carta 1 - %s tem: %.2f km².\n", pais_1, area_1);
            printf("Carta 2 - %s tem: %.2f km².\n", pais_2, area_2);
            switch (atributo2)
            {
            case 1:
                printf("Atributo 2: População.\n");
                printf("Carta 1 - %s tem: %d habitantes.\n", pais_1, populacao_1);
                printf("Carta 2 - %s tem: %d habitantes.\n", pais_2, populacao_2);
                resultado = (area_1 + populacao_1) > (area_2 + populacao_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if ((area_1 + populacao_1) == (area_2 + populacao_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 3:
                printf("Atributo 2: PIB.\n");
                printf("Carta 1 - %s tem: %.2f bilhões de reais de PIB.\n", pais_1, pib_1);
                printf("Carta 2 - %s tem: %.2f bilhões de reais de PIB.\n", pais_2, pib_2);
                resultado = (area_1 + pib_1) > (area_2 + pib_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((area_1 + pib_1) == (area_2 + pib_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 4:
                printf("Atributo 2: Pontos turísticos.\n");
                printf("Carta 1 - %s tem: %d pontos turísticos.\n", pais_1, pontos_tur_1);
                printf("Carta 2 - %s tem: %d pontos turísticos.\n", pais_2, pontos_tur_2);
                resultado = (area_1 + pontos_tur_1) > (area_2 + pontos_tur_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                } 
                else if((area_1 + pontos_tur_1) == (area_2 + pontos_tur_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            case 5:
                printf("Atributo 2: Densidade demográfica.\n");
                printf("Carta 1 - %s tem: %.2f de densidade populacional.\n", pais_1, den_populacional_1);
                printf("Carta 2 - %s tem: %.2f de densidade populacional.\n", pais_2, den_populacional_2);
                resultado = (area_1 + 1/den_populacional_1) > (area_2 + 1/den_populacional_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((area_1 + 1/den_populacional_1) == (area_2 + 1/den_populacional_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                break;
            default:
                printf("Opção inválida");
                break;
            }
            break;

        case 3:
            printf("Atributo 1: PIB\n");
            printf("Carta 1 - %s tem: %.2f bilhões de reais de PIB.\n", pais_1, pib_1);
            printf("Carta 2 - %s tem: %.2f bilhões de reais de PIB.\n", pais_2, pib_2);
            switch (atributo2)
            {
            case 1:
                printf("Atributo 2: População.\n");
                printf("Carta 1 - %s tem: %d habitantes.\n", pais_1, populacao_1);
                printf("Carta 2 - %s tem: %d habitantes.\n", pais_2, populacao_2);
                resultado = (pib_1 + populacao_1) > (pib_2 + populacao_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pib_1 + populacao_1) == (pib_2 + populacao_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 2:
                printf("Atributo 2: Área.\n");
                printf("Carta 1 - %s tem: %.2f km².\n", pais_1, area_1);
                printf("Carta 2 - %s tem: %.2f km².\n", pais_2, area_2);
                resultado = (area_1 + pib_1) > (area_2 + pib_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((area_1 + pib_1) == (area_2 + pib_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 4:
                printf("Atributo 2: Pontos turísticos.\n");
                printf("Carta 1 - %s tem: %d pontos turísticos.\n", pais_1, pontos_tur_1);
                printf("Carta 2 - %s tem: %d pontos turísticos.\n", pais_2, pontos_tur_2);
                resultado = (pib_1 + pontos_tur_1) > (pib_2 + pontos_tur_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pib_1 + pontos_tur_1) == (pib_2 + pontos_tur_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 5:
                printf("Atributo 2: Densidade demográfica.\n");
                printf("Carta 1 - %s tem: %.2f de densidade populacional.\n", pais_1, den_populacional_1);
                printf("Carta 2 - %s tem: %.2f de densidade populacional.\n", pais_2, den_populacional_2);
                resultado = (pib_1 + 1/den_populacional_1) > (pib_2 + 1/den_populacional_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pib_1 + 1/den_populacional_1) == (pib_2 + 1/den_populacional_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            default:
                printf("Opção inválida");
                break;
            }        
            break;

        case 4:
            printf("Atributo 1: Pontos Turísticos\n");
            printf("Carta 1 - %s tem: %d pontos turísticos.\n", pais_1, pontos_tur_1);
            printf("Carta 2 - %s tem: %d pontos turísticos.\n", pais_2, pontos_tur_2);
            switch (atributo2)
            {
            case 1:
                printf("Atributo 2: População.\n");
                printf("Carta 1 - %s tem: %d habitantes.\n", pais_1, populacao_1);
                printf("Carta 2 - %s tem: %d habitantes.\n", pais_2, populacao_2);
                resultado = (pontos_tur_1 + populacao_1) > (pontos_tur_2 + populacao_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pontos_tur_1 + populacao_1) == (pontos_tur_2 + populacao_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 2:
                printf("Atributo 2: Área.\n");
                printf("Carta 1 - %s tem: %.2f km².\n", pais_1, area_1);
                printf("Carta 2 - %s tem: %.2f km².\n", pais_2, area_2);
                resultado = (area_1 + pontos_tur_1) > (area_2 + pontos_tur_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((area_1 + pontos_tur_1) == (area_2 + pontos_tur_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 3:
                printf("Atributo 2: PIB.\n");
                printf("Carta 1 - %s tem: %.2f bilhões de reais de PIB.\n", pais_1, pib_1);
                printf("Carta 2 - %s tem: %.2f bilhões de reais de PIB.\n", pais_2, pib_2);
                resultado = (pontos_tur_1 + pib_1) > (pontos_tur_2 + pib_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pontos_tur_1 + pib_1) == (pontos_tur_2 + pib_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            case 5:
                printf("Atributo 2: Densidade demográfica.\n");
                printf("Carta 1 - %s tem: %.2f de densidade populacional.\n", pais_1, den_populacional_1);
                printf("Carta 2 - %s tem: %.2f de densidade populacional.\n", pais_2, den_populacional_2);
                resultado = (pontos_tur_1 + 1/den_populacional_1) > (pontos_tur_2 + 1/den_populacional_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((pontos_tur_1 + 1/den_populacional_1) == (pontos_tur_2 + 1/den_populacional_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;
            default:
                printf("Opção inválida");
                break;
            }  
            break;

        case 5:
            printf("Atributo 1: Densidade demográfica\n");
            printf("Carta 1 - %s tem: %.2f de densidade populacional.\n", pais_1, den_populacional_1);
            printf("Carta 2 - %s tem: %.2f de densidade populacional.\n", pais_2, den_populacional_2);
            switch (atributo2)
            {
            case 1:
                printf("Atributo 2: População.\n");
                printf("Carta 1 - %s tem: %d habitantes.\n", pais_1, populacao_1);
                printf("Carta 2 - %s tem: %d habitantes.\n", pais_2, populacao_2);
                resultado = (1/den_populacional_1 + populacao_1) > (1/den_populacional_2 + populacao_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((1/den_populacional_1 + populacao_1) == (1/den_populacional_2 + populacao_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;;
            case 2:
                printf("Atributo 2: Área.\n");
                printf("Carta 1 - %s tem: %.2f km².\n", pais_1, area_1);
                printf("Carta 2 - %s tem: %.2f km².\n", pais_2, area_2);
                resultado = (1/den_populacional_1 + area_1) > (1/den_populacional_2 + area_2)  ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((1/den_populacional_1 + area_1) == (1/den_populacional_2 + area_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;;
            case 3:
                printf("Atributo 2: PIB.\n");
                printf("Carta 1 - %s tem: %.2f bilhões de reais de PIB.\n", pais_1, pib_1);
                printf("Carta 2 - %s tem: %.2f bilhões de reais de PIB.\n", pais_2, pib_2);
                resultado = (1/den_populacional_1 + pib_1) > (1/den_populacional_2 + pib_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((1/den_populacional_1 + pib_1) == (1/den_populacional_2 + pib_2) )
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;;
            case 4:
                printf("Atributo 2: Pontos Turísticos.\n");
                printf("Carta 1 - %s tem: %d pontos turísticos.\n", pais_1, pontos_tur_1);
                printf("Carta 2 - %s tem: %d pontos turísticos.\n", pais_2, pontos_tur_2);
                resultado = (1/den_populacional_1 + pontos_tur_1) > (1/den_populacional_2 + pontos_tur_2) ? 1 : 0;
                if(resultado == 1)
                {
                    printf("A carta 1 (%s) Venceu\n", pais_1);
                }
                else if((1/den_populacional_1 + pontos_tur_1) == (1/den_populacional_2 + pontos_tur_2))
                {
                    printf("Empate\n");
                }
                else
                {
                    printf("A carta 2 (%s) Venceu\n", pais_2);
                }
                return 0;;
            default:
                printf("Opção inválida");
                break;
            }  
            break;
        
        default:
            printf("Opção invalida");
            break;
        }

        return 0;
}