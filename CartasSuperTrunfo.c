#include <stdio.h> 

int main(){
    // Variáveis da primeira carta
    char estado1;
    char codigocarta1[20];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;
    float superpoder1;

    // Entrada de dados da primeira carta
    printf("Digite a letra do Estado da carta 1 ('A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 ('01' a '04') \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade da carta 1 (Não use espaços nem acentos): \n");
    scanf("%s", nomecidade1);

    printf("Qual a população da cidade da carta 1? \n");
    scanf("%lu", &populacao1); // Usar %lu para unsigned long int

    printf("Qual a área da cidade da carta 1 (em km²)? \n");
    scanf("%f", &areakm1);

    printf("Qual é o PIB da cidade da carta 1? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem nessa cidade 1? \n");
    scanf("%d", &pontosturisticos1);

    // Cálculos da carta 1
    densidadepopulacional1 = (float) populacao1 / areakm1;
    pibpercapta1 = (float) pib1 / populacao1;
    superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapta1 + (1.0f / densidadepopulacional1); // CORRIGIDO

    // Variáveis da segunda carta
    char estado2;
    char codigocarta2[20];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;
    float superpoder2;

    // Entrada de dados da segunda carta
    printf("Digite a letra do Estado da carta 2 ('A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 ('01' a '04') \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade da carta 2 (Não use espaços nem acentos): \n");
    scanf("%s", nomecidade2);

    printf("Qual a população da cidade da carta 2? \n");
    scanf("%lu", &populacao2); 

    printf("Qual a área da cidade da carta 2 (em km²)? \n");
    scanf("%f", &areakm2);

    printf("Qual é o PIB da cidade da carta 2? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem nessa cidade da carta 2? \n");
    scanf("%d", &pontosturisticos2);

    // Cálculos da carta 2
    densidadepopulacional2 = (float) populacao2 / areakm2;
    pibpercapta2 = (float) pib2 / populacao2;
    superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapta2 + (1.0f / densidadepopulacional2);

    // Exibição dos dados das cartas
    printf("\nCarta 1: \n");
    printf("Estado e Código: %c%s\n", estado1, codigocarta1); // CORRIGIDO
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu habitantes\n", populacao1); // CORRIGIDO
    printf("Área: %.2f Km²\n", areakm1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2: \n");
    printf("Estado e Código: %c%s\n", estado2, codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", areakm2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", areakm1 > areakm2 ? 1 : 2, areakm1 > areakm2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2, pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2 ? 1 : 2, densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapta1 > pibpercapta2 ? 1 : 2, pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2);

    return 0;
}
