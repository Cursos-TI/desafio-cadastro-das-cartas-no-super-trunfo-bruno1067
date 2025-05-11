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
    char codigo1[4], nome_cidade1[50];                // Código da cidade 1 (ex: A01)
    int populacao1;                                   // População da cidade 1
    float area1, pib1, densidade1, pib_per_capita1;   // Área e PIB da cidade 1
    int pontos_turisticos1;                           // Pontos turísticos da cidade 1

    // Declarando as variaveis da segunda carta
    char codigo2[4], nome_cidade2[50];                // Código da cidade 2 (ex: B02)
    int populacao2;                                   // População da cidade 2
    float area2, pib2, densidade2, pib_per_capita2;   // Área e PIB da cidade 2
    int pontos_turisticos2;                           // Pontos turísticos da cidade 2

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

    densidade1 = populacao1 / area1;        //Atualizando a Densidade Populacional para exibição depois
    pib_per_capita1 = pib1 / populacao1;    //Atualizando o PIB per Capita para exibição depois

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

    densidade2 = populacao2 / area2;        //Atualizando a Densidade Populacional para exibição depois
    pib_per_capita2 = pib2 / populacao2;    //Atualizando o PIB per Capita para exibição depois

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Apresentando a primeira carta
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("------------------------------\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("------------------------------\n");

    // Apresentando a segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("------------------------------\n");
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("------------------------------\n");
    printf("\n\n");

    // Comparando as cartas (Resultado 1 se carta1 vencer, e 0 se carta2 vencer)
    int resultado_populacao = (populacao1 > populacao2);
    int resultado_area = (area1 > area2);
    int resultado_pib = (pib1 > pib2);
    int resultado_pontos = (pontos_turisticos1 > pontos_turisticos2);
    int resultado_densidade = (densidade1 < densidade2); // menor densidade vence
    int resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2);

    // Cálculo dos Super Poderes
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    int resultado_super_poder = (super_poder1 > super_poder2);

// Exibição dos resultados da comparação
    printf("\n===== CARTA 1 VS. CARTA 2 =====\n");
    printf("O Resultado será 1 se a carta 1 vencer e 0 se vencer a carta 2\n");
    printf("\n----- Resultado da Batalha de Cartas -----\n");
    printf("Populacao: %d\n", resultado_populacao);
    printf("Area: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turisticos: %d\n", resultado_pontos);
    printf("Densidade Populacional: %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pib_per_capita);
    printf("----------------------------------\n");
    printf("Super Poder da Carta 1: %.2f\n", super_poder1);
    printf("Super Poder da Carta 2: %.2f\n", super_poder2);
    printf("Carta vencedora no Super Poder: %d\n", resultado_super_poder);
    printf("\n\n");


    return 0;
}
