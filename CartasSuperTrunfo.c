#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
//Dados para trunfo do País 1
  char pais1[30], codigo1[5], capital1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

//Área para dados do País 1

    printf("Digite o País da primeira carta: \n");
    scanf("%s", pais1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite a Capital da primeira carta: \n");
    scanf("%s", capital1);

    printf("Digite a populacao da primeira carta: \n");
    scanf("%d", &populacao1);
    
    printf("Digite o número de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

//Dados para trunfo do País 2
    char pais2[30], codigo2[5], capital2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

//Área para dados do País 2

    printf("Digite o País da segunda carta: \n");
    scanf("%s", pais2); 

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Digite a Capital da segunda carta: \n");
    scanf("%s", capital2);

    printf("Digite a populacao da segunda carta: \n");
    scanf("%d", &populacao2);
    
    printf("Digite o número de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

  //Área para mostrar os dados das cartas 1 e 2

    printf("\n--- Dados da Primeira Carta ---\n");

    printf("O País é: %s \n", pais1);
    printf("O Código é: %s \n", codigo1);
    printf("A capital é: %s \n", capital1);
    printf("A Populacao é de: %d habitantes \n", populacao1);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Area Total: %.2f  km² \n", area1);
    printf("O PIB é de: US$ %.2f \n", pib1);

    
    printf("\n--- Dados da Segunda Carta ---\n");

    printf("O País é: %s \n", pais2);
    printf("O Código é: %s \n", codigo2);  
    printf("A Capital é: %s \n", capital2);
    printf("A Populacao é de: %d habitantes \n", populacao2);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Area Total: %.2f  km² \n", area2);
    printf("O PIB é de: US$ %.2f \n", pib2);



return 0;
} 
