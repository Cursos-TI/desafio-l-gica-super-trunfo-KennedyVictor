#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[30];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;
    float densidade1, pibcapita1;

    // Carta 2 
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[30];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade2, pibcapita2;

    // Cadastro Carta 1
    printf("=================================\nCarta 1!\n");

    printf("Digite a Letra do Estado(Uma letra 'A' a 'H'): \n");
    scanf(" %c", &estado1);     // ESPAÇO ANTES DO %c PARA EVITAR BUGS COM \n

    printf("Digite o Código da Carta(ex: A01, B01): \n");
    scanf("%3s", codigo_da_carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional
    densidade1 = (float) populacao1 / area1;
    // Cálculo do PIB per capita
    pibcapita1 = (pib1 * 1000000000) / populacao1;
    // Cálculo do inverso da densidade (para superpoder)
    float inverso1 = area1 / populacao1;
    // Soma dos atributos para superpoder
    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibcapita1 + inverso1;

    // Cadastro Carta 2
    printf("=================================\nCarta 2!\n");

    printf("Digite a Letra do Estado(Uma letra 'A' a 'H'): \n");
    scanf(" %c", &estado2);     // ESPAÇO ANTES DO %c PARA EVITAR BUGS COM \n

    printf("Digite o Código da Carta(ex: A01, B01): \n");
    scanf("%3s", codigo_da_carta2); 

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional
    densidade2 = (float) populacao2 / area2;
    // Cálculo do PIB per capita
    pibcapita2 = (pib2 * 1000000000) / populacao2;
    // Cálculo do inverso da densidade (para superpoder)
    float inverso2 = area2 / populacao2;
    // Soma dos atributos para superpoder
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibcapita2 + inverso2;

    // Exibição da carta 1 

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

    // Exibição da carta 2

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

    //Escolha de qual atributo vai ser comparado
    int escolha;
    printf("=================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Compara os atributos escolhidos e determina o vencedor
    printf("=================================\nComparação:\n");
    switch (escolha) {
        case 1:
            printf("População -> Carta 1: %lu | Carta 2: %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: Carta 1 (%s)\n", nome_da_cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: Carta 2 (%s)\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Área -> Carta 1: %.2f | Carta 2: %.2f\n", area1, area2);
            if (area1 > area2) printf("Vencedor: Carta 1 (%s)\n", nome_da_cidade1);
            else if (area2 > area1) printf("Vencedor: Carta 2 (%s)\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("PIB -> Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) printf("Vencedor: Carta 1 (%s)\n", nome_da_cidade1);
            else if (pib2 > pib1) printf("Vencedor: Carta 2 (%s)\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos -> Carta 1: %d | Carta 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) printf("Vencedor: Carta 1 (%s)\n", nome_da_cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1) printf("Vencedor: Carta 2 (%s)\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        case 5:
            // Para densidade, vence quem tem menor valor
            printf("Densidade Populacional -> Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: Carta 1 (%s)\n", nome_da_cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: Carta 2 (%s)\n", nome_da_cidade2);
            else printf("Empate!\n");
            break;
        default: 
            // Caso o usuário escolha um número inválido
            printf("Opção inválida!\n");
    }

    return 0;
}