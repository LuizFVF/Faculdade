#include <stdio.h>

int main(){
    char estd1, estd2;  //declaração vareiável estado 1 e 2
    char cod1[4], cod2[4];  //declaração codigo carta 1 e 2 com 2 caracteres
    char nomecid1[20], nomecid2[20];   //declaração nome de cidade com 10 caracteres
    int pop1, pop2; //declaração vareiável população 1 e 2
    float area1, area2, pib1, pib2;  //declaração vareiável da area e pib carta 1 e 2
    int pt1, pt2;  //declaração vareiável pontos turisticos 1 e 2 

    //leitura de dados 

    printf("Cadastro carta 1:\n");
    printf("Entre com a primeira letra do estado de A a H:\n");
    scanf(" %c", &estd1);
    printf("Entre com a numeracao da carta(ex: A01):\n");
    scanf(" %s", cod1);
    printf("Entre com o nome da Cidade:\n");
    scanf(" %s", nomecid1);
    printf("Entre com o numero da populacao:\n");
    scanf("%d", &pop1);
    printf("Entre com o tamanho da area em km²:\n");
    scanf(" %f", &area1);
    printf("Entre com o PIB:\n");
    scanf(" %f", &pib1);
    printf("Entre com a quantidade de pontos turisticos:\n");
    scanf(" %d", &pt1);

    printf("Cadastro carta 2:\n");
    printf("Entre com a primeira letra do estado de A a H:\n");
    scanf(" %c", &estd2);
    printf("Entre com a numeracao da carta(ex: A01):\n");
    scanf(" %s", cod2);
    printf("Entre com o nome da Cidade:\n");
    scanf(" %s", nomecid2);
    printf("Entre com o numero da populacao:\n");
    scanf(" %d", &pop2);
    printf("Entre com o tamanho da area em km²:\n");
    scanf(" %f", &area2);
    printf("Entre com o PIB:\n");
    scanf(" %f", &pib2);
    printf("Entre com a quantidade de pontos turisticos:\n");
    scanf(" %d", &pt2);



    //impressao de dados

    printf("Carta 1\n");
    printf("Estado: %c\n", estd1);
    printf("Codigo da carta: %s\n", cod1);
    printf("Nome da Cidade:%s\n", nomecid1);
    printf("Numero da populacao:%d\n", pop1);
    printf("Tamanho da area:%.2f\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf("Numero de pontos Turisticos:%d\n", pt1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estd2);
    printf("Codigo da carta: %s\n", cod2);
    printf("Nome da Cidade:%s\n", nomecid2);
    printf("Numero da populacao:%d\n", pop2);
    printf("Tamanho da area:%.2f\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Numero de pontos Turisticos:%d\n", pt2);    

    return 0;
}