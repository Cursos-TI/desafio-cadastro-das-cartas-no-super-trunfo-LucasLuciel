#include <stdio.h>

int main() {

// Definição das variáveis para armazenar os dados da cidade.

    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;  
    long long int PIB1, PIB2;
    float area1 ,densidade1, PIBpC1, area2, densidade2, PIBpC2;
    char nome1[50], carta1[6], nome2[50], carta2[6];
    float superpoder1, superpoder2;
    
// Inserimos os valores da primeira carta.
    printf("\n *** Insira os valores da primeira carta *** \n");

    printf("insira o código da carta\n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome1);

    printf("Sua população\n");
    scanf("%d", &populacao1);

    printf("Sua area em km²\n");
    scanf("%f", &area1);

    printf("O seu PIB\n");
    scanf("%lld", &PIB1);

    printf("O número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos1);

    //Cálculo da Densidade Populacional e PIB per Capita dos valores inseridos da primeira carta.

    densidade1 = (float) populacao1 / area1;
    PIBpC1 = (float) PIB1 / populacao1;

    // Cálculo super poder da primeira carta.

    superpoder1 = (float)(populacao1 + area1 + PIB1 + pontos_turisticos1 + densidade1 + PIBpC1);
    
    // Exibimos os dados da primeira carta.

    printf("\n *** Primeira carta *** \n");

    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %lld\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", PIBpC1);
    printf("Seu superpoder é: %.2f\n", superpoder1);

    // Inserimos os valores da segunda carta.

    printf("\n *** Insira os valores da segunda carta *** \n");

    printf("insira o código da carta\n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome2);

    printf("Sua população\n");
    scanf("%d", &populacao2);

    printf("Sua area em km²\n");
    scanf("%f", &area2);

    printf("O seu PIB\n");
    scanf("%lld", &PIB2);

    printf("O número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da Densidade Populacional e PIB per Capita dos valores inseridos da segunda carta.

    densidade2 = (float) populacao2 / area2;
    PIBpC2 = (float) PIB2 / populacao2;
    
    // Cálculo super poder da segunda carta.
    
    superpoder2 = (float)(populacao2 + area2 + PIB2 + pontos_turisticos2 + densidade2 + PIBpC2);

    // Exibimos os dados da segunda carta.

    printf("\n *** Segunda carta *** \n");

    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %lld\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", PIBpC2);
    printf("Seu superpoder é: %.2f\n", superpoder2);

    // Comparação dos dados das duas cartas.

    printf("\n*** Comparação das cartas ***\n");

    printf("Superpoder1 >= Superpoder2: %d\n", superpoder1 >= superpoder2);

    printf("População1 >= População2: %d\n", populacao1 >= populacao2);
    printf("Área1 >= Área2: %d\n", area1 >= area2);
    printf("PIB1 >= PIB2: %d\n", PIB1 >= PIB2);
    printf("Número de pontos turísticos1 >= Número de pontos turísticos2: %d\n", pontos_turisticos1 >= pontos_turisticos2);
    printf("Densidade1 <= Densidade2: %d\n", densidade1 >= densidade2);
    printf("PIB per Capita1 >= PIB per Capita2: %d\n", PIBpC1 >= PIBpC2);

    return 0;
}
