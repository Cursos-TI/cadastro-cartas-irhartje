#include <stdio.h>

int main() { 

    //Dados para trunfo do País 1
    char estado1[30], codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, ppc1, densidade1;

    printf("Digite o Estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite a Cidade da primeira carta: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao da primeira carta: \n");
    scanf("%d", &populacao1);
    
    printf("Digite o número de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    //Calculo do PIB per capita e densidade populacional da primeira carta
    ppc1 = pib1 / populacao1;
    densidade1 = (float) populacao1 / area1;

    //Dados para trunfo do País 2

    char estado2[30], codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, ppc2, densidade2;

    printf("Digite o Estado da segunda carta: \n");
    scanf("%s", estado2); 

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Digite a Cidade da segunda carta: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao da segunda carta: \n");
    scanf("%d", &populacao2);
    
    printf("Digite o número de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    //Calculo do PIB per capita e densidade populacional da segunda carta
    ppc2 = pib2 / populacao2;
    densidade2 = (float) populacao2 / area2;

    //Exibição dos dados da primeira carta
    
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("O Estado é: %s \n", estado1);
    printf("O Código é: %s \n", codigo1);
    printf("A Cidade é: %s \n", cidade1);
    printf("A Populacao é de: %d habitantes \n", populacao1);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos1);
    printf("Area Total: %.3f  km² \n", area1);
    printf("PIB Total: R$ %.2f \n", pib1);
    printf("PIB per capita: R$ %.2f \n", ppc1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);


    //Exibição dos dados da segunda carta
    
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("O Estado é: %s \n", estado2);
    printf("O Código é: %s \n", codigo2);  
    printf("A Cidade é: %s \n", cidade2);
    printf("A Populacao é de: %d habitantes \n", populacao2);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos2);
    printf("Area Total: %.3f  km² \n", area2);
    printf("PIB Total: R$ %.2f \n", pib2);
    printf("PIB per capita: R$ %.2f \n", ppc2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

    return 0;
}
