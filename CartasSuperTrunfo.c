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
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pt_turisticos1, pt_turisticos2;
  float densi_popul1, densi_popul2, pib_percapita1, pib_percapita2; 
  float superpoder1, superpoder2; 

  // Área para entrada de dados (primeira carta)

  printf("Dados da primeira carta \n");
  printf("Digite o estado (Letra de A a H)\n");
  scanf("%c", &estado1);
  printf("Digite o codigo da carta \n");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade \n");
  scanf("%s", nome1);
  printf("Digite a população \n");
  scanf("%lu", &populacao1);
  printf("Digite a área em Km^2 \n");
  scanf("%f", &area1);
  printf("Digite o PIB \n");
  scanf("%f",&pib1);
  printf("Digite o número de pontos turísticos \n");
  scanf("%d", &pt_turisticos1);

  // Área para cálculos adicionais

  densi_popul1 = populacao1 / area1;
  pib_percapita1 = pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + pt_turisticos1 + pib_percapita1 + (1/densi_popul1);

  // Área para exibição dos dados da cidade (primeira carta)
  printf("\n");
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %lu habitantes \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f milhões de reais \n", pib1);
  printf("Número de pontos turísiticos: %d \n", pt_turisticos1);
  printf("Densidade populacional: %.2f hab/Km² \n", densi_popul1);
  printf("PIB per capita: %.2f milhões de reais/hab \n", pib_percapita1);
  printf("Superpoder: %.2f \n\n\n", superpoder1);


   // Área para entrada de dados (segunda carta)

  printf("Dados da segunda carta \n");
  printf("Digite o estado (Letra de A a H) \n");
  scanf("%s", &estado2);
  printf("Digite o codigo da carta \n");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade \n");
  scanf("%s", nome2);
  printf("Digite a população \n");
  scanf("%lu", &populacao2);
  printf("Digite a área em Km^2 \n");
  scanf("%f", &area2);
  printf("Digite o PIB \n");
  scanf("%f",&pib2);
  printf("Digite o número de pontos turísticos \n");
  scanf("%d", &pt_turisticos2);
  

  
  // Área para cálculos adicionais

  densi_popul2 = populacao2 / area2;
  pib_percapita2 = pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + pt_turisticos2 + pib_percapita2 + (1/densi_popul2);


  

  // Área para exibição dos dados da cidade (segunda carta)

  printf("\n");
  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %lu habitantes \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f milhões de reais \n", pib2);
  printf("Número de pontos turísiticos: %d \n", pt_turisticos2);
  printf("Densidade populacional: %.2f hab/km²\n", densi_popul2);
  printf("PIB per capita: %.2f milhões de reais/hab \n", pib_percapita2);
  printf("Superpoder: %.2f \n\n\n", superpoder2);


// Área para comparação 

printf("Comparação de cartas: \n");
printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
printf("Área: Carta 1 venceu (%d) \n", area1 > area2);
printf("PIB: Carta 1 venceu (%d) \n", pib1 > pib2);
printf("Número de pontos turísitcos: Carta 1 venceu (%d) \n", pt_turisticos1 > pt_turisticos2);
printf("PIB per capita: Carta 1 venceu (%d) \n", pib_percapita1 > pib_percapita2); 
printf("Densidade populacional: Carta 1 venceu (%d) \n", densi_popul1 < densi_popul2);
printf("Super Poder: Carta 1 venceu (%d) \n", superpoder1 > superpoder2);


return 0;
} 
