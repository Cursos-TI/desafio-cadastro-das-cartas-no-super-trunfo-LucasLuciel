#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, codigo, pontos_turisticos;
    float area,PIB;
    char estado, nome;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("insira o codigo da cidade\n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("O seu estado\n");
    scanf("%s", &estado);


    printf("Sua população\n");
    scanf("%d", &populacao);

    printf("Sua area em km²");
    scanf("%f", &area);

    printf("O seu PIB\n");
    scanf("%f", &PIB);

    printf("O número de pontos turísticos");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código da cidade: %d\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos turísticos: %d", pontos_turisticos);


    return 0;
}
