#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("DESAFIO CARTAS SUPER TRUNFO \n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[20] , codigo2[20];
  char nome1[20], nome2[20];
  float populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pt_turisticos1, pt_turisticos2;

  // Área para entrada de dados (primeira carta)

  printf("Dados da primeira carta \n");
  printf("Digite o estado (Letra de A a H)\n");
  scanf("%c", &estado1);
  printf("Digite o codigo da carta \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade \n");
  scanf("%s", nome1);
  printf("Digite a população \n");
  scanf("%f", &populacao1);
  printf("Digite a área em Km^2 \n");
  scanf("%f", &area1);
  printf("Digite o PIB \n");
  scanf("%f",&pib1);
  printf("Digite o número de pontos turísticos \n");
  scanf("%d", &pt_turisticos1);

  // Área para exibição dos dados da cidade (primeira carta)
  printf("\n");
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %.2f habitantes \n", populacao1);
  printf("Área: %.2f km^2 \n", area1);
  printf("PIB: %.2f milhões de reais \n", pib1);
  printf("Número de pontos turísiticos: %d \n\n\n", pt_turisticos1);


   // Área para entrada de dados (segunda carta)

  printf("Dados da segunda carta \n");
  printf("Digite o estado (Letra de A a H) \n");
  scanf("%s", &estado2);
  printf("Digite o codigo da carta \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade \n");
  scanf("%s", nome2);
  printf("Digite a população \n");
  scanf("%f", &populacao2);
  printf("Digite a área em Km^2 \n");
  scanf("%f", &area2);
  printf("Digite o PIB \n");
  scanf("%f",&pib2);
  printf("Digite o número de pontos turísticos \n");
  scanf("%d", &pt_turisticos2);

  // Área para exibição dos dados da cidade (segunda carta)

  printf("\n");
  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %.2f habitantes \n", populacao2);
  printf("Área: %.2f km^2 \n", area2);
  printf("PIB: %.2f milhões de reais \n", pib2);
  printf("Número de pontos turísiticos: %d \n", pt_turisticos2);



return 0;
} 
