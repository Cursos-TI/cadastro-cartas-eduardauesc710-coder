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
  int atributoescolhido1, atributoescolhido2, resultado1 , resultado2 ;
  float soma1 = 0, soma2 = 0; 

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
  densi_popul2 = populacao2 / area2;

  // Área de Exibiçao do Menu

  printf("### JOGO DE SUPERTRUNFO ###\n");
  printf("ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO \n");
  printf("1 - POPULAÇÃO \n");
  printf("2 - ÁREA \n");
  printf("3 - PIB \n");
  printf("4 - NÚMERO DE PONTOS TURÍSITCOS \n");
  printf("5 - DENSIDADE DEMOGRÁFICA \n");
  scanf("%d", &atributoescolhido1);
  printf("\n \n");

  // Área para elaboração do Menu 1
  
  printf(" PAIS 1 %s| PAIS 2 %s \n", nome1, nome2);
  switch (atributoescolhido1)
  {
  case 1:
    printf("ATRIBUTO 1 - POPULAÇÃO \n");
    populacao1 > populacao2 ? (resultado1 = 1) : (resultado1 = 0);
    printf("População do pais %s = %lu habitantes \n", nome1, populacao1);
    printf("População do pais %s = %lu habitantes \n", nome2, populacao2);
    soma1 = soma1 + populacao1; 
    soma2 = soma2 + populacao2;
    break;
  case 2:
    printf("ATRIBUTO 1 - ÁREA \n");
    area1 > area2 ? (resultado1 = 1): (resultado1 =0);
    printf("Área do pais %s = %.2f km² \n", nome1, area1);
    printf("Área do pais %s = %.2F km² \n", nome2, area2);
    soma1 = soma1 + area1; 
    soma2 = soma2 + area2;
    break;
  case 3:
    printf("ATRIBUTO 1 - PIB \n");
    pib1 > pib2 ? (resultado1 = 1): (resultado1 =0);
    printf("PIB do pais %s = %.2f mihões de dólares \n", nome1, pib1);
    printf("PIB do pais %s = %.2f mihões de dólares \n", nome2, pib2);
    soma1 = soma1 + pib1; 
    soma2 = soma2 + pib2;
    break;
  case 4:
    printf("ATRIBUTO 1  - NÚMERO DE PONTOS TURÍSTICOS\n");
    pt_turisticos1 > pt_turisticos2 ? (resultado1 =1): (resultado1 = 0);
    printf("Número de pontos turísitcos do país %s = %d \n", nome1, pt_turisticos1);
    printf("Número de pontos turísitcos do país %s = %d \n", nome2, pt_turisticos2);
    soma1 = soma1 + pt_turisticos1; 
    soma2 = soma2 + pt_turisticos2;
    break;
  case 5:
    printf("ATRIBUTO 1 - DENSIDADE DEMOGRÁFICA \n");
    densi_popul1 < densi_popul2 ? (resultado1 = 1) : (resultado1 =0);
    printf("Densidade demográfica do país %s = %.2f hab/km² \n", nome1, densi_popul1);
    printf("Densidade demográfica do país %s = %.2f hab/km² \n", nome2, densi_popul2);
    soma1 = soma1 + (1/densi_popul1); 
    soma2 = soma2 + (1/densi_popul2);
    break;
  default:
    printf("OPÇÃO INVÁLIDA \n");
    break;
  }

if (resultado1 == 1) {
  printf("Carta 1 ganhou no primeiro atributo \n");
} else if (resultado1 == 0) {
  printf("Carta 1 perdeu ou empatou no primeiro atributo \n");
} 

printf("ESCOLHA O SEGUNDO ATRIBUTO A SER COMPARADO \n");
printf("OS DOIS ATRIBUTOS ESCOLHIDOS NAO PODEM SER IGUAIS \n");
  printf("1 - POPULAÇÃO \n");
  printf("2 - ÁREA \n");
  printf("3 - PIB \n");
  printf("4 - NÚMERO DE PONTOS TURÍSITCOS \n");
  printf("5 - DENSIDADE DEMOGRÁFICA \n");
  scanf("%d", &atributoescolhido2);
  printf("\n \n");

  if (atributoescolhido1 == atributoescolhido2){
    printf("VOCE ESCOLHEU O MESMO ATRIBUTO \n");
  }else{
    switch (atributoescolhido2)
    {
       case 1:
       printf("ATRIBUTO 2 - POPULAÇÃO \n");
       populacao1 > populacao2 ? (resultado2 = 1) : (resultado2 = 0);
       printf("População do pais %s = %lu habitantes \n", nome1, populacao1);
       printf("População do pais %s = %lu habitantes \n", nome2, populacao2);
       soma1 = soma1 + populacao1;
       soma2 = soma2 + populacao2;
       break;
       case 2:
       printf("ATRIBUTO 2 - ÁREA \n");
       area1 > area2 ? (resultado2 = 1): (resultado2 =0);
       printf("Área do pais %s = %.2f km² \n", nome1, area1);
       printf("Área do pais %s = %.2F km² \n", nome2, area2);
       soma1 = soma1 + area1; 
       soma2 = soma2 + area2;
       break;
       case 3:
       printf("ATRIBUTO 2 - PIB \n");
       pib1 > pib2 ? (resultado2 = 1): (resultado2 =0);
       printf("PIB do pais %s = %.2f mihões de dólares \n", nome1, pib1);
       printf("PIB do pais %s = %.2f milhões de dólares \n", nome2, pib2);
       soma1 = soma1 + pib1; 
       soma2 = soma2 + pib2;
       break;
       case 4:
       printf("ATRIBUTO 2  - NÚMERO DE PONTOS TURÍSTICOS\n");
       pt_turisticos1 > pt_turisticos2 ? (resultado1 =2): (resultado2 = 0);
       printf("Número de pontos turísitcos do país %s = %d \n", nome1, pt_turisticos1);
       printf("Número de pontos turísitcos do país %s = %d \n", nome2, pt_turisticos2);
       soma1 = soma1 + pt_turisticos1; 
       soma2 = soma2 + pt_turisticos2;
       break;
       case 5:
       printf("ATRIBUTO 2 - DENSIDADE DEMOGRÁFICA \n");
       densi_popul1 < densi_popul2 ? (resultado2 = 1) : (resultado2 =0);
       printf("Densidade demográfica do país %s = %.2f hab/km² \n", nome1, densi_popul1);
       printf("Densidade demográfica do país %s = %.2f hab/km² \n", nome2, densi_popul2);
       soma1= soma1 - densi_popul1;
       soma2 = soma2 - densi_popul2;
       break;
       default:
       printf("OPÇÃO INVÁLIDA \n");
       break;
    }
  }


if (resultado2 == 1) {
  printf("Carta 1 ganhou no segundo atributo \n");
} else if (resultado2 == 0) {
  printf("Carta 1 perdeu ou empatou no sengundo atributo \n");
} 

printf("Soma da carta 1 = %.2f \n", soma1);
printf("Soma da carta 2 = %.2f \n", soma2);
if (soma1 > soma2){
  printf("A carta 1 venceu a rodada \n");
} else if (soma1 < soma2) {
  printf("A carta 2 venceu a rodada \n");
}else if (soma1 = soma2) {
  printf("As cartas empataram na rodada \n");
}


return 0;
}
