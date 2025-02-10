#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de
// comparação de cartas de cidades. Siga os comentários para implementar cada
// parte do desafio.

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades
  // Você pode utilizar o código do primeiro desafio

  typedef struct {
    int population, numberOfTuristicsPoints, cityNumber;
    float pib, area, populationalDensity;
    char name[1000];
  } Card;
  char *attr;

  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das
  // cidades utilizando a função scanf para capturar as entradas. utilize o
  // código do primeiro desafio
  Card cards[2];
  for (int i = 0; i < 2; i++) {
    printf("Insira o número da cidade: ");
    scanf("%d", &cards[i].cityNumber);
    printf("Insira o nome da cidade: ");
    scanf("%s", cards[i].name);
    printf("Insira a quantidade de habitantes: ");
    scanf("%d", &cards[i].population);
    printf("Insira a área da cidade: ");
    scanf("%f", &cards[i].area);
    printf("Insira o PIB: ");
    scanf("%f", &cards[i].pib);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &cards[i].numberOfTuristicsPoints);
    cards[i].populationalDensity = cards[i].population / cards[i].area;
    printf("-------------------------------------------------------------------"
           "--------------\n");
  }
  // Exemplo:
  // printf("Digite o código da cidade: ");
  // scanf("%s", codigo);
  //
  // (Repita para cada propriedade)

  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como
  // população, área, PIB, etc.

  // Exemplo:
  // if (populacaoA > populacaoB) {
  //     printf("Cidade 1 tem maior população.\n");
  // } else {
  //     printf("Cidade 2 tem maior população.\n");
  // }
  printf("Digite o número do atributo que deseja fazer comparação\n");
  printf("1 - quantidade de habitantes\n");
  printf("2 - área da cidade\n");
  printf("3 - PIB da cidade\n");
  printf("4 - quantidade de pontos turísticos\n");
  printf("5 - densidade populacional\n");
  int choice = -1;
  int winner;

  while (choice == -1) {
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      winner = (cards[0].population > cards[1].population) ? 0 : 1;
      attr = "quantidade de habitantes";
      break;
    case 2:
      winner = (cards[0].area > cards[1].area) ? 0 : 1;
      attr = "área";
      break;
    case 3:
      winner = (cards[0].pib > cards[1].pib) ? 0 : 1;
      attr = "PIB";
      break;
    case 4:
      winner =
          (cards[0].numberOfTuristicsPoints > cards[1].numberOfTuristicsPoints)
              ? 0
              : 1;
      attr = "quantidade de pontos turísticos";
      break;
    case 5:
      winner =
          (cards[0].populationalDensity < cards[1].populationalDensity) ? 0 : 1;
      attr = "densidade populacional";
      break;
    default:
      printf("Escolha uma alternativa válida\n");
      choice = -1;
      break;
    }
  }

  printf("A cidade vencedora é: %s\n", cards[winner].name);
  printf("Com base no atributo: %s\n", attr);

  // Exibição dos Resultados:
  // Após realizar as comparações, exiba os resultados para o usuário.
  // Certifique-se de que o sistema mostre claramente qual carta venceu e
  // com base em qual atributo.

  // Exemplo:
  // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  return 0;
}
