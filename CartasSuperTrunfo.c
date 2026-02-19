#include <stdio.h>

int main() {

    // Carta 1
    char nome[20] = "Carta 1";
    char estado = 'A';
    char codigo[5] = "A01";
    char nome_da_cidade[20] = "Sao Paulo";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int pontos_turisticos = 50;

    // Valores para cálculo - Carta 1
    double populacao1 = 12325000;
    double area1 = 1521.11;
    double PIB1 = 69928000000000;

    double densidade1 = populacao1 / area1;
    double pib_per_capita1 = PIB1 / populacao1;
    double super_poder1 = populacao1 + area1 + PIB1 - densidade1 + pib_per_capita1;

    //colocoquei um titulo para fica mais divertido
    printf("=====================================\n");
    printf("      JOGO DE CARTAS SUPER TRUNFO    \n");
    printf("=====================================\n\n");

    // Exibindo Carta 1
    printf("Titulo: %s\n", nome);
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita1);
    printf("Super Poder: %.2lf\n\n", super_poder1);

    // Carta 2
    char nome2[20] = "Carta 2";
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nome_da_cidade2[20] = "Rio de Janeiro";
    int populacao2_int = 6748000;
    float area2_float = 1200.25;
    float pib2_float = 300.50;
    int pontos_turisticos2 = 30;

    // Valores para cálculo - Carta 2
    double populacao2 = 6748000;
    double area2 = 1200.25;
    double PIB2 = 30050000000000;

    double densidade2 = populacao2 / area2;
    double pib_per_capita2 = PIB2 / populacao2;
    double super_poder2 = populacao2 + area2 + PIB2 - densidade2 + pib_per_capita2;

    // Exibindo Carta 2
    printf("Titulo: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2_int);
    printf("Area: %.2f km²\n", area2_float);
    printf("PIB: %.2f Bilhoes de reais\n", pib2_float);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita2);
    printf("Super Poder: %.2lf\n\n", super_poder2);

    // Comparações
    printf("Comparacao entre as cidades:\n\n");

    printf("Populacao: %s\n", (populacao > populacao2_int) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Area: %s\n", (area > area2_float) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", (pib > pib2_float) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turisticos: %s\n", (pontos_turisticos > pontos_turisticos2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n\n", (super_poder1 > super_poder2) ? "Carta 1 venceu" : "Carta 2 venceu");

/* comparação entre as carta 1 e carta 2 usando if else para determinar
qual e a carta que esta vencendo entre as conparações */ 

    printf("Comparacao entre as cartas usando if else:\n\n");

if (populacao > populacao2_int) { printf("Carta 1 venceu na categoria População\n"); 
    } else { 
        printf("Carta 2 venceu na categoria População\n"); 
} 

if (area > area2_float) { printf("Carta 1 venceu na categoria Área\n");
    } else { 
        printf("Carta 2 venceu na categoria Área\n"); 
} 
    
if (pib > pib2_float) { printf("Carta 1 venceu na categoria PIB\n");
     } else { 
        printf("Carta 2 venceu na categoria PIB\n"); 
    } 
    
if (pontos_turisticos > pontos_turisticos2) { printf("Carta 1 venceu na categoria Pontos Turísticos\n");
    } else { 
        printf("Carta 2 venceu na categoria Pontos Turísticos\n");
 } 

 if (densidade1 < densidade2) { printf("Carta 1 venceu na categoria Densidade Populacional\n");
     } else { 
        printf("Carta 2 venceu na categoria Densidade Populacional\n");
 } 
 
 if (pib_per_capita1 > pib_per_capita2) { printf("Carta 1 venceu na categoria PIB per Capita\n");
     } else { 
        printf("Carta 2 venceu na categoria PIB per Capita\n");
 } 
 
 if (super_poder1 > super_poder2) { printf("Carta 1 venceu na categoria Super Poder\n\n");
     } else { 
        printf("Carta 2 venceu na categoria Super Poder\n\n"); }

// usando switch para criar um menu de comparação entre as cartas

    int escolha;
    printf("=====================================\n");
    printf("        SUPER TRUNFO - CIDADES       \n");
    printf("=====================================\n\n");
    printf("Escolha a categoria para comparar:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\nResultado da comparacao:\n\n");

    // switch de comparação

    switch (escolha) {
        case 1:

            if (populacao > populacao2_int) {
                printf("venceu na categoria População a cidade:\n%s\n\n", nome_da_cidade);
            } else if (populacao < populacao2_int) {
                printf("venceu na categoria População a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria População\n\n");
            }
            break;

        case 2:
               if (area > area2_float) {
                printf("venceu na categoria Área a cidade:\n%s\n\n", nome_da_cidade);
            } else if (area < area2_float) {
                printf("venceu na categoria Área a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria Área\n\n");
            }
            break;

            case 3:
               if (pib > pib2_float) {
                printf("venceu na categoria PIB a cidade:\n%s\n\n", nome_da_cidade);
            } else if (pib < pib2_float) {
                printf("venceu na categoria PIB a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria PIB\n\n");
               
            }
            break;

            case 4:
               if (pontos_turisticos > pontos_turisticos2) {
                printf("venceu na categoria Pontos Turísticos a cidade:\n%s\n\n", nome_da_cidade);
            } else if (pontos_turisticos < pontos_turisticos2) {
                printf("venceu na categoria Pontos Turísticos a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria Pontos Turísticos\n\n");
            }
            break;

            case 5:
               if (densidade1 < densidade2) {
                printf("venceu na categoria Densidade Populacional a cidade:\n%s\n\n", nome_da_cidade);
            } else if (densidade1 > densidade2) {
                printf("venceu na categoria Densidade Populacional a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria Densidade Populacional\n\n");
            }
            break;

            case 6:
               if (pib_per_capita1 > pib_per_capita2) {
                printf("venceu na categoria PIB per Capita a cidade:\n%s\n\n", nome_da_cidade);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("venceu na categoria PIB per Capita a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria PIB per Capita\n\n");
            }
            break;

            case 7:
               if (super_poder1 > super_poder2) {
                printf("venceu na categoria Super Poder a cidade:\n%s\n\n", nome_da_cidade);
            } else if (super_poder1 < super_poder2) {
                printf("venceu na categoria Super Poder a cidade:\n%s\n\n", nome_da_cidade2);
            } else {
                printf("Empate na categoria Super Poder\n\n");
            }
            break;
    }
    
    return 0;
}
