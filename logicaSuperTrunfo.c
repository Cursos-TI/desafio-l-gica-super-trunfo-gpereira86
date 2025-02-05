#include <stdio.h>
#include <string.h>

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
    int opcao, opcaoRespostaJogo = 0;
    int opcao2, opcaoRespostaJogo2 = 0;
    char cidadeVencedora[50], *criterioEscolhido;
    char cidadeVencedora2[50], *criterioEscolhido2;
    
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
    superPoder_c1 = (float)populacao_c1 + (float)pontos_turisticos_c1 + area_c1 + pib_c1 + densidadePopulacional_c1 + pibPerCapita_c1;
    
    
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
    printf("Super poder: %.3f\n", superPoder_c1);
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
    superPoder_c2 = (float)populacao_c2 + (float)pontos_turisticos_c2 + area_c2 + pib_c2 + densidadePopulacional_c2 + pibPerCapita_c2;
    
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
    printf("Super poder: %.3f\n", superPoder_c2);
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
    
    printf("Escolha o critério de comparção entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per capita\n");
    printf("6. Super Poder\n");
    printf("Escolha o critério 1: ");
    scanf("%d", &opcao);

    printf("Escolha o critério 2: ");
    scanf("%d", &opcao2);

    printf("\n#### INICIANDO O JOGO ####\n\n");

    strcpy(cidadeVencedora, cod_cidade_c2);

    strcpy(cidadeVencedora2, cod_cidade_c2);

    switch (opcao) {
    case 1:
        criterioEscolhido = "POPULAÇÃO";

        if(populacao_c1 == populacao_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (populacao_c1 > populacao_c2){
            strcpy(cidadeVencedora, cod_cidade_c1);
        }

        break;
    case 2:
        criterioEscolhido = "ÁREA";

        if(area_c1 == area_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (area_c1 > area_c2){
            strcpy(cidadeVencedora, cod_cidade_c1);
        }

        break;
    case 3:
        criterioEscolhido = "PIB";

        if(pib_c1 == pib_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (pib_c1 > pib_c2){
            strcpy(cidadeVencedora, cod_cidade_c1);
        }

        break;
    case 4:
        criterioEscolhido = "DENSIDADE POPULACIONAL";

        if(densidadePopulacional_c1 == densidadePopulacional_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (densidadePopulacional_c1 < densidadePopulacional_c2){
            strcpy(cidadeVencedora, cod_cidade_c1); 
        }

        break;
    case 5:
        criterioEscolhido = "PIB PER CAPITA";

        if(pibPerCapita_c1 == pibPerCapita_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (pibPerCapita_c1 > pibPerCapita_c2){
            strcpy(cidadeVencedora, cod_cidade_c1);
        }

        break;
    case 6:
        criterioEscolhido = "SUPER PODER";

        if(superPoder_c1 == superPoder_c2){
            strcpy(cidadeVencedora, "Empate");
        } else if (superPoder_c1 > superPoder_c2){
            strcpy(cidadeVencedora, cod_cidade_c1);
        }

        break;
    default:
        printf("Opção inválida!\nJogo encerrado.\n");
        opcaoRespostaJogo = 1;
        break;
    }   

    if(strcmp(cidadeVencedora, "Empate") == 0) {
        opcaoRespostaJogo = 2;
    }

    switch (opcao2) {
    case 1:
        criterioEscolhido2 = "POPULAÇÃO";

        if(populacao_c1 == populacao_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (populacao_c1 > populacao_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1); 
        }

        break;
    case 2:
        criterioEscolhido2 = "ÁREA";

        if(area_c1 == area_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (area_c1 > area_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1); 
        }

        break;
    case 3:
        criterioEscolhido2 = "PIB";

        if(pib_c1 == pib_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (pib_c1 > pib_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1);  
        }

        break;
    case 4:
        criterioEscolhido2 = "DENSIDADE POPULACIONAL";

        if(densidadePopulacional_c1 == densidadePopulacional_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (densidadePopulacional_c1 < densidadePopulacional_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1);  
        }

        break;
    case 5:
        criterioEscolhido2 = "PIB PER CAPITA";

        if(pibPerCapita_c1 == pibPerCapita_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (pibPerCapita_c1 > pibPerCapita_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1); 
        }

        break;
    case 6:
        criterioEscolhido2 = "SUPER PODER";

        if(superPoder_c1 == superPoder_c2){
            strcpy(cidadeVencedora2, "Empate");
        } else if (superPoder_c1 > superPoder_c2){
            strcpy(cidadeVencedora2, cod_cidade_c1); 
        }

        break;
    default:
        printf("Opção inválida!\nJogo encerrado.\n");
        opcaoRespostaJogo2 = 1;
        break;
    }   

    if(strcmp(cidadeVencedora2, "Empate") == 0){
        opcaoRespostaJogo2 = 2;
    }



    if(opcaoRespostaJogo == 1){

        printf("Critério 1 inválido");

        if(opcaoRespostaJogo2 == 1){

            printf(" e critério 2 inválido. Jogo encerrado!\n");

        } else if (opcaoRespostaJogo2 == 2){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n\n");
            printf("EMPATE! Ambas as cidades (%s e %s) tiveram o mesmo resultado\n", cod_cidade_c1, cod_cidade_c2);
            

        } else if (opcaoRespostaJogo2 == 0){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n\n");
            printf("E a a cidade vencedora é: %s\n", cidadeVencedora2);

        } else {
            printf("Erro de sistema!");
        }

    } else if(opcaoRespostaJogo == 2) {

        printf("\n=============================================\n");
        printf("Critério %s escolhido para Batalha\n", criterioEscolhido);
        printf("=============================================\n\n");
        printf("EMPATE!\nAmbas as cidades (%s e %s) tiveram o mesmo resultado\nNinguém marca ponto no primeiro critério.\n\n", cod_cidade_c1, cod_cidade_c2);

        if(opcaoRespostaJogo2 == 1){

            printf("Critério 2 inválido. Jogo encerrado sem ganhador!\n");

        } else if (opcaoRespostaJogo2 == 2){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n\n");
            printf("UAU! EMPATE NOVAMENTE!\nAmbas as cidades (%s e %s) tiveram o mesmo resultado e não há ganhador.\n\n", cod_cidade_c1, cod_cidade_c2);
            

        } else if (opcaoRespostaJogo2 == 0){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n\n");

            printf("E a a cidade vencedora é: %s\n PARABÉNS!\n", cidadeVencedora2);

        } else {
            printf("Erro de sistema!\n");
        }


    } else if(opcaoRespostaJogo == 0) {

        printf("\n=============================================\n");
        printf("Critério %s escolhido para Batalha\n", criterioEscolhido);
        printf("=============================================\n\n");
        printf("E a a cidade vencedora é: %s\n", cidadeVencedora);

        if(opcaoRespostaJogo2 == 1){

            printf("Critério 2 inválido. Jogo encerrado!\n Cidade ganhadara com 1 ponto é: %s\n PARABÉNS!\n", cidadeVencedora);

        } else if (opcaoRespostaJogo2 == 2){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n");
            printf("\nEMPATE no critério %s!\n\n###### COMPUTANDO PONTUAÇÃO... ######\n\nA cidade ganhadora com 1 ponto é: %s\nPARABÉNS!\n", criterioEscolhido2, cidadeVencedora);
            

        } else if (opcaoRespostaJogo2 == 0){

            printf("\n=============================================\n");
            printf("Critério %s escolhido para Batalha\n", criterioEscolhido2);
            printf("=============================================\n");
            printf("\nE a a cidade vencedora é: %s\n", cidadeVencedora2);

            printf("\n\n###### COMPUTANDO PONTUAÇÃO... ######\n\n");

            if(cidadeVencedora == cidadeVencedora2){

                printf("Parabéns! A cidade %s Venceu a batalha!\n\n", cidadeVencedora);    
                
            } else {

                printf("UAU, EMPATE! Ambas as cidades (%s e %s) tiveram a mesma pontuação,\nentão não há ganhadores.\n\n", cod_cidade_c1, cod_cidade_c2);

            }

        } else {
            printf("Erro de sistema!\n");
        }


    } else {
        printf("Erro de sistema!\n");
    }

    printf("\n*********************************************\n");
    return 0;
}
