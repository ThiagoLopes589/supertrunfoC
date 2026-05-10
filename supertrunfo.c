#include <stdio.h>

int main(){
    char estado1[50], codigo1[50], nomedacidade1[50];
    int populacao1, numerodepontosturisticos1;
    float area1, pib1;

    printf("Descreva as informações da Carta 1: \n");
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("População: \n");
    scanf("%d", &populacao1);
    
    printf("Área em km²: \n");
    scanf("%f", &area1);
    
    printf("PIB em bilhões de reais: \n");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    float DensidadePopulacional1, PibPerCapta1;
    DensidadePopulacional1 = populacao1 / area1;
    PibPerCapta1 = (pib1 * 1000000000) / populacao1;
    // iniciando e descrevendo como serão calculadas as novas variáveis1

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capta: %.2f reais\n", PibPerCapta1);

    
    char estado2[50], codigo2[50], nomedacidade2[50];
    int populacao2, numerodepontosturisticos2;
    float area2, pib2;

    printf("Descreva as informações da Carta 2: \n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", nomedacidade2);
    
    printf("População: \n");
    scanf("%d", &populacao2);
    
    printf("Área em km²: \n");
    scanf("%f", &area2);
    
    printf("PIB em bilhões de reais: \n");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    float DensidadePopulacional2, PibPerCapta2;
    DensidadePopulacional2 = populacao2 / area2;
    PibPerCapta2 = (pib2 * 1000000000) / populacao2;
    // iniciando e descrevendo como serão calculadas as novas variáveis2

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capta: %.2f reais\n", PibPerCapta2);
    printf("teste commit");

    return 0;
}