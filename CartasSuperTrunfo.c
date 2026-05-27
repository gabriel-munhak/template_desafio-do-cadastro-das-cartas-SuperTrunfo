#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calculaDensidadePopulacional(float area, int populacao) {
  return (float) populacao / area;
}

float calculaPibPerCapta(float pib, int populacao) {
  return (pib * 1000000000.0) / (float) populacao; // converti o pib em bilhão
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoPrimeiraCarta[1], 
       codigoDaPrimeiraCarta[2], 
       nomeDaCidadeDaPrimeiraCarta[50], 

       estadoSegundaCarta[1], 
       codigoDaSegundaCarta[2], 
       nomeDaCidadeDaSegundaCarta[50];

  float areaEmKmQuadradoDaPrimeiraCarta, 
        pibDaPrimeiraCarta, 
        decidadePopulacionalDaPrimeiraCarta,
        pibPerCapitaDaPrimeiraCidade,

        areaEmKmQuadradoDaSegundaCarta, 
        pibDaSegundaCarta,
        decidadePopulacionalDaSegundaCarta,
        pibPerCapitaDaSegundaCidade;

  int quantidadeDePontosTuristicosPrimeiraCarta, 
      quantidadeDePontosTuristicosSegundaCarta,

      populacaoDaPrimeiraCarta,
      populacaoDaSegundaCarta;

  // Área para entrada de dados

  // Primeira carta

  printf("\n--Criando a primeira carta--\n");
  
  printf("Insira uma letra de A a H do estado da primeira carta: ");
  scanf(" %s", estadoPrimeiraCarta);

  printf("Insira o código de 01 a 04 da primeira carta: ");
  scanf(" %s", codigoDaPrimeiraCarta);

  printf("Insira o nome da cidade da primeira carta: ");
  scanf(" %s", nomeDaCidadeDaPrimeiraCarta);

  printf("Insira a area em km quadrados da primeira carta: ");
  scanf("%f", &areaEmKmQuadradoDaPrimeiraCarta);

  printf("Insira o PIB primeira carta: ");
  scanf("%f", &pibDaPrimeiraCarta);

  printf("Insira a populacao da primeira carta: ");
  scanf("%d", &populacaoDaPrimeiraCarta);

  printf("Insira o numero de pontos turisticos da primeira carta: ");
  scanf("%d", &quantidadeDePontosTuristicosPrimeiraCarta);

  printf("\nPrimeira carta criada com sucesso!\n\n");

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", estadoPrimeiraCarta);
  printf("Codigo: %s%s\n", estadoPrimeiraCarta, codigoDaPrimeiraCarta);
  printf("Nome da Cidade: %s\n", nomeDaCidadeDaPrimeiraCarta);
  printf("População: %d\n", populacaoDaPrimeiraCarta);
  printf("Área: %.2f km²\n", areaEmKmQuadradoDaPrimeiraCarta);
  printf("PIB: %.2f bilhões de reais\n", pibDaPrimeiraCarta);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosPrimeiraCarta);
  printf("Densidade Populacional: %.2f hab/km²\n", calculaDensidadePopulacional(areaEmKmQuadradoDaPrimeiraCarta, populacaoDaPrimeiraCarta));
  printf("PIB per Capita: %.2f reais\n", calculaPibPerCapta(pibDaPrimeiraCarta, populacaoDaPrimeiraCarta));

  // Área para entrada de dados

  // Segunda carta

  printf("\nCriando a segunda carta\n");

  printf("Insira a letra de A a H do estado da segunda carta: ");
  scanf(" %s", estadoSegundaCarta);

  printf("Insira o código de 01 a 04 da segunda carta: ");
  scanf(" %s", codigoDaSegundaCarta);

  printf("Insira o nome da cidade da segunda carta: ");
  scanf(" %s", nomeDaCidadeDaSegundaCarta);

  printf("Insira a area em km quadrados da segunda carta: ");
  scanf("%f", &areaEmKmQuadradoDaSegundaCarta);

  printf("Insira o PIB segunda carta: ");
  scanf("%f", &pibDaSegundaCarta);

  printf("Insira a populacao da segunda carta: ");
  scanf("%d", &populacaoDaSegundaCarta);

  printf("Insira o numero de pontos turisticos da segunda carta: ");
  scanf("%d", &quantidadeDePontosTuristicosSegundaCarta);

  printf("\nSegunda carta criada com sucesso!\n\n");

  // Área para exibição dos dados da cidade

  printf("Carta 2:\n");
  printf("Estado: %s\n", estadoSegundaCarta);
  printf("Codigo: %s%s\n", estadoSegundaCarta, codigoDaSegundaCarta);
  printf("Nome da Cidade: %s\n", nomeDaCidadeDaSegundaCarta);
  printf("População: %d\n", populacaoDaSegundaCarta);
  printf("Área: %.2f km²\n", areaEmKmQuadradoDaSegundaCarta);
  printf("PIB: %.2f bilhões de reais\n", pibDaSegundaCarta);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosSegundaCarta);
  printf("Densidade Populacional: %.2f hab/km²\n", calculaDensidadePopulacional(areaEmKmQuadradoDaSegundaCarta, populacaoDaSegundaCarta));
  printf("PIB per Capita: %.2f reais\n", calculaPibPerCapta(pibDaSegundaCarta, populacaoDaSegundaCarta));

  printf("\n-- Obrigado por criar cartas conosco --\n\n");

  return 0;
}