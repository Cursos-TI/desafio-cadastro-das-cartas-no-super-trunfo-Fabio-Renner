int main(){
    //Variáveis da primeira carta.
    char estado1; //Como é apenas uma letra, não precisa do array
    char codigocarta1[20];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;
    float superpoder1;

    //Entrada de dados da primeira carta
    printf("Digite a letra do Estado da carta 1 ('A' a 'H'): \n");
    scanf(" %c", &estado1); // O espaço antes de %c é para evitar problemas com espaços em branco deixados no buffer de entrada.

    printf("Digite o código da carta 1 ('01' a '04') \n");
    scanf(" %s", codigocarta1); //codigocarta1 é um array, sendo assim, não precisa do operador "&"

    printf("Digite o nome da cidade da carta 1 (Não use espaços nem acentos): \n");
    scanf("%s", nomecidade1); //nomecidade1 é um array, sendo assim, não precisa do operador "&"

    printf("Qual a população da cidade da carta 1? \n");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade da carta 1 (em km²)? \n");
    scanf("%f", &areakm1);

    printf("Qual é o PIB da cidade da carta 1? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem nessa cidade 1? \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / areakm1;
    pibpercapta1 = (float) pib1 / populacao1;
    superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidadepopulacional1);
    
    


    //Variáveis da segunda carta.
    char estado2; //Como é apenas uma letra, não precisa do array
    char codigocarta2[20];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;
    float superpoder2;

    //Entrada de dados da segunda carta
    printf("Digite a letra do Estado da carta 2 ('A' a 'H'): \n");
    scanf(" %c", &estado2); // O espaço antes de %c é para evitar problemas com espaços em branco deixados no buffer de entrada.
    
    printf("Digite o código da carta 2 ('01' a '04') \n");
    scanf(" %s", codigocarta2); //codigocarta2 é um array, sendo assim, não precisa do operador "&"

    printf("Digite o nome da cidade da carta 2 (Não use espaços nem acentos): \n");
    scanf("%s", nomecidade2); //nomecidade2 é um array, sendo assim, não precisa do operador "&"

    printf("Qual a população da cidade da carta 2? \n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade da carta 2 (em km²)? \n");
    scanf("%f", &areakm2);

    printf("Qual é o PIB da cidade da carta 2? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem nessa cidade da carta 2? \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / areakm2;
    pibpercapta2 = (float) pib2 / populacao2;
    superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidadepopulacional2);



    //Visualização dos dados das cartas
    printf("\nCarta 1: \n");// Descobri que se fizer assim, vira quase um título.
    printf("A Letra e o código são: %c", estado1);
    printf("%s\n", codigocarta1);
    printf("O nome da cidade é: %s\n", nomecidade1);
    printf("A população da cidade é de %d milhões de habitantes \n", populacao1);
    printf("A área da cidade é de %.2f Km² \n", areakm1);  // %.2f é para exibir um número de ponto flutuante com duas casas decimais.
    printf("O PIB da cidade é de R$ %.2f bilhões \n", pib1);
    printf("A cidade possui %d pontos turísticos \n", pontosturisticos1);
    printf("A densidade populacional da cidade número 1 é de %.2f habitantes/km² \n", densidadepopulacional1);
    printf("O PIB per capta da cidade número 1 é de R$ %.2f \n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);



    printf("\nCarta 2: \n"); // Descobri que se fizer assim, vira quase um título.
    printf("A Letra e o código são: %c", estado2);
    printf("%s\n", codigocarta2);
    printf("O nome da cidade é: %s\n", nomecidade2);
    printf("A população da cidade é de %d milhões de habitantes \n", populacao2);
    printf("A área da cidade é de %.2f Km² \n", areakm2);  // %.2f é para exibir um número de ponto flutuante com duas casas decimais.
    printf("O PIB da cidade é de R$ %.2f bilhões \n", pib2);
    printf("A cidade possui %d pontos turísticos \n", pontosturisticos2);
    printf("A densidade populacional da cidade número 2 é de %.2f habitantes/km² \n", densidadepopulacional2);
    printf("O PIB per capta da cidade número 2 é de R$ %.2f \n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);



    //Comparação das cartas
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


/*
printf(" %formato2 %formato3", variavel1, variavel2, variavel3)

%d: Imprime um inteiro no formato decimal
%i: Equivalente a %d.
%f: Imprime um nbúmero de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica. 
%c: Imprime um único caractere
%s: Imprime uma string (Cadeia de caracteres)
\n: pula linha

*/
