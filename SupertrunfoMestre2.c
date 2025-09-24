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

    // Variaveis de armazenamento
    float valortotalcarta1[2] = {0, 0}, valortotalcarta2[2] = {0, 0};
    int atributo1, atributo2;


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

    //Escolha do atributo 1. 

    printf("Digite o número do primeiro atributo que deseja comparar!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo1);

    switch (atributo1){

    case 1:
        printf("Atributo escolhido: População\n");
        valortotalcarta1[0] = populacao1;
        valortotalcarta2[0] = populacao2;
        break;
    case 2:
        printf("Atributo escolhido: Área\n");
        valortotalcarta1[0] = area1;
        valortotalcarta2[0] = area2;
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        valortotalcarta1[0] = pib1;
        valortotalcarta2[0] = pib2;
        break;
    case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        valortotalcarta1[0] = pontos_turisticos1;
        valortotalcarta2[0] = pontos_turisticos2;
        break;
    case 5:
        printf("Atributo escolhido: Densidade\n");
        valortotalcarta1[0] = densidade1;
        valortotalcarta2[0] = densidade2;
        break;
        default:
        printf("Opção inválida. Por favor, escolha um número entre 1 a 5.\n");
        break;
        }

    printf("Digite o número do segundo atributo que deseja comparar(Não pode ser igual a o primeiro Atributo!)\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo2);

        if (atributo1 == atributo2) {
        printf("Você não pode escolher o mesmo atributo, escolha outro!\n");
        return 0;
        } else {
        // Escolha e armazenamento do segundo atributo
         switch (atributo2){
    case 1:
        printf("Atributo escolhido: População\n");
        valortotalcarta1[1] = populacao1;
        valortotalcarta2[1] = populacao2;
        break;
    case 2:
        printf("Atributo escolhido: Área\n");                    
        valortotalcarta1[1] = area1;
        valortotalcarta2[1] = area2;
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        valortotalcarta1[1] = pib1;
        valortotalcarta2[1] = pib2;
        break;
    case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        valortotalcarta1[1] = pontos_turisticos1;
        valortotalcarta2[1] = pontos_turisticos2;
        break;
    case 5:
        printf("Atributo escolhido: Densidade\n");
        valortotalcarta1[1] = densidade1;
        valortotalcarta2[1] = densidade2;
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número entre 1 a 5.\n");
        break;
            }

    // Exibição dos atributos escolhidos
    printf("\nAtributos escolhidos para comparação:\n");
    printf("1º: %d | 2º: %d\n", atributo1, atributo2);
    printf("%s: %.2f, %.2f\n", nome_da_cidade1, valortotalcarta1[0], valortotalcarta1[1]);
    printf("%s: %.2f, %.2f\n", nome_da_cidade2, valortotalcarta2[0], valortotalcarta2[1]);

    // Comparação dos atributos individualmente
    printf("\nResultado da comparação dos atributos:\n");

    // Primeiro atributo
    printf("%s venceu no primeiro atributo!\n",
    (atributo1 == 5) ? // Se for densidade, a menor vence
    (valortotalcarta1[0] < valortotalcarta2[0] ? nome_da_cidade1 :
    valortotalcarta1[0] > valortotalcarta2[0] ? nome_da_cidade2 : "Empate")
    : // Se não for densidade, a maior vence
    (valortotalcarta1[0] > valortotalcarta2[0] ? nome_da_cidade1 :
    valortotalcarta1[0] < valortotalcarta2[0] ? nome_da_cidade2 : "Empate"));

    // Segundo atributo
    printf("%s venceu no segundo atributo!\n",
    (atributo2 == 5) ? // Se for densidade, a menor vence
    (valortotalcarta1[1] < valortotalcarta2[1] ? nome_da_cidade1 :
    valortotalcarta1[1] > valortotalcarta2[1] ? nome_da_cidade2 : "Empate")
    : // Se não for densidade, a maior vence
    (valortotalcarta1[1] > valortotalcarta2[1] ? nome_da_cidade1 :
    valortotalcarta1[1] < valortotalcarta2[1] ? nome_da_cidade2 : "Empate"));

    // Soma dos atributos
    double soma1 = (double)valortotalcarta1[0] + valortotalcarta1[1];
    double soma2 = (double)valortotalcarta2[0] + valortotalcarta2[1];
    printf("\nSoma dos atributos:\n");
    printf("%s: %lf\n", nome_da_cidade1, soma1);
    printf("%s: %lf\n", nome_da_cidade2, soma2);

    // Resultado final
    printf("\nA carta vencedora foi %s!\n", (soma1 > soma2) ? nome_da_cidade1 : (soma2 > soma1) ? nome_da_cidade2 : "Empate");
    }

        return 0;
    }
        

