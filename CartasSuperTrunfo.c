#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

float calculaDensidadeDemografica(float area, unsigned long int populacao) {
  return (float) populacao / area;
}

float calculaOInversoDaDensidadeDemografica(float area, unsigned long int populacao) {
  return area / (float) populacao;
}

float calculaPibPerCapta(float pib, unsigned long int populacao) {
  return (pib * 1000000000.0) / (float) populacao;
}

float calculaSuperPoder(unsigned long int populacao, float area, float pib, int nPontosTuristicos, float pibPerCapita, float inversoDaDensidadeDemografica) {
  return (populacao + area + pib + nPontosTuristicos + pibPerCapita) * inversoDaDensidadeDemografica;
}

int comparaAtributo(float valorCartaA, float valorCartaB, int ehDensidade) {
  if(!ehDensidade) {
    return (valorCartaA > valorCartaB) ? 1 : 0;
  } else {
    return (valorCartaA < valorCartaB) ? 1 : 0;
  }
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoCartaA[2], 
       codigoCartaA[3], 
       nomeDaCidadeCartaA[50], 

       estadoCartaB[2], 
       codigoCartaB[3], 
       nomeDaCidadeCartaB[50],

       opcaoUm,
       opcaoDois;

  int resultado1,
      resultado2;

  float areaEmKmQuadradoCartaA, 
        pibCartaA, 
        densidadeDemograficaCartaA,
        pibPerCapitaCartaA,
        superPoderCartaA,
                    
        areaEmKmQuadradoCartaB, 
        pibCartaB,
        densidadeDemograficaCartaB,
        pibPerCapitaCartaB,
        superPoderCartaB,

        somaCartaA = 0,
        somaCartaB = 0;

  int quantidadeDePontosTuristicosCartaA, 
      quantidadeDePontosTuristicosCartaB;

  unsigned long int populacaoCartaA,
                    populacaoCartaB;

  // Área para entrada de dados

  // Carta A

  printf("\n--Crie a sua Carta--\n");
  
  printf("Insira uma letra de A a H do estado da Carta A: ");
  scanf(" %1s", estadoCartaA);

  printf("Insira o código de 01 a 04 da Carta A: ");
  scanf(" %2s", codigoCartaA);

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

  densidadeDemograficaCartaA = calculaDensidadeDemografica(areaEmKmQuadradoCartaA, populacaoCartaA);
  pibPerCapitaCartaA = calculaPibPerCapta(pibCartaA, populacaoCartaA);
  superPoderCartaA = calculaSuperPoder(populacaoCartaA, areaEmKmQuadradoCartaA, pibCartaA, quantidadeDePontosTuristicosCartaA, pibPerCapitaCartaA, calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaA, populacaoCartaA));

  // Área para exibição dos dados da cidade

  printf("Carta A:\n");
  printf("Estado: %s\n", estadoCartaA);
  printf("Codigo: %s%s\n", estadoCartaA, codigoCartaA);
  printf("Nome da Cidade: %s\n", nomeDaCidadeCartaA);
  printf("População: %lu\n", populacaoCartaA);
  printf("Área: %.2f km²\n", areaEmKmQuadradoCartaA);
  printf("PIB: %.2f bilhões de reais\n", pibCartaA);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosCartaA);
  printf("Densidade Demografica: %.2f hab/km²\n", densidadeDemograficaCartaA);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaA);
  printf("Super Poder: %.2f\n", superPoderCartaA);

  // Área para entrada de dados

  // Carta B

  printf("\n--Crie a carta do seu oponente--\n");

  printf("Insira a letra de A a H do estado da Carta B: ");
  scanf(" %1s", estadoCartaB);

  printf("Insira o código de 01 a 04 da Carta B: ");
  scanf(" %2s", codigoCartaB);

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

  densidadeDemograficaCartaB = calculaDensidadeDemografica(areaEmKmQuadradoCartaB, populacaoCartaB);
  pibPerCapitaCartaB = calculaPibPerCapta(pibCartaB, populacaoCartaB);
  superPoderCartaB = calculaSuperPoder(populacaoCartaB, areaEmKmQuadradoCartaB, pibCartaB, quantidadeDePontosTuristicosCartaB, pibPerCapitaCartaB, calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaB, populacaoCartaB));

  // Área para exibição dos dados da cidade

  printf("Carta B:\n");
  printf("Estado: %s\n", estadoCartaB);
  printf("Codigo: %s%s\n", estadoCartaB, codigoCartaB);
  printf("Nome da Cidade: %s\n", nomeDaCidadeCartaB);
  printf("População: %lu\n", populacaoCartaB);
  printf("Área: %.2f km²\n", areaEmKmQuadradoCartaB);
  printf("PIB: %.2f bilhões de reais\n", pibCartaB);
  printf("Quantidade de Pontos Turisticos: %d\n", quantidadeDePontosTuristicosCartaB);
  printf("Densidade Demografica: %.2f hab/km²\n", densidadeDemograficaCartaB);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaB);
  printf("Super Poder: %.2f\n", superPoderCartaB);

  printf("\n-- Duelo --\n\n");

  printf("O estado %s tem %f de poder\n", nomeDaCidadeCartaA, superPoderCartaA);
  printf("O estado %s tem %f de poder\n", nomeDaCidadeCartaB, superPoderCartaB);

  printf("Escolha dois dos atributos abaixo digitando o número que corresponde a ele\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Quantidade de Pontos Turisticos\n");
  printf("5. Densidade Demografica\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Escolha o primeiro atributo: ");
  scanf(" %c", &opcaoUm);

  printf("Escolha o segundo atributo:\n");

  switch(opcaoUm) {
    case '1':
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("5. Densidade Demografica\n");
      printf("6. PIB per Capita\n");
      printf("7. Super Poder\n");
    break;

    case '2':
      printf("1. População\n");
      printf("3. PIB\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("5. Densidade Demografica\n");
      printf("6. PIB per Capita\n");
      printf("7. Super Poder\n");
    break;

    case '3':
      printf("1. População\n");
      printf("2. Área\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("5. Densidade Demografica\n");
      printf("6. PIB per Capita\n");
      printf("7. Super Poder\n");
    break;

    case '4':
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("5. Densidade Demografica\n");
      printf("6. PIB per Capita\n");
      printf("7. Super Poder\n");
    break;

    case '5':
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("6. PIB per Capita\n");
      printf("7. Super Poder\n");
    break;

    case '6':
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("5. Densidade Demografica\n");
      printf("7. Super Poder\n");
    break;

    case '7':
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Quantidade de Pontos Turisticos\n");
      printf("5. Densidade Demografica\n");
      printf("6. PIB per Capita\n");
    break;

    default: {
      printf("Opção inválida, tente novamente.");
      return 0;
    }
  }

  scanf(" %c", &opcaoDois);

  switch(opcaoUm) {
    case '1':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando População--\n");
      printf("Populacao da carta A: %lu\n", populacaoCartaA);
      printf("População da carta B: %lu\n", populacaoCartaB);

      resultado1 = comparaAtributo(populacaoCartaA, populacaoCartaB, 0);

      somaCartaA += populacaoCartaA;
      somaCartaB += populacaoCartaB;
    break;

    case '2':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Área--\n");
      printf("Área da carta A: %.2f km²\n", areaEmKmQuadradoCartaA);
      printf("Área da carta B: %.2f km²\n", areaEmKmQuadradoCartaB);

      resultado1 = comparaAtributo(areaEmKmQuadradoCartaA, areaEmKmQuadradoCartaB, 0);

      somaCartaA += areaEmKmQuadradoCartaA;
      somaCartaB += areaEmKmQuadradoCartaB;
    break;

    case '3':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB--\n");
      printf("PIB da carta A: %.2f bilhões de reais\n", pibCartaA);
      printf("PIB da carta B: %.2f bilhões de reais\n", pibCartaB);

      resultado1 = comparaAtributo(pibCartaA, pibCartaB, 0);

      somaCartaA += pibCartaA;
      somaCartaB += pibCartaB;
    break;

    case '4':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Quantidade de Pontos Turisticos--\n");
      printf("Pontos turísticos da carta A: %d\n", quantidadeDePontosTuristicosCartaA);
      printf("Pontos turísticos da carta B: %d\n", quantidadeDePontosTuristicosCartaB);

      resultado1 = comparaAtributo(quantidadeDePontosTuristicosCartaA, quantidadeDePontosTuristicosCartaB, 0);

      somaCartaA += quantidadeDePontosTuristicosCartaA;
      somaCartaB += quantidadeDePontosTuristicosCartaB;
    break;

    case '5':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Densidade Demográfica--\n");
      printf("Densidade demográfica da carta A: %.2f hab/km²\n", densidadeDemograficaCartaA);
      printf("Densidade demográfica da carta B: %.2f hab/km²\n", densidadeDemograficaCartaB);

      resultado1 = comparaAtributo(densidadeDemograficaCartaA, densidadeDemograficaCartaB, 1);

      somaCartaA += calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaA, populacaoCartaA);
      somaCartaB += calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaB, populacaoCartaB);
    break;

    case '6':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB per Capita--\n");
      printf("PIB per capita da carta A: %.2f reais\n", pibPerCapitaCartaA);
      printf("PIB per capita da carta B: %.2f reais\n", pibPerCapitaCartaB);

      resultado1 = comparaAtributo(pibPerCapitaCartaA, pibPerCapitaCartaB, 0);

      somaCartaA += pibPerCapitaCartaA;
      somaCartaB += pibPerCapitaCartaB;
    break;

    case '7':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Super Poder--\n");
      printf("Super poder da carta A: %.2f\n", superPoderCartaA);
      printf("Super poder da carta B: %.2f\n", superPoderCartaB);

      resultado1 = comparaAtributo(superPoderCartaA, superPoderCartaB, 0);

      somaCartaA += superPoderCartaA;
      somaCartaB += superPoderCartaB;
    break;

    default: {
      printf("Opção inválida, tente novamente.");
    }
  }

  switch(opcaoDois) {
    case '1':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando População--\n");
      printf("Populacao da carta A: %lu\n", populacaoCartaA);
      printf("População da carta B: %lu\n", populacaoCartaB);

      resultado2 = comparaAtributo(populacaoCartaA, populacaoCartaB, 0);

      somaCartaA += populacaoCartaA;
      somaCartaB += populacaoCartaB;
    break;

    case '2':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Área--\n");
      printf("Área da carta A: %.2f km²\n", areaEmKmQuadradoCartaA);
      printf("Área da carta B: %.2f km²\n", areaEmKmQuadradoCartaB);

      resultado2 = comparaAtributo(areaEmKmQuadradoCartaA, areaEmKmQuadradoCartaB, 0);

      somaCartaA += areaEmKmQuadradoCartaA;
      somaCartaB += areaEmKmQuadradoCartaB;
    break;

    case '3':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB--\n");
      printf("PIB da carta A: %.2f bilhões de reais\n", pibCartaA);
      printf("PIB da carta B: %.2f bilhões de reais\n", pibCartaB);

      resultado2 = comparaAtributo(pibCartaA, pibCartaB, 0);

      somaCartaA += pibCartaA;
      somaCartaB += pibCartaB;
    break;

    case '4':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Quantidade de Pontos Turisticos--\n");
      printf("Pontos turísticos da carta A: %d\n", quantidadeDePontosTuristicosCartaA);
      printf("Pontos turísticos da carta B: %d\n", quantidadeDePontosTuristicosCartaB);

      resultado2 = comparaAtributo(quantidadeDePontosTuristicosCartaA, quantidadeDePontosTuristicosCartaB, 0);

      somaCartaA += quantidadeDePontosTuristicosCartaA;
      somaCartaB += quantidadeDePontosTuristicosCartaB;
    break;

    case '5':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Densidade Demográfica--\n");
      printf("Densidade demográfica da carta A: %.2f hab/km²\n", densidadeDemograficaCartaA);
      printf("Densidade demográfica da carta B: %.2f hab/km²\n", densidadeDemograficaCartaB);

      resultado2 = comparaAtributo(densidadeDemograficaCartaA, densidadeDemograficaCartaB, 1);

      somaCartaA += calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaA, populacaoCartaA);
      somaCartaB += calculaOInversoDaDensidadeDemografica(areaEmKmQuadradoCartaB, populacaoCartaB);
    break;

    case '6':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB per Capita--\n");
      printf("PIB per capita da carta A: %.2f reais\n", pibPerCapitaCartaA);
      printf("PIB per capita da carta B: %.2f reais\n", pibPerCapitaCartaB);

      resultado2 = comparaAtributo(pibPerCapitaCartaA, pibPerCapitaCartaB, 0);

      somaCartaA += pibPerCapitaCartaA;
      somaCartaB += pibPerCapitaCartaB;
    break;

    case '7':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Super Poder--\n");
      printf("Super poder da carta A: %.2f\n", superPoderCartaA);
      printf("Super poder da carta B: %.2f\n", superPoderCartaB);

      resultado2 = comparaAtributo(superPoderCartaA, superPoderCartaB, 0);

      somaCartaA += superPoderCartaA;
      somaCartaB += superPoderCartaB;
    break;

    default: {
      printf("Opção inválida, tente novamente.\n");
    }
  }

  printf("\nSoma da carta A: %.2f\n", somaCartaA);
  printf("Soma da carta B: %.2f\n\n", somaCartaB);

  if(somaCartaA > somaCartaB) {
    printf("Carta A venceu!\n");
  } else if(somaCartaB > somaCartaA) {
    printf("Carta B venceu!\n");
  } else {
    printf("Empate!\n");
  }

  printf("\n-- Obrigado por jogar :) --\n\n");

  return 0;
}