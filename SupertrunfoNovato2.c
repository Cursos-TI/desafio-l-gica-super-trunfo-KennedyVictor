#include <stdio.h>
    int main(){

        //VARIAVEIS

        char estado1, estado2;
        char codigo_da_carta1[50], codigo_da_carta2[50];
        char nome_da_cidade1[50], nome_da_cidade2[50];
        unsigned long int populacao1, populacao2;
        int pontos_turisticos1, pontos_turisticos2;
        float area1, area2;
        float pib1, pib2;

        //CADASTRO DA CARTA 1

        printf("=================================\n");       
        printf("Carta 1!\n\n");

        printf("Digite a Letra do Estado(Uma letra 'A' a 'H'): \n");
        scanf(" %c", &estado1);

        printf("Digite o Código da Carta(ex: A01, B01): \n");
        scanf(" %s", codigo_da_carta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nome_da_cidade1);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &populacao1);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos1);

        //CÁLCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E INVERSO DA DENSIDADE POPULACIONAL
        float densidade1 = (float) populacao1 / area1;
        float pibcapita1 = (float) (pib1 * 1000000000) / populacao1;
        float inverso1 =  area1 / populacao1;

        //SOMA DO SUPER PODER
        
        float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibcapita1 + inverso1;

        //CADASTRO DA CARTA 2

        printf("=================================\n");        
        printf("Carta 2!\n\n");

        printf("Digite a Letra do Estado: \n");
        scanf(" %c", &estado2);                 //ESPAÇO ANTES DO %c PARA EVITAR BUGS COM \n
        
        printf("Digite o Código da Carta: \n");
        scanf("%s", codigo_da_carta2);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nome_da_cidade2);

        printf("Digite a População da Cidade: \n");
        scanf("%lu", &populacao2);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos2);

        //CÁLCULO DA DENSIDADE POPULACIONAL, PIB PER CAPITA E INVERSO DA DENSIDADE POPULACIONAL

        float densidade2 = (float) populacao2 / area2;
        float pibcapita2 = (float) (pib2 * 1000000000) / populacao2;
        float inverso2 =  area2 / populacao2;

        //SOMA DO SUPER PODER
        
        float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibcapita2 + inverso2;

        //EXIBIÇÃO DOS DADOS DA CARTA 1 

        printf("=================================\n");
        printf("Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código da Carta: %s\n", codigo_da_carta1);
        printf("Nome da Cidade: %s\n", nome_da_cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", pibcapita1);
        printf("=================================\n\n");

       //EXIBIÇÃO DOS DADOS DA CARTA 2

        printf("=================================\n");
        printf("Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código da Carta: %s\n", codigo_da_carta2);
        printf("Nome da Cidade: %s\n", nome_da_cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", pibcapita2);
        printf("=================================\n\n");

        // Comparação da Área

        printf("Comparação de cartas (Atributo: Area)\n");
        printf("Carta 1 %s: %.2f\n", nome_da_cidade1, area1);
        printf("Carta 2 %s: %.2f\n", nome_da_cidade2, area2);

        if (area1 > area2)
        {
            printf("Carta 1 %s Venceu", nome_da_cidade1);
        } else {
            printf("Carta 2 %s Venceu", nome_da_cidade2);
        }
        
    return 0;

    }