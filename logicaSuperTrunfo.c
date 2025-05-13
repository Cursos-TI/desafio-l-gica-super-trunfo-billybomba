#include <stdio.h>

int main()
{
  // Declaracao de variaveis
  unsigned long int populacao[2], pontos[2], vencedores[7];
  float area[2], pib[2], densidadep[2], pibper[2], super_poder[2];
  char estado[2][10], CDcarta[2][10], Ncidade[2][10];

  // Cadastramento carta 1
  printf("Cadastramento de Cartas \n Numero: 1 \n Digite o Estado da Cartas uma letra de 'A' a 'H' (Maiusculo) \n");
  scanf(" %s", &estado[0]);

  printf("Digite o Codigo da Carta  com Letra do estado (Maiusculo) seguida de um numero de 01 a 04 \n");
  scanf(" %s", &CDcarta[0]);

  printf("Digite o nome da cidade \n");
  scanf(" %s", &Ncidade[0]);

  printf("Digite o numero de Papulacao \n");
  scanf(" %i", &populacao[0]);

  printf("Digite a area da cidade em quilometros quadrados \n");
  scanf(" %f", &area[0]);

  printf("Digite o PIB \n");
  scanf(" %f", &pib[0]);

  printf("Digite o Numero de Pontos Turisticos \n");
  scanf(" %i", &pontos[0]);

  // Cadastramento carta 2
  printf("Cadastramento de Cartas \n Numero: 2 \n Digite o Estado da Cartas uma letra de 'A' a 'H' (Maiusculo) \n");
  scanf(" %s", &estado[1]);

  printf("Digite o Codigo da Carta  com Letra do estado (Maiusculo) seguida de um numero de 01 a 04 \n");
  scanf(" %s", &CDcarta[1]);

  printf("Digite o nome da cidade \n");
  scanf(" %s", &Ncidade[1]);

  printf("Digite o numero de Papulacao \n");
  scanf(" %i", &populacao[1]);

  printf("Digite a area da cidade em quilometros quadrados \n");
  scanf(" %f", &area[1]);

  printf("Digite o PIB \n");
  scanf(" %f", &pib[1]);

  printf("Digite o Numero de Pontos Turisticos \n");
  scanf(" %i", &pontos[1]);

  // Calculo PIB per Capita
  pibper[0] = (float)pib[0] / populacao[0];
  pibper[1] = (float)pib[1] / populacao[1];

  // Calculo Densidade Populacional
  densidadep[0] = (float)populacao[0] / area[0];
  densidadep[1] = (float)populacao[1] / area[1];

  super_poder[0] = (float)populacao[0] + area[0] + pib[0] + pontos[0] + (1 / densidadep[0]);
  super_poder[1] = (float)populacao[1] + area[1] + pib[1] + pontos[1] + (1 / densidadep[1]);

  // Comparação das Cartas
  vencedores[0] = (populacao[0] > populacao[1]);
  vencedores[1] = (area[0] > area[1]);
  vencedores[2] = (pib[0] > pib[1]);
  vencedores[3] = (pontos[0] > pontos[1]);
  vencedores[4] = (densidadep[0] < densidadep[1]); // Vence quem tem menor densidade populacional
  vencedores[5] = (pibper[0] > pibper[1]);
  vencedores[6] = (super_poder[0] > super_poder[1]);

  // Imprimir na tela Carta 1
  printf(" Carta : 1\n Estado : %s\n Codigo : %s\n Nome da Cidade : %s\n Populacao : %d\n Area: %.2f\n PIB: %.2f\n Numero de Pontos Turisticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n ", &estado[0], &CDcarta[0], &Ncidade[0], populacao[0], area[0], pib[0], pontos[0], densidadep[0], pibper[0]);

  // Pula linha
  printf("\n");

  // Imprimi na tela Carta 1
  printf(" Carta : 2\n Estado : %s\n Codigo : %s\n Nome da Cidade : %s\n Populacao : %i\n Area: %.2f\n PIB: %.2f\n Numero de Pontos Turisticos: %i\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n ", &estado[1], &CDcarta[1], &Ncidade[1], populacao[1], area[1], pib[1], pontos[1], densidadep[1], pibper[1]);

  // Exibição dos resultados
  printf("\nComparacao de Cartas:\n");
  printf("Populacao: Carta %d venceu (%d)\n", vencedores[0] ? 1 : 2, vencedores[0]); // " ... ? 1 : 2 " Essa condicao compara se a variavel vencedores e 1 ou igual e 2 , se sim ele ganha valor de 1 se nao ela ganha valor 2
  printf("Area: Carta %d venceu (%d)\n", vencedores[1] ? 1 : 2, vencedores[1]);
  printf("PIB: Carta %d venceu (%d)\n", vencedores[2] ? 1 : 2, vencedores[2]);
  printf("Pontos Turiasticos: Carta %d venceu (%d)\n", vencedores[3] ? 1 : 2, vencedores[3]);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedores[4] ? 1 : 2, vencedores[4]);
  printf("PIB per Capita: Carta %d venceu (%d)\n", vencedores[5] ? 1 : 2, vencedores[5]);
  printf("Super Poder: Carta %d venceu (%d)\n", vencedores[6] ? 1 : 2, vencedores[6]);

  printf("\n Carta 1 - %s -Populacao: %d\n", Ncidade[0], populacao[0]);
  printf(" Carta 2 - %s -Populacao: %d\n", Ncidade[1], populacao[1]);

  // Imprimi comparacao entre 2 cartas
  if (populacao[0] > populacao[1])
  {

    printf(" Carta 1 Venceu ! %s \n", Ncidade[0]);
  }
  else
  {

    printf(" Carta 2 Venceu ! %s \n", Ncidade[1]);
  }

  return 0;
}
