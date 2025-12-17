#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("DESAFIO CARTAS SUPER TRUNFO \n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //char estado1, estado2;
  //char codigo1[20] , codigo2[20];
  char nome1[20], nome2[20];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pt_turisticos1, pt_turisticos2;
  float densi_popul1, densi_popul2, pib_percapita1, pib_percapita2; 
  float superpoder1, superpoder2; 
  int atributoescolhido;

  // Área para entrada de dados (primeira carta)

  printf("Dados da primeira carta \n");
  printf("Digite o nome do país\n");
  scanf("%s", nome1);
  printf("Digite a população \n");
  scanf("%lu", &populacao1);
  printf("Digite a área em Km^2 \n");
  scanf("%f", &area1);
  printf("Digite o PIB \n");
  scanf("%f",&pib1);
  printf("Digite o número de pontos turísticos \n");
  scanf("%d", &pt_turisticos1);

  // Área para entrada de dados (segunda carta)

  printf("Dados da segunda carta \n");
  printf("Digite o nome do país \n");
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

  densi_popul1 = populacao1 / area1;
  pib_percapita1 = pib1 / populacao1;
  superpoder1 = populacao1 + area1 + pib1 + pt_turisticos1 + pib_percapita1 + (1/densi_popul1);

  densi_popul2 = populacao2 / area2;
  pib_percapita2 = pib2 / populacao2;
  superpoder2 = populacao2 + area2 + pib2 + pt_turisticos2 + pib_percapita2 + (1/densi_popul2);

  // Área de Exibiçao do Menu

  printf("### JOGO DE SUPERTRUNFO ###\n");
  printf("ESCOLHA O ATRIBUTO A SER COMPARADO \n");
  printf("1 - POPULAÇÃO \n");
  printf("2 - ÁREA \n");
  printf("3 - PIB \n");
  printf("4 - NÚMERO DE PONTOS TURÍSITCOS \n");
  printf("5 - DENSIDADE DEMOGRÁFICA \n");
  scanf("%d", &atributoescolhido);
  printf("\n \n");

  // Área para elaboração do Menu

  printf("PAÍS 1 - %s | PAÍS 2 - %s \n", nome1, nome2);
  
  switch (atributoescolhido)
  {
  case 1:
    printf("ATRIBUTO - POPULAÇÃO \n");
    printf(" CARTA 1 - %lu habitantes \n", populacao1);
    printf(" CARTA 2 - %lu habitantes \n", populacao2);
    if (populacao1 > populacao2)
    {
      printf("CARTA 1 VENCEU \n");
    } else if(populacao2 > populacao1){
      printf("CARTA 2 VENCEU \n");
    }else{
      printf("EMPATE");
    }
    break;
  case 2:
    printf("ATRIBUTO - ÁREA \n");
    printf(" CARTA 1 - %.2f km² \n", area1);
    printf(" CARTA 2 - %.2f km² \n", area2);
    if (area1 > area2)
    {
      printf("CARTA 1 VENCEU \n");
    } else if(area2 > area1){
      printf("CARTA 2 VENCEU \n");
    }else{
      printf("EMPATE");
    }
    break;
  case 3:
    printf("ATRIBUTO - PIB \n");
    printf(" CARTA 1 - %.2f trilhões de reais \n", pib1);
    printf(" CARTA 2 - %.2f trilhões de reais \n", pib2);
    if (pib1 > pib2)
    {
      printf("CARTA 1 VENCEU \n");
    } else if(pib2 > pib1){
      printf("CARTA 2 VENCEU \n");
    }else{
      printf("EMPATE");
    }
    break;
  case 4:
    printf("ATRIBUTO - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf(" CARTA 1 - %d pontos turísticos \n", pt_turisticos1);
    printf(" CARTA 2 - %d pontos turísticos \n", pt_turisticos2);
    if (pt_turisticos1 > pt_turisticos2)
    {
      printf("CARTA 1 VENCEU \n");
    } else if(pt_turisticos2 > pt_turisticos1){
      printf("CARTA 2 VENCEU \n");
    }else{
      printf("EMPATE");
    }
    break;
  case 5:
    printf("ATRIBUTO - DENSIDADE DEMOGRÁFICA \n");
    printf(" CARTA 1 - %.2f hab/km² \n", densi_popul1);
    printf(" CARTA 2 - %.2f hab/km² \n", densi_popul2);
    if (densi_popul1 < densi_popul2)
    {
      printf("CARTA 1 VENCEU \n");
    } else if(densi_popul1 > densi_popul2){
      printf("CARTA 2 VENCEU \n");
    }else{
      printf("EMPATE");
    break;
    }
  default:
    printf("OPÇÃO INVÁLIDA \n");
    break;
}

return 0;
}
