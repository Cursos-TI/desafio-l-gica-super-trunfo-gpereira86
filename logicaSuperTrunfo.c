#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char cod_cidade_c1[4], cod_cidade_c2[4];
    char nome_cidade_c1[57], nome_cidade_c2[57]; // considerado maior nome de cidade do mundo com 58 letras para determinar tamanho do char

    int populacao_c1, populacao_c2;
    float area_c1, area_c2;
    float pib_c1, pib_c2;
    int pontos_turisticos_c1, pontos_turisticos_c2;
    float densidadePopulacional_c1, densidadePopulacional_c2;
    float pibPerCapita_c1, pibPerCapita_c2;
    float superPoder_c1, superPoder_c2;
    char criterio[30];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    printf("Cadastro de Cartas\n");
    printf("------------------\n\n");

    printf("Obs.: O código da cidade deve ser composto pela letra de 'A a H' que representa o estado,\nseguido do numeral de '01' a '04' que representa a cidade (ex.:A01, B02)\n\n");

    printf("=> Cadastre a primeira carta: \n\n");
    printf("Digite o código da Cidade:\n");
    scanf("%s", cod_cidade_c1);
    
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nome_cidade_c1);

    printf("Digite a população da Cidade:\n");
    scanf("%d", &populacao_c1);

    printf("Digite a área da Cidade (em km²):\n");
    scanf("%f", &area_c1);

    printf("Digite o PIB da Cidade (em Milhões):\n");
    scanf("%f", &pib_c1);

    printf("Digite a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &pontos_turisticos_c1);

    densidadePopulacional_c1 = (float)populacao_c1 / area_c1;
    pibPerCapita_c1 = (pib_c1 * 1000000.0) / (float)populacao_c1;
    superPoder_c1 = (float)(populacao_c1 + pontos_turisticos_c1) + area_c1 + pib_c1 + densidadePopulacional_c1 + pibPerCapita_c1;
    
    
    printf("\n------------------------------------\n");
    printf("Carta %s cadastrada com sucesso\n", cod_cidade_c1);
    printf("------------------------------------\n");
    printf("Cidade: %s\n", nome_cidade_c1);
    printf("População: %d habitantes\n", populacao_c1);
    printf("Área da Cidade: %.2f km²\n", area_c1);
    printf("PIB: %.2f milhões de UM$\n", pib_c1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_c1);
    printf("Densidade Populacional: %.5f habitantes/km²\n", densidadePopulacional_c1);
    printf("PIB per capita Populacional: %.2f UM$ por habidatente\n", pibPerCapita_c1);
    printf("Super poder: %.3f", superPoder_c1);
    printf("------------------------------------\n");
    printf("\n************************************\n\n");


    printf("=> Cadastre a segunda carta: \n\n");

    printf("Digite o código da Cidade:\n");
    scanf("%s", cod_cidade_c2);
    
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nome_cidade_c2);

    printf("Digite a população da Cidade:\n");
    scanf("%d", &populacao_c2);

    printf("Digite a área da Cidade (em km²):\n");
    scanf("%f", &area_c2);

    printf("Digite o PIB da Cidade (em Milhões):\n");
    scanf("%f", &pib_c2);

    printf("Digite a quantidade de pontos turísticos da Cidade:\n");
    scanf("%d", &pontos_turisticos_c2);

    densidadePopulacional_c2 = (float)populacao_c2 / area_c2;
    pibPerCapita_c2 = (pib_c2 * 1000000.0) / (float)populacao_c2;
    superPoder_c2 = (float)(populacao_c2 + pontos_turisticos_c2) + area_c2 + pib_c2 + densidadePopulacional_c2 + pibPerCapita_c2;
    
    printf("\n------------------------------------\n");
    printf("Carta %s cadastrada com sucesso\n", cod_cidade_c2);
    printf("------------------------------------\n");
    printf("Cidade: %s\n", nome_cidade_c2);
    printf("População: %d habitantes\n", populacao_c2);
    printf("Área da Cidade: %.2f km²\n", area_c2);
    printf("PIB: %.2f milhões de UM$\n", pib_c2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_c2);
    printf("Densidade Populacional: %.5f habitantes/km²\n", densidadePopulacional_c2);
    printf("PIB per capita Populacional: %.2f UM$ por habidatente\n", pibPerCapita_c2);
    printf("Super poder: %.3f", superPoder_c2);
    printf("------------------------------------\n");
    printf("\n************************************\n\n"); 

    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("Compando as cartas\n");
    printf("==================\n\n");

    printf("====================================================\n");  
    printf("Critério ---------------- Carta %s ------ Carta %s\n", cod_cidade_c1, cod_cidade_c2);
    printf("====================================================\n");  

    if (populacao_c1 > populacao_c2){
        printf("População: --------------    WIN   ------   LOOSE \n");
    } else {
        printf("População: --------------   LOOSE  ------    WIN  \n");
    }    

    if (area_c1 > area_c2){
        printf("Área: -------------------    WIN   ------   LOOSE \n");
    } else {
        printf("Área: -------------------   LOOSE  ------    WIN  \n");
    }

    if (pib_c1 > pib_c2){
        printf("PIB: --------------------    WIN   ------   LOOSE \n");
    } else {
        printf("PIB: --------------------   LOOSE  ------    WIN  \n");
    }

    if (pontos_turisticos_c1 > pontos_turisticos_c2){
        printf("Pontos turísticos: ------    WIN   ------   LOOSE \n");
    } else {
        printf("Pontos turísticos: ------   LOOSE  ------    WIN  \n");
    }

    if (densidadePopulacional_c1 < densidadePopulacional_c2){
        printf("Densidade populacional: -    WIN   ------   LOOSE \n");
    } else {
        printf("Densidade populacional: -   LOOSE  ------    WIN  \n");
    }

    if (pibPerCapita_c1 > pibPerCapita_c2){
        printf("PIB per capita: ---------    WIN   ------   LOOSE \n");
    } else {
        printf("PIB per capita: ---------   LOOSE  ------    WIN  \n");
    }

    if (superPoder_c1 > superPoder_c2){
        printf("Super poder: ------------    WIN   ------   LOOSE \n");
    } else {
        printf("Super poder: ------------   LOOSE  ------    WIN  \n");
    }

    printf("====================================================\n\n");

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);    
    

    return 0;
}
