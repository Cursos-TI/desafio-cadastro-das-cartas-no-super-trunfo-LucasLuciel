#include <stdio.h>

int main() {

// Definição das variáveis para armazenar os dados da cidade.

    int populacao, pontos_turisticos;  
    long long int PIB;
    float area,densidade, PIBpC;
    char estado[20], nome[50], codigo[6];

// Inserimos os valores da cidade.

    printf("insira o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome);

    printf("O seu estado\n");
    scanf(" %s", estado);

    printf("Sua população\n");
    scanf("%d", &populacao);

    printf("Sua area em km²\n");
    scanf("%f", &area);

    printf("O seu PIB\n");
    scanf("%lld", &PIB);

    printf("O número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos);

    //Cálculo da Densidade Populacional e PIB per Capita dos valores inseridos.

    densidade = (float) populacao / area;
    PIBpC = (float) PIB / populacao;
    
    // Por último exibimos os dados da cidade.

    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %lld\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", PIBpC);


    return 0;
}
