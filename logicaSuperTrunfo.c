#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado[3];
    char estado2[3];
    char codigo_cidade[3];
    char codigo_cidade2[3];
    char nome_cidade[25]; 
    char nome_cidade2[25];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pnt_turisticos, pnt_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    float super_poder1, super_poder2;



    //print e leitura de dados da carta1
    printf("Insira o nome da cidade 1: \n");
    fgets(nome_cidade,25,stdin);

    
    //Tive que colocar aqui a leitura do nome da cidade 2, pois seu eu colocar mais pra baixo não lê o nome da cidade 2
    printf("Insira o nome da cidade 2: \n");
    fgets(nome_cidade2,sizeof(nome_cidade2),stdin);
     
    printf("Insira o estado da cidade 1 (A-H): \n");
    scanf("%s", estado);

    printf("Insira o código da cidade 1 (1-4): \n");
    scanf("%s", codigo_cidade);    

    printf("Insira a população da cidade 1: \n");
    scanf("%d", &populacao);

    printf("Insira a área da cidade 1: \n");
    scanf("%f", &area);

    printf("Insira o pib da cidade 1: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turisticos 1:\n");
    scanf("%d", &pnt_turisticos);

    //inserir carta 2
    printf("Insira o código da cidade 2 (1-4): \n");
    scanf("%s", codigo_cidade2);    

    printf("Insira o estado da cidade (A-H): \n");
    scanf("%s", estado2);

    printf("Insira a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Insira a area da cidade 2: \n");
    scanf("%f", &area2);

    printf("Insira o pib da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turisticos 2: \n");
    scanf("%d", &pnt_turisticos2);

   

    //calculos

    densidade_populacional = (float) populacao / area;
    pib_per_capita = pib / (float) populacao;

    super_poder1 = (float) populacao + area + pib + (float) pnt_turisticos + pib_per_capita + densidade_populacional;

    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pnt_turisticos2 + pib_per_capita2 + densidade_populacional2;


    //Exibição dos dados
    printf("Nome da cidade 1: %s \n", nome_cidade);
    printf("Estado da cidade 1: %s \n", estado);
    printf("Código da cidade 1: %s \n", codigo_cidade);
    printf("População da cidade 1: %d \n", populacao);
    printf("Área da cidade 1: %.2f \n", area);   
    printf("Insira a área da cidade 2: \n");
    printf("PIB da cidade 1: %.2f \n", pib);
    printf("Número de pontos turísticos 1: %d \n", pnt_turisticos);
    printf("Densidade populacional 1: %.2f \n", densidade_populacional);
    printf("PIB per capita 1: %.2f \n", pib_per_capita);

    printf("\n\n");

    printf("Nome da cidade 2: %s \n", nome_cidade2);
    printf("Estado da cidade 2: %s \n", estado2);
    printf("Código da cidade 2: %s \n", codigo_cidade2); 
    printf("População da cidade 2: %d \n", populacao2);
    printf("Área da cidade 2: %.2f \n", area2);
    printf("PIB da cidade 2: %.2f \n", pib2);
    printf("Número de pontos turísticos 2: %d \n", pnt_turisticos2);
    printf("Densidade populacional 2: %.2f \n", densidade_populacional2);
    printf("PIB per capita 2: %.2f \n", pib_per_capita2);
    

    if(populacao > populacao2){
         printf("A cidade da carta 1 tem a maior população.\n");

    }else{
        printf("A cidade da carta 2 tem a maior população.\n");

    }

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
