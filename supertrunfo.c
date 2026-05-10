#include <stdio.h>

int main(){
    // Iniciando todas as variáveis necessárias para a descrição da carta 1
    char estado1[50], codigo1[50], nomedacidade1[50];
    int numerodepontosturisticos1;
    unsigned long int populacao1;
    float area1, pib1, DensidadePopulacional1, PibPerCapta1, superPoder1;
    
    // Título
    printf("INICIANDO JOGO: SUPER TRUNFO COM 2 CARTAS\n\n");

    // Início da coleta dos dados da carta 1
    printf("Insira as informações da Carta 1: \n");
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("População: \n");
    scanf("%lu", &populacao1);
    
    printf("Área em km²: \n");
    scanf("%f", &area1);
    
    printf("PIB em bilhões de reais: \n");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    /* Descrevendo como serão calculadas as novas variáveis1, incluindo o super 
    poder da carta 1, que é a soma do inverso da densidade populacional, do PIB per capta e do
    número de pontos turísticos.*/
    
    DensidadePopulacional1 = (float) (populacao1 / area1);
    PibPerCapta1 = (float) ((pib1 * 1000000000) / populacao1);
    superPoder1 = (float) ( 1 / DensidadePopulacional1) + PibPerCapta1 + numerodepontosturisticos1 + area1 + populacao1 + pib1;

    // Exibição dos dados da carta 1
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capta: %.2f reais\n", PibPerCapta1);
    printf("Super poder Carta 1: %.2f\n", superPoder1);



    // Iniciando todas as variáveis necessárias para a descrição da carta 2
    char estado2[50], codigo2[50], nomedacidade2[50];
    int numerodepontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2, DensidadePopulacional2, PibPerCapta2, superPoder2;

    // Início da coleta dos dados da carta 2
    printf("\n");
    printf("Insira as informações da Carta 2: \n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", nomedacidade2);
    
    printf("População: \n");
    scanf("%lu", &populacao2);
    
    printf("Área em km²: \n");
    scanf("%f", &area2);
    
    printf("PIB em bilhões de reais: \n");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    /* Descrevendo como serão calculadas as novas variáveis2, incluindo o super 
    poder da carta 2, que é a soma do inverso da densidade populacional, do PIB per capta e do
    número de pontos turísticos.*/

    DensidadePopulacional2 = (float) (populacao2 / area2);
    PibPerCapta2 = (float) ((pib2 * 1000000000) / populacao2);
    superPoder2 = (float) ( 1 / DensidadePopulacional2) + PibPerCapta2 + numerodepontosturisticos2 + area2 + populacao2 + pib2;

    // Exibição dos dados da carta 2
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capta: %.2f reais\n", PibPerCapta2);
    printf("Super poder Carta 2: %.2f\n\n", superPoder2);


    /* Início da comparação entre as cartas 1 e 2, onde é comparado os atributos de 
    cada carta (Exceto estado, código e nome da cidade) e é exibido qual carta tem o 
    maior valor em cada atributo. 
    O maior vence, sendo o resultado 1 = ponto para carta1 e 0 = ponto para carta2.*/

    printf("**Comparação entre as cartas** \n");
    printf("1 = ponto para Carta 1, 0 = ponto para Carta 2\n\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2);
    printf("Densidade Populacional: %d\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: %d\n", PibPerCapta1 > PibPerCapta2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
    

    return 0;
}