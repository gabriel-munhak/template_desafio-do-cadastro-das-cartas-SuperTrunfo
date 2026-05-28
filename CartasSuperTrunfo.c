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
  return (pib * 1000000000.0) / (float) populacao; // converti o pib em bilhão
}

float calculaSuperPoder(unsigned long int populacao, float area, float pib, int nPontosTuristicos, float pibPerCapita, float inversoDaDensidadeDemografica) {
  return (populacao + area + pib + nPontosTuristicos + pibPerCapita) * inversoDaDensidadeDemografica;
}

void comparaAtributo(float valorCartaA, float valorCartaB, char nomeDaCidadeCartaA[], char nomeDaCidadeCartaB[], float densidadeDemograficaCarta) {
  if(!densidadeDemograficaCarta) {
    if(valorCartaA > valorCartaB) {
      printf("A cidade de %s ganhou!\n", nomeDaCidadeCartaA);
    } else if(valorCartaA < valorCartaB) {
      printf("A cidade de %s ganhou!\n", nomeDaCidadeCartaB);
    } else {
      printf("Ocorreu um empate entre %s e %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
    }
  } else {
    if(valorCartaA < valorCartaB) {
      printf("A cidade de %s ganhou!\n", nomeDaCidadeCartaA);
    } else if(valorCartaA > valorCartaB) {
      printf("A cidade de %s ganhou!\n", nomeDaCidadeCartaB);
    } else {
      printf("Ocorreu um empate entre %s e %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
    }
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

       opcao;

  float areaEmKmQuadradoCartaA, 
        pibCartaA, 
        densidadeDemograficaCartaA,
        pibPerCapitaCartaA,
        superPoderCartaA,
                    
        areaEmKmQuadradoCartaB, 
        pibCartaB,
        densidadeDemograficaCartaB,
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

  printf("Escolha um dos atributos abaixo digitando o número que corresponde a ele\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Quantidade de Pontos Turisticos\n");
  printf("5. Densidade Demografica\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Opção: ");
  scanf(" %c", &opcao);

  switch(opcao) {
    case '1':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando População--\n");
      printf("Populacao da carta A: %lu\n", populacaoCartaA);
      printf("População da carta B: %lu\n", populacaoCartaB);

      comparaAtributo(populacaoCartaA, populacaoCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    case '2':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Área--\n");
      printf("Área da carta A: %.2f km²\n", areaEmKmQuadradoCartaA);
      printf("Área da carta B: %.2f km²\n", areaEmKmQuadradoCartaB);

      comparaAtributo(areaEmKmQuadradoCartaA, areaEmKmQuadradoCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    case '3':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB--\n");
      printf("PIB da carta A: %.2f bilhões de reais\n", pibCartaA);
      printf("PIB da carta B: %.2f bilhões de reais\n", pibCartaB);

      comparaAtributo(pibCartaA, pibCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    case '4':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Quantidade de Pontos Turisticos--\n");
      printf("Pontos turísticos da carta A: %d\n", quantidadeDePontosTuristicosCartaA);
      printf("Pontos turísticos da carta B: %d\n", quantidadeDePontosTuristicosCartaB);

      comparaAtributo(quantidadeDePontosTuristicosCartaA, quantidadeDePontosTuristicosCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    case '5':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Densidade Demográfica--\n");
      printf("Densidade demográfica da carta A: %.2f hab/km²\n", densidadeDemograficaCartaA);
      printf("Densidade demográfica da carta B: %.2f hab/km²\n", densidadeDemograficaCartaB);

      comparaAtributo(densidadeDemograficaCartaA, densidadeDemograficaCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 1);
    break;

    case '6':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando PIB per Capita--\n");
      printf("PIB per capita da carta A: %.2f reais\n", pibPerCapitaCartaA);
      printf("PIB per capita da carta B: %.2f reais\n", pibPerCapitaCartaB);

      comparaAtributo(pibPerCapitaCartaA, pibPerCapitaCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    case '7':
      printf("Carta A - %s VS Carta B - %s\n", nomeDaCidadeCartaA, nomeDaCidadeCartaB);
      printf("--Comparando Super Poder--\n");
      printf("Super poder da carta A: %.2f\n", superPoderCartaA);
      printf("Super poder da carta B: %.2f\n", superPoderCartaB);

      comparaAtributo(superPoderCartaA, superPoderCartaB, nomeDaCidadeCartaA, nomeDaCidadeCartaB, 0);
    break;

    default: {
      printf("Opção inválida, tente novamente.");
    }
  }

  // switch case
  // 1 numero pra cada case
  // o jogador inputa um numero
  // e dependendo da opção escolhida vai ser comparada a uma equivalente da segunda carta
  // vai exibir quem ganhou na tela

  if (superPoderCartaA > superPoderCartaB) {
    printf("O estado %s venceu!\n", nomeDaCidadeCartaA);
  } else if (superPoderCartaA < superPoderCartaB)  {
    printf("O estado %s venceu!\n\n", nomeDaCidadeCartaB);
  } else {
    printf("Empate!");
  };

  printf("\n-- Obrigado por criar cartas conosco --\n\n");

  return 0;
}