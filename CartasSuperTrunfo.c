#include <stdio.h>


int main() {

    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [20], cidade2 [20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    printf("Bem vindo ao jogo Super Trunfo ! \n");
    printf("\nVamos começar inserindo os dados da primeira carta! \n");

    printf("\nDigite uma letra que corresponda ao Estado, de A a H: \n");
    scanf(" %c" , &estado1);

    printf("\nDigite agora a letra do estado mais o código da carta, de 01 a 04: \n");
    scanf("%s" , &codigo1);

    printf("\nDigite o nome da cidade: \n");
    scanf("%s" , &cidade1);

    printf("\nDigite a população da cidade: \n");
    scanf("%d" , &populacao1);

    printf("\nDigite a área da cidade em km²: \n");
    scanf("%f" , &area1);

    printf("\nDigite o PIB da cidade: \n");
    scanf("%f" , &pib1);

    printf("\nDigite o número de pontos turísticos da cidade: \n");
    scanf("%d" , &pontos_turisticos1);

    printf("\nCarta 1: \n");
    printf("\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.3d\nÁrea: %.2f\nPIB: %.2f\nNúmeros de Pontos Turísticos: %d\n\n\n" , estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    
    printf("\n\n\nVamos agora inserir os dados da segunda carta! \n");

    printf("\nDigite uma letra que corresponda ao Estado, de A a H: \n");
    scanf(" %c" , &estado2);

    printf("\nDigite agora o código da carta, de 01 a 04: \n");
    scanf("%s" , &codigo2);

    printf("\nDigite o nome da cidade: \n");
    scanf("%s" , &cidade2);

    printf("\nDigite a população da cidade: \n");
    scanf("%d" , &populacao2);

    printf("\nDigite a área da cidade em km²: \n");
    scanf("%f" , &area2);

    printf("\nDigite o PIB da cidade: \n");
    scanf("%f" , &pib2);

    printf("\nDigite o número de pontos turísticos da cidade: \n");
    scanf("%d" , &pontos_turisticos2);

       
    printf("\nCarta 2: \n");
    printf("\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %.3d\nÁrea: %.2f\nPIB: %.2f\nNúmeros de Pontos Turísticos: %d\n\n\n" , estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);


    return 0;
}
