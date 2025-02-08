#include <stdio.h> //Inclui a biblioteca padrão de entrada e saída.

int main() { // Início da execução do programa.

 /*A seguir definimos os valores da carta. 

 int = valores inteiros, 
 float = valores inteiros e com casas decimais,
 char =  nomes podendo conter numeros e caractéres especiais, [] serve para delimitar a quantidade de caractéres.
*/
    int populacao, pontos_turisticos;  
    float area,PIB;
    char estado[20], nome[50], codigo[6];

/* Perguntamos ao usuário os respectivos valores da carta e armazenamos os dados inseridos.

   printf = Imprime a mensagem na tela,
   scanf = Lê os dados inseridos pelo usuário.
*/
    printf("insira o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome);

    printf("O seu estado\n");
    scanf(" %s", estado);

    printf("Sua população\n");
    scanf("%d", &populacao);

    printf("Sua area em km²");
    scanf("%f", &area);

    printf("O seu PIB\n");
    scanf("%f", &PIB);

    printf("O número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos);

// Por último nomeamos e imprimimos os valores inseridos pelo usuário com os dados da carta.

    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    return 0; //Fim do programa
}
