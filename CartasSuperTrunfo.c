//Desafio Jogo Super Trunfo - Países: Nível Novato
//Tema 1 - Cadastro das cartas

#include <stdio.h> 

int main(){
//Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1; 
    char codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1,PIB1;

//Importante cadastrar uma carta e imprimir o resultado, pois evita cansar o usuário
    printf("\nBem vindo ao Jogo Super Trunfo - Países!\n");
    printf("Você cadastrará cartas com informações sobre cidades. Vamos começar!\n");

    printf("\nCarta 1.\n"); //Área para entrada de dados da carta 1
    printf("Em maiúsculo de 'A' a 'H', digite a letra inicial do Estado: \n");
    scanf(" %c", &estado1);

    printf("Escreva um número entre 01 e 04: \n");
    scanf(" %s", codigo1);

    printf("Nome da cidade (sem espaços): \n");
    scanf(" %s", cidade1);

    printf("Número de habitantes (número inteiro): \n");
    scanf("%d", &populacao1);

    printf("Área da cidade em Km² (separado por ponto): \n");
    scanf("%f", &area1);

    printf("Qual o PIB? (Separado por ponto)\n");
    scanf("%f", &PIB1);

    printf("Há quantos pontos turísticos?\n");
    scanf("%d", &pontos_turisticos1);

//Área para exibição dos dados da cidade 1

    printf("\nCarta 1\n"); //Aqui sairá o resultado da carta 1
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1); //Resposta da Letra do Estado e do número entre 01-04
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); //Fim da impressão da carta 1

//Área para definição das variáveis para armazenar as propriedades da próxima cidade
    char estado2; 
    char codigo2[4], cidade2[50]; 
    int populacao2, pontos_turisticos2;
    float area2,PIB2;

    printf("\nVamos cadastrar a Carta 2.\n"); //Área para entrada de dados da carta 1
    
    printf("\nEm maiúsculo de 'A' a 'H', digite a letra inicial do Estado: \n");
    scanf(" %c", &estado2);

    printf("Escreva um número entre 01 e 04: \n");
    scanf(" %s", codigo2);

    printf("Nome da cidade (sem espaços): \n");
    scanf(" %s", cidade2);

    printf("Número de habitantes (número inteiro): \n");
    scanf("%d", &populacao2);

    printf("Área da cidade em Km² (separado por ponto): \n");
    scanf("%f", &area2);

    printf("Qual o PIB? (Separado por ponto)\n");
    scanf("%f", &PIB2);

    printf("Há quantos pontos turísticos?\n");
    scanf("%d", &pontos_turisticos2);

// Área para exibição dos dados da cidade 2

    printf("\nCarta 2\n"); // //Aqui sairá o resultado da carta 2
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2); //Resposta da Letra do Estado e do número entre 01-04
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2); //Fim da impressão da carta 2

    return 0;

}