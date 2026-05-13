#include <stdio.h>

int main(){
    // Título
    printf("INICIANDO JOGO: SUPER TRUNFO COM 2 CARTAS\n\n");
    printf("Regras do jogo: \n");
    printf("Cada carta representa uma cidade, com atributos como população, área, PIB e número de pontos turísticos.\n");
    printf("Ao final será comparado os atributos entre as duas cartas, o atributo de maior valor vence (exceto para densidade populacional, onde o menor valor vence).\n\n");

    // Iniciando variaveis calculadas pelo código, como a densidade populacional, o PIB per capta e o super poder da carta 1 e 2
    float DensidadePopulacional1, PibPerCapta1, superPoder1, DensidadePopulacional2, PibPerCapta2, superPoder2;
/*
    // INICIO DA AREA DE TESTES 
    //Aqui é possível testar o código, inserindo os dados das cartas de forma Hardcoded, ou seja, sem
    //a necessidade de inserir os dados manualmente. Para isso, basta descomentar a área de 
    //testes e comentar a área de coleta dos dados das cartas. 
    //(Além desta área, o código possui a area1 e area2, que devem ser comentadas antes de rodar o teste)

    // Iniciando e declarando variáveis da carta 1 e 2, com dados hardcoded para testes.
    char estado1[50] = "A", codigo1[50] = "A01", nomedacidade1[50] = "SÃOPAULO";
    int numerodepontosturisticos1 = 50;
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11, pib1 = 699.28;

    char estado2[50] = "B", codigo2[50] = "B02", nomedacidade2[50] = "RIODEJANEIRO";
    int numerodepontosturisticos2 = 30;
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25, pib2 = 300.50;
    //FINAL DA AREA DE TESTES
*/
                                //INICIO DA AREA1 DE EXCLUSAO PARA TESTES 
    
    // Iniciando todas as variáveis necessárias para a descrição da carta 1
    char estado1[50], codigo1[50], nomedacidade1[50];
    int numerodepontosturisticos1;
    unsigned long int populacao1;
    float area1, pib1;

    // Iniciando todas as variáveis necessárias para a descrição da carta 2
    char estado2[50], codigo2[50], nomedacidade2[50];
    int numerodepontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2;

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

                                // **FINAL DA AREA1 DE EXCLUSAO PARA TESTES


    /*Descrevendo como serão calculadas as novas variáveis1, incluindo o super 
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

                                // INICIO DA AREA2 DE EXCLUSAO PARA TESTES
    
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

                                // **FINAL DA AREA2 DE EXCLUSAO PARA TESTES
    
    /*Descrevendo como serão calculadas as novas variáveis2, incluindo o super 
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
    maior valor em cada atributo (maior vence, exceto densidade populacional).*/

    printf("**Resultado final da comparação entre as cartas**\n");
    
    printf("Comparando a população: ");
    if(populacao1 > populacao2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!", nomedacidade2);
    }
    
    printf("Comparando a área: ");
    if(area1 > area2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    }
     
    printf("Comparando o PIB: ");
    if(pib1 > pib2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    }
     
    printf("Comparando o número de pontos turísticos: ");
    if(numerodepontosturisticos1 > numerodepontosturisticos2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    }
     
    printf("Comparando a densidade populacional: ");
    if(DensidadePopulacional1 < DensidadePopulacional2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    }
       
    printf("Comparando o PIB per capta: ");
    if(PibPerCapta1 > PibPerCapta2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    } 

    printf("Comparando o super poder: ");
    if(superPoder1 > superPoder2) {
        printf("%s venceu!\n", nomedacidade1);
    }   else   {
        printf("%s venceu!\n", nomedacidade2);
    };





    return 0;
}