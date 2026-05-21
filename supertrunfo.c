#include <stdio.h>

int main(){
    // Título
    printf("INICIANDO JOGO: SUPER TRUNFO COM 2 CARTAS\n\n");
    
    int opcao;
    printf("MENU:\n\n");
    printf("1. Jogar\n2. regras\n3. Teste\n");
    scanf("%d", &opcao);


    switch(opcao)   {
        case 1: 
            // Iniciando variaveis calculadas pelo código, como a densidade populacional, o PIB per capta e o super poder da carta 1 e 2
            float DensidadePopulacional1, PibPerCapta1, superPoder1, DensidadePopulacional2, PibPerCapta2, superPoder2;

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

            //Descrevendo como serão calculadas as novas variáveis1, incluindo o super 
            //poder da carta 1, que é a soma do inverso da densidade populacional, do PIB per capta e do
            //número de pontos turísticos.
            DensidadePopulacional1 = (float) (populacao1 / area1);
            PibPerCapta1 = (float) ((pib1 * 1000000000) / populacao1);
            superPoder1 = (float) ( 1 / DensidadePopulacional1) + PibPerCapta1 + numerodepontosturisticos1 + area1 + populacao1 + pib1;
            
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
            
            //Descrevendo como serão calculadas as novas variáveis2, incluindo o super 
            //poder da carta 2, que é a soma do inverso da densidade populacional, do PIB per capta e do
            //número de pontos turísticos.
            DensidadePopulacional2 = (float) (populacao2 / area2);
            PibPerCapta2 = (float) ((pib2 * 1000000000) / populacao2);
            superPoder2 = (float) ( 1 / DensidadePopulacional2) + PibPerCapta2 + numerodepontosturisticos2 + area2 + populacao2 + pib2;
            
            // Exibição dos dados coletados
            printf("\nExibindo dados das cartas cadastradas:\n");
            
            // Carta 1
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

            // Carta 2
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


            /* Início da comparação entre as cartas 1 e 2, onde é comparado o atributo
            escolhido pelo jogador (Exceto estado, código e nome da cidade) e é exibido 
            qual carta tem o maior valor em cada atributo (maior vence, exceto densidade populacional).*/

            int opcaojogar;
            printf("\n**Escolha qual atributo deseja comparar(1-7):**\n");
            printf("1. População.\n2. Área.\n3. PIB.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n6. PIB per capta.\n7. Super Poder\n");
            scanf("%d", &opcaojogar);

            switch (opcaojogar)
            {
                case 1:
                    printf("\n\nComparando a População de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %d habitantes\n%s tem %d habitantes\n",nomedacidade1, populacao1, nomedacidade2, populacao2);
                    if(populacao1 == populacao2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (populacao1 > populacao2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                
                    break;
                
                case 2:
                    printf("\n\nComparando a Área de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %.2f km²\n%s tem %.2f km²\n",nomedacidade1, area1, nomedacidade2, area2);
                    if(area1 == area2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (area1 > area2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                case 3:
                    printf("\n\nComparando o PIB de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %.2f bilhões de reais\n%s tem %.2f bilhões de reais\n",nomedacidade1, pib1, nomedacidade2, pib2);
                    if(pib1 == pib2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (pib1 > pib2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                case 4:
                    printf("\n\nComparando o Número de Pontos Turísticos de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %d pontos turísticos\n%s tem %d pontos turísticos\n",nomedacidade1, numerodepontosturisticos1, nomedacidade2, numerodepontosturisticos2);
                    if(numerodepontosturisticos1 == numerodepontosturisticos2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (numerodepontosturisticos1 > numerodepontosturisticos2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                case 5:
                    printf("\n\nComparando a Densidade Populacional de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %.2f habitantes/km²\n%s tem %.2f habitantes/km²\n",nomedacidade1, DensidadePopulacional1, nomedacidade2, DensidadePopulacional2);
                    if(DensidadePopulacional1 == DensidadePopulacional2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (DensidadePopulacional1 < DensidadePopulacional2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                case 6:
                    printf("\n\nComparando o PIB per capta de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem %.2f reais/habitante\n%s tem %.2f reais/habitante\n",nomedacidade1, PibPerCapta1, nomedacidade2, PibPerCapta2);
                    if(PibPerCapta1 == PibPerCapta2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (PibPerCapta1 > PibPerCapta2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                case 7:
                    printf("\n\nComparando o Super Poder de %s vs %s\n\n", nomedacidade1, nomedacidade2);
                    printf("\n%s tem super poder de %.2f\n%s tem super poder de %.2f\n",nomedacidade1, superPoder1, nomedacidade2, superPoder2);
                    if(superPoder1 == superPoder2) {
                        printf("\n      ## EMPATE ##\n\n");
                    } else if (superPoder1 > superPoder2) {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade1);
                    } else {
                        printf("\n   %s VENCEU!!\n\n", nomedacidade2);
                    }
                    break;
                
                default:
                    printf("Opção inválida!");
                    break;
            }
            break;
        case 2:
            printf("\nRegras do jogo: \n");
            printf("Cada carta representa uma cidade, com atributos como população, área, PIB e número de pontos turísticos.\n");
            printf("Ao final será comparado os atributos entre as duas cartas, o atributo de maior valor vence (exceto para densidade populacional, onde o menor valor vence).\n\n");  
        break;

        case 3:
            // #####################################################################################################################################################################################################################
            // #####################################################################################################################################################################################################################
            // #####################################################################################################################################################################################################################
            // #####################################################################################################################################################################################################################
           
            // INICIO DA AREA DE TESTES 
            // Aqui é possível testar o código de maneira rápida, inserindo os dados das cartas de forma Hardcoded, ou seja, sem a necessidade de inserir os dados manualmente.
            // É preciso criar novas variáveis pois se reutilizar a do código do jogo normal, dará erro.
            // Por isso eu criei novas variáveis com o mesmo nome porém incluí 'Teste', para diferenciar.

            // Iniciando variaveis calculadas pelo código, como a densidade populacional, o PIB per capta e o super poder da carta 1 e 2
            float DensidadePopulacionalTeste1, PibPerCaptaTeste1, superPoderTeste1, DensidadePopulacionalTeste2, PibPerCaptaTeste2, superPoderTeste2;

            // Iniciando e declarando variáveis da carta 1 e 2, com dados hardcoded para testes.
            char estadoTeste1[50] = "A", codigoTeste1[50] = "A01", nomedacidadeTeste1[50] = "SÃOPAULO";
            int numerodepontosturisticosTeste1 = 50;
            unsigned long int populacaoTeste1 = 12325000;
            float areaTeste1 = 1521.11, pibTeste1 = 699.28;

            char estadoTeste2[50] = "B", codigoTeste2[50] = "B02", nomedacidadeTeste2[50] = "RIODEJANEIRO";
            int numerodepontosturisticosTeste2 = 30;
            unsigned long int populacaoTeste2 = 6748000;
            float areaTeste2 = 1200.25, pibTeste2 = 300.50;

            DensidadePopulacionalTeste1 = (float) (populacaoTeste1 / areaTeste1);
            PibPerCaptaTeste1 = (float) ((pibTeste1 * 1000000000) / populacaoTeste1);
            superPoderTeste1 = (float) ( 1 / DensidadePopulacionalTeste1) + PibPerCaptaTeste1 + numerodepontosturisticosTeste1 + areaTeste1 + populacaoTeste1 + pibTeste1;

            DensidadePopulacionalTeste2 = (float) (populacaoTeste2 / areaTeste2);
            PibPerCaptaTeste2 = (float) ((pibTeste2 * 1000000000) / populacaoTeste2);
            superPoderTeste2 = (float) ( 1 / DensidadePopulacionalTeste2) + PibPerCaptaTeste2 + numerodepontosturisticosTeste2 + areaTeste2 + populacaoTeste2 + pibTeste2;
            
            // Exibição dos dados coletados
            printf("Exibindo dados das cartas cadastradas:\n");
            
            // Carta 1
            printf("\n");
            printf("Carta 1: \n");
            printf("Estado: %s\n", estadoTeste1);
            printf("Código: %s\n", codigoTeste1);
            printf("Nome da Cidade: %s\n", nomedacidadeTeste1);
            printf("População: %lu\n", populacaoTeste1);
            printf("Área: %.2f km²\n", areaTeste1);
            printf("PIB : %.2f bilhões de reais\n", pibTeste1);
            printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticosTeste1);
            printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacionalTeste1);
            printf("PIB per capta: %.2f reais\n", PibPerCaptaTeste1);
            printf("Super poder Carta 1: %.2f\n", superPoderTeste1);

            // Carta 2
            printf("\n");
            printf("Carta 2: \n");
            printf("Estado: %s\n", estadoTeste2);
            printf("Código: %s\n", codigoTeste2);
            printf("Nome da Cidade: %s\n", nomedacidadeTeste2);
            printf("População: %lu\n", populacaoTeste2);
            printf("Área: %.2f km²\n", areaTeste2);
            printf("PIB: %.2f bilhões de reais\n", pibTeste2);
            printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticosTeste2);
            printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacionalTeste2);
            printf("PIB per capta: %.2f reais\n", PibPerCaptaTeste2);
            printf("Super poder Carta 2: %.2f\n\n", superPoderTeste2);


            /* Início do teste da comparação entre as cartas 1 e 2, onde é comparado o atributo
            escolhido pelo jogador (Exceto estado, código e nome da cidade) e é exibido 
            qual carta tem o maior valor em cada atributo (maior vence, exceto densidade populacional).*/

            int opcaoTeste;
            printf("\n**Escolha qual atributo deseja comparar(1-7):**\n");
            printf("1. População.\n2. Área.\n3. PIB.\n4. Número de Pontos Turísticos.\n5. Densidade Populacional.\n6. PIB per capta.\n7. Super Poder\n");
            scanf("%d", &opcaoTeste);

            switch (opcaoTeste)
            {
            case 1:
                printf("\n\nComparando a População de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\b%s tem %d habitantes\n%s tem %d habitantes\n",nomedacidadeTeste1, populacaoTeste1, nomedacidadeTeste2, populacaoTeste2);
                if(populacaoTeste1 == populacaoTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (populacaoTeste1 > populacaoTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
            
                break;
              
            case 2:
                printf("\n\nComparando a Área de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem %.2f km²\n%s tem %.2f km²\n",nomedacidadeTeste1, areaTeste1, nomedacidadeTeste2, areaTeste2);
                if(areaTeste1 == areaTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (areaTeste1 > areaTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            case 3:
                printf("\n\nComparando o PIB de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem %.2f bilhões de reais\n%s tem %.2f bilhões de reais\n",nomedacidadeTeste1, pibTeste1, nomedacidadeTeste2, pibTeste2);
                if(pibTeste1 == pibTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (pibTeste1 > pibTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            case 4:
                printf("\n\nComparando o Número de Pontos Turísticos de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem %d pontos turísticos\n%s tem %d pontos turísticos\n",nomedacidadeTeste1, numerodepontosturisticosTeste1, nomedacidadeTeste2, numerodepontosturisticosTeste2);
                if(numerodepontosturisticosTeste1 == numerodepontosturisticosTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (numerodepontosturisticosTeste1 > numerodepontosturisticosTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            case 5:
                printf("\n\nComparando a Densidade Populacional de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem %.2f habitantes/km²\n%s tem %.2f habitantes/km²\n",nomedacidadeTeste1, DensidadePopulacionalTeste1, nomedacidadeTeste2, DensidadePopulacionalTeste2);
                if(DensidadePopulacionalTeste1 == DensidadePopulacionalTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (DensidadePopulacionalTeste1 < DensidadePopulacionalTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            case 6:
                printf("\n\nComparando o PIB per capta de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem %.2f reais/habitante\n%s tem %.2f reais/habitante\n",nomedacidadeTeste1, PibPerCaptaTeste1, nomedacidadeTeste2, PibPerCaptaTeste2);
                if(PibPerCaptaTeste1 == PibPerCaptaTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (PibPerCaptaTeste1 > PibPerCaptaTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            case 7:
                printf("\n\nComparando o Super Poder de %s vs %s\n\n", nomedacidadeTeste1, nomedacidadeTeste2);
                printf("\n%s tem super poder de %.2f\n%s tem super poder de %.2f\n",nomedacidadeTeste1, superPoderTeste1, nomedacidadeTeste2, superPoderTeste2);
                if(superPoderTeste1 == superPoderTeste2) {
                    printf("\n      ## EMPATE ##\n\n");
                } else if (superPoderTeste1 > superPoderTeste2) {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste1);
                } else {
                    printf("\n   %s VENCEU!!\n\n", nomedacidadeTeste2);
                }
                break;
              
            default:
                printf("Opção inválida!");
                break;
            }

        break;

        default:
            printf("Opção inválida!\n");
            }

    return 0;
}