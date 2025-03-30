#include <stdio.h>

int main(){

    char estado;
    char estado2;

    char codigoCarta[3];
    char codigoCarta2[3];

    char cidade[50];
    char cidade2[50];

    int populacao;
    int populacao2;

    float area;
    float area2;

    float pib;
    float pib2;

    int NdePontosTuri;
    int NdePontosTuri2;

    printf("Digite o Estado da carta 1:");
    scanf("%c", &estado);
    //printf("Estado: %c\n", estado);
    printf("Digite o Estado da carta 2:");
    scanf(" %c", &estado2);//!!!!!!!!!!!!!!!!sumiu

    printf("Digite o Código da carta 1:");
    scanf("%s", &codigoCarta);//!!!!!!!!!!!!!!sumiu
    printf("Digite o Código da carta 2:");
    scanf("%s", codigoCarta2);

    
    printf("Digite o Nome da Cidade da carta 1:");
    scanf("%s", cidade);
    //printf("Nome da Cidade: %s\n", cidade);
    printf("Digite o Nome da Cidade da carta 2:");
    scanf("%s", cidade2);
    //printf("Nome da Cidade: %s\n", cidade2);


    printf("Digite a População da carta 1:");
    scanf("%d", &populacao);
    //printf("População: %d\n", populacao);
    printf("Digite a População da carta 2:");
    scanf("%d", &populacao2);
    //printf("População: %d\n", populacao2);


    printf("Digite a Area da carta 1:");
    scanf("%f", &area);
    printf("Digite a Area da carta 2:");
    scanf("%f", &area2);


    printf("Digite a PIB da carta 1:");
    scanf("%f", &pib);
    printf("Digite a PIB da carta 2:");
    scanf("%f", &pib2);


    printf("Digite o Número de Pontos Turísticos da carta 1:");
    scanf("%d", &NdePontosTuri);
    printf("Digite o Número de Pontos Turísticos da carta 2:");
    scanf("%d", &NdePontosTuri2);
//ate aqui mec

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", NdePontosTuri);
    
    printf("\n");
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NdePontosTuri2);

//DADOS sumindo

    return 0;

}