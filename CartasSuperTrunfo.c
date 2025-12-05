#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("DESAFIO CARTAS SUPER TRUNFO \n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char nome1[20], nome2[20];
  float populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pt_turisticos1, pt_turisticos2;

  // Área para entrada de dados

  printintf("Dados da primeira carta \n");
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

  // Área para exibição dos dados da cidade

  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %S \n", codigo1);
  printf("Nome da cidade %s \n", nome1);
  printf("População: %f habitantes \n", populacao1);
  printf("Área: %f km^2 \n");
  printf("PIB: %f milhões de reais \n", pib1);
  printf("Número de pontos turísiticos: %d \n", pt_turisticos1);



return 0;
} 
