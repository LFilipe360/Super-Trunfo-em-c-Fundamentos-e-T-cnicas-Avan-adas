#include <stdio.h>

int main(){

    char estado;
    char estado2;

    char codigoCarta[4];
    char codigoCarta2[4];

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
    scanf(" %c", &estado2);

    printf("Digite o Código da carta 1:");
    scanf("%s", &codigoCarta);
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
//aventureiro:

    float DensidadePopu = populacao / area;
    float DensidadePopu2 = populacao2/ area2;

    float pibReal1 = pib * 1000000000;
    float pibReal2 = pib2 * 1000000000;
    float PibPerCapita1 = pibReal1 / populacao;
    float PibPerCapita2 = pibReal2 / populacao2;

//

//mestre

    float superPoder1 = populacao + area + pib + NdePontosTuri + PibPerCapita1 - DensidadePopu;
    float superPoder2 = populacao2 + area2 + pib2 + NdePontosTuri2 + PibPerCapita2 - DensidadePopu2;

    int VencedorPopu = 2 - (populacao > populacao2);
    int VencedorArea = 2 - (area > area2);
    int VencedorPib = 2 - (pib > pib2);
    int VencedorNdePoTuri = 2 - (NdePontosTuri > NdePontosTuri2);
    int VencedorDensidadePopu = 2 - (DensidadePopu < DensidadePopu2);
    int VencedorPibPerCapi = 2 - (PibPerCapita1 > PibPerCapita2);

//
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", NdePontosTuri);
    printf("Densidade Populacional: %.2f hab/km^2\n", DensidadePopu);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita1);
    
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
    printf("Densidade Populacional: %.2f hab/km^2\n", DensidadePopu2);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita2);

    printf("\n");
    printf("\n");

    printf("População: Carta %d venceu (%d)\n", VencedorPopu, populacao > populacao2);
    printf("Area: Carta %d venceu (%d)\n", VencedorArea, area > area2);
    printf("PIB: Carta %d venceu (%d)\n", VencedorPib, pib > pib2);
    printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", VencedorNdePoTuri, NdePontosTuri > NdePontosTuri2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", VencedorDensidadePopu, DensidadePopu < DensidadePopu2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", VencedorPibPerCapi, PibPerCapita1 > PibPerCapita2);


    return 0;

}
