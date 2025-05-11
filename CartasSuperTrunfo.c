#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declarando as variaveis da primeira carta
    char codigo1[4], nome_cidade1[50];      // Código da cidade 1 (ex: A01)
    int populacao1;                         // População da cidade 1
    float area1, pib1;                      // Área e PIB da cidade 1
    int pontos_turisticos1;                 // Pontos turísticos da cidade 1

    // Declarando as variaveis da segunda carta
    char codigo2[4], nome_cidade2[50];      // Código da cidade 2 (ex: B02)
    int populacao2;                         // População da cidade 2
    float area2, pib2;                      // Área e PIB da cidade 2
    int pontos_turisticos2;                 // Pontos turísticos da cidade 2

    // Coletando os dados da primeira carta
    printf("Vamos cadastrar a primeira carta:\n");

    printf("Digite o codigo da cidade (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (ex: Rio): \n");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);


    // Coletando os dados da segunda carta
    printf("\nAgora vamos cadastrar a segunda carta:\n");

    printf("Digite o codigo da cidade (ex: B02): \n");
    scanf("%s", codigo2);

   printf("Digite o nome da cidade (ex: Salvador): \n");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Apresentando a primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Apresentando a segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("\n\n");

    return 0;
}
