#include <stdio.h>
int main (){

// Exibindo os dados da carta 1

char nome[20] = "Carta 1";
char Estado = 'A';
char Código[5] =  "A01";
char Nome_da_Cidade[20]  ="São Paulo";
int População = 12325000;
float Àrea = 1521.11;
float PIB = 699.28;
int Pontos_Turísticos = 50;

// dados da carta 1 em numeros sem abreviação para faz os calculos

float populacao1 = 12325000;
float area1 = 1521.11;
float PIB1 = 699280000000.00;
float Densidade_Populacional1 = populacao1 / area1; 
float PIB_per_Capita1 = PIB1 / populacao1;
float super_poder = populacao1 + area1 + PIB1 - Densidade_Populacional1 + PIB_per_Capita1;  

printf("Titulo: %s\n", nome);
printf("Estado: %c\n", Estado);
printf("Código: %s\n", Código);
printf("Nome da Cidade: %s\n", Nome_da_Cidade);
printf("População: %d\n", População);
printf("Àrea: %.2f km²\n", Àrea);
printf("PIB: %.2f Bilhões de reais\n", PIB);
printf("Número de Pontos Turísticos: %d\n", Pontos_Turísticos);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
printf("Super Poder: %.2f\n", super_poder);
printf(" \n");
//estou usando o printf(" /n"); para pular uma linha e deixar a exibição mais organizada.
// dados da carta 2

char titulo[20] = "Carta 2";
char estado = 'B';
char código[5] = "B02";
char nome_da_Cidade[20] ="Rio de Janeiro";
int população = 6748000;
float area = 1200.25;
float Pib = 300.50;
int pontos_Turisticos = 30;

// dados da carta 2 em numeros sem abreviação para faz os calculos

float populacao2 = 6748000;
float area2 = 1200.25;
float PIB2 = 300500000000.00;
float Densidade_Populacional2 = populacao2 / area2; 
float PIB_per_Capita2 = PIB2/ populacao2;
float Super_poder = populacao2 + area2 + PIB2 + pontos_Turisticos - Densidade_Populacional2 + PIB_per_Capita2;

// Exibindo os dados da carta 2

printf("Titulo: %s\n", titulo);
printf("Estado: %c\n", estado);
printf("Código: %s\n", código);
printf("Nome da Cidade: %s\n", nome_da_Cidade);
printf("População: %d\n", população);
printf("Àrea: %.2f km²\n", area);
printf("PIB: %.2f Bilhões de reais\n", Pib);
printf("Número de Pontos Turísticos:  %d\n", pontos_Turisticos);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
printf("Super Poder: %.2f\n", Super_poder);
printf(" \n");


/*Comparação entre as carta 1 e carta 2    
para determinar qual e a carta que esta vencendo entre as conparações */

printf("Comparação entre as cidades:\n");
printf(" \n");
printf("População = %s\n", (População > população) ? "Carta 1 tem mais população" : "Carta 2 tem mais população");
printf("Àrea = %s\n", (Àrea > area) ? "Carta 1 tem maior área" : "Carta 2 tem maior área");
printf("PIB = %s\n", (PIB > Pib) ? "Carta 1 tem maior PIB" : "Carta 2 tem maior PIB");
printf("Pontos Turísticos = %s\n", (Pontos_Turísticos > pontos_Turisticos) ? "Carta 1 tem mais pontos turísticos" : "Carta 2 tem mais pontos turísticos");
printf("PIB per Capita = %s\n", (PIB_per_Capita1 > PIB_per_Capita2) ? "Carta 1 tem maior PIB per Capita" : "Carta 2 tem maior PIB per Capita");
printf("Densidade Populacional = %s\n", (Densidade_Populacional1 < Densidade_Populacional2) ? "Carta 1 tem menor densidade populacional" : "Carta 2 tem menor densidade populacional");
printf("Super Poder = %s\n", (super_poder > Super_poder) ? "Carta 1 tem maior super poder" : "Carta 2 tem maior super poder");
printf(" \n");

/* comparação entre as carta 1 e carta 2 usando if else
para determinar qual e a carta que esta vencendo entre as conparações */

printf("comparação dos atributos:\n");
printf(" \n");

if (População > população)
{
    printf("Carta 1 venceu na categoria População\n");
} else { 
    printf("Carta 2 venceu na categoria População\n");
}

if (Àrea > area)
{
    printf("Carta 1 venceu na categoria Área\n");
} else { 
    printf("Carta 2 venceu na categoria Área\n");
}

if (PIB > Pib)
{
    printf("Carta 1 venceu na categoria PIB\n");
} else { 
    printf("Carta 2 venceu na categoria PIB\n");
}

if (Pontos_Turísticos > pontos_Turisticos)
{
    printf("Carta 1 venceu na categoria Pontos Turísticos\n");
} else { 
    printf("Carta 2 venceu na categoria Pontos Turísticos\n");
}

if (Densidade_Populacional1 < Densidade_Populacional2)
{
    printf("Carta 1 venceu na categoria Densidade Populacional\n");
} else { 
    printf("Carta 2 venceu na categoria Densidade Populacional\n");
}

if (PIB_per_Capita1 > PIB_per_Capita2)
{
    printf("Carta 1 venceu na categoria PIB per Capita\n");
} else { 
    printf("Carta 2 venceu na categoria PIB per Capita\n");

}

if (super_poder > Super_poder)
{
    printf("Carta 1 venceu na categoria Super Poder\n");
} else { 
    printf("Carta 2 venceu na categoria Super Poder\n");
}

printf(" \n");


return 0; 

}
