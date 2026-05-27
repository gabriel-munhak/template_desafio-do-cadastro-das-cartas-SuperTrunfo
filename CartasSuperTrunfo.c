#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calculaDensidadePopulacional(float area, unsigned long int populacao) {
  return (float) populacao / area;
}

float calculaOInversoDaDensidadePopulacional(float area, unsigned long int populacao) {
  return area / (float) populacao;
}

float calculaPibPerCapta(float pib, unsigned long int populacao) {
  return (pib * 1000000000.0) / (float) populacao; // converti o pib em bilhão
}

float calculaSuperPoder(unsigned long int populacao, float area, float pib, int nPontosTuristicos, float pibPerCapita, float inversoDaDensidadePopulacional) {
  return (populacao + area + pib + nPontosTuristicos + pibPerCapita) * inversoDaDensidadePopulacional;
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoCartaA[2], 
       codigoCartaA[3], 
       nomeDaCidadeCartaA[50], 

       estadoCartaB[2], 
       codigoCartaB[3], 
       nomeDaCidadeCartaB[50];

  float areaEmKmQuadradoCartaA, 
        pibCartaA, 
        densidadePopulacionalCartaA,
        pibPerCapitaCartaA,
        superPoderCartaA,
                    
        areaEmKmQuadradoCartaB, 
        pibCartaB,
        densidadePopulacionalCartaB,
        pibPerCapitaCartaB,
        superPoderCartaB;

  int quantidadeDePontosTuristicosCartaA, 
      quantidadeDePontosTuristicosCartaB;

  unsigned long int populacaoCartaA,
                    populacaoCartaB;

  // Área para entrada de dados

  // Carta A

  printf("\n--Criando a Carta A--\n");
  
  printf("Insira uma letra de A a H do estado da Carta A: ");
  scanf(" %s", estadoCartaA);

  printf("Insira o código de 01 a 04 da Carta A: ");
  scanf(" %s", codigoCartaA);

  printf("Insira o nome da cidade da Carta A: ");
  scanf(" %s", nomeDaCidadeCartaA);

  printf("Insira a area em km quadrados da Carta A: ");
  scanf("%f", &areaEmKmQuadradoCartaA);

  printf("Insira o PIB Carta A: ");
  scanf("%f", &pibCartaA);

  printf("Insira a populacao da Carta A: ");
  scanf("%lu", &populacaoCartaA);

  printf("Insira o numero de pontos turisticos da Carta A: ");
  scanf("%d", &quantidadeDePontosTuristicosCartaA);

  printf("\nCarta A criada com sucesso!\n\n");

  densidadePopulacionalCartaA = calculaDensidadePopulacional(areaEmKmQuadradoCartaA, populacaoCartaA);
  pibPerCapitaCartaA = calculaPibPerCapta(pibCartaA, populacaoCartaA);
  superPoderCartaA = calculaSuperPoder(populacaoCartaA, areaEmKmQuadradoCartaA, pibCartaA, quantidadeDePontosTuristicosCartaA, pibPerCapitaCartaA, calculaOInversoDaDensidadePopulacional(areaEmKmQuadradoCartaA, populacaoCartaA));

  // Área para exibição dos dados da cidade

  printf("Carta A:\n");
  printf("Estado: %s\n", estadoCartaA);
  printf("Codigo: %s%s\n", estadoCartaA, codigoCartaA);
  printf("Nome da Cidade: %s\n", nomeDaCidadeCartaA);
  printf("População: %lu\n", populacaoCartaA);
  printf("Área: %.2f km²\n", areaEmKmQuadradoCartaA);
  printf("PIB: %.2f bilhões de reais\n", pibCartaA);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosCartaA);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCartaA);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaA);
  printf("Super Poder: %.2f\n", superPoderCartaA);

  // Área para entrada de dados

  // Carta B

  printf("\nCriando a Carta B\n");

  printf("Insira a letra de A a H do estado da Carta B: ");
  scanf(" %s", estadoCartaB);

  printf("Insira o código de 01 a 04 da Carta B: ");
  scanf(" %s", codigoCartaB);

  printf("Insira o nome da cidade da Carta B: ");
  scanf(" %s", nomeDaCidadeCartaB);

  printf("Insira a area em km quadrados da Carta B: ");
  scanf("%f", &areaEmKmQuadradoCartaB);

  printf("Insira o PIB Carta B: ");
  scanf("%f", &pibCartaB);

  printf("Insira a populacao da Carta B: ");
  scanf("%lu", &populacaoCartaB);

  printf("Insira o numero de pontos turisticos da Carta B: ");
  scanf("%d", &quantidadeDePontosTuristicosCartaB);

  printf("\nCarta B criada com sucesso!\n\n");

  densidadePopulacionalCartaB = calculaDensidadePopulacional(areaEmKmQuadradoCartaB, populacaoCartaB);
  pibPerCapitaCartaB = calculaPibPerCapta(pibCartaB, populacaoCartaB);
  superPoderCartaB = calculaSuperPoder(populacaoCartaB, areaEmKmQuadradoCartaB, pibCartaB, quantidadeDePontosTuristicosCartaB, pibPerCapitaCartaB, calculaOInversoDaDensidadePopulacional(areaEmKmQuadradoCartaB, populacaoCartaB));

  // Área para exibição dos dados da cidade

  printf("Carta B:\n");
  printf("Estado: %s\n", estadoCartaB);
  printf("Codigo: %s%s\n", estadoCartaB, codigoCartaB);
  printf("Nome da Cidade: %s\n", nomeDaCidadeCartaB);
  printf("População: %lu\n", populacaoCartaB);
  printf("Área: %.2f km²\n", areaEmKmQuadradoCartaB);
  printf("PIB: %.2f bilhões de reais\n", pibCartaB);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosCartaB);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCartaB);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaB);
  printf("Super Poder: %.2f\n", superPoderCartaB);

  printf("\n-- Duelo --\n\n");

  printf("Comparação de Cartas:");
  printf("População: Carta A venceu (%d)\n", (populacaoCartaA > populacaoCartaB));
  printf("Área: Carta A venceu (%d)\n", (areaEmKmQuadradoCartaA > areaEmKmQuadradoCartaB));
  printf("PIB: Carta A venceu (%d)\n", (pibCartaA > pibCartaB));
  printf("Pontos Turísticos: Carta A venceu (%d)\n", (quantidadeDePontosTuristicosCartaA > quantidadeDePontosTuristicosCartaB));
  printf("Densidade Populacional: Carta A venceu (%d)\n", (densidadePopulacionalCartaA > densidadePopulacionalCartaB));
  printf("PIB per Capita: Carta A venceu (%d)\n", (pibPerCapitaCartaA > pibPerCapitaCartaB));
  printf("Super Poder: Carta A venceu (%d)\n", (superPoderCartaA > superPoderCartaB));

  printf("\n-- Obrigado por criar cartas conosco --\n\n");

  return 0;
}