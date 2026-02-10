#include <stdio.h>
int main (){

char nome[20] = "Carta 1";
char Estado = 'A';
char Código[5] =  "A01";
char Nome_da_Cidade[20]  ="São Paulo";
int População = 12325000;
float Àrea = 1521.11;
float PIB = 699.28;
int Pontos_Turísticos = 50;
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


char titulo[20] = "Carta 2";
char estado = 'B';
char código[5] = "B02";
char nome_da_Cidade[20] ="Rio de Janeiro";
int população = 6748000;
float area = 1200.25;
float Pib = 300.50;
int pontos_Turisticos = 30;
float populacao2 = 6748000;
float area2 = 1200.25;
float PIB2 = 300500000000.00;
float Densidade_Populacional2 = populacao2 / area2; 
float PIB_per_Capita2 = PIB2/ populacao2;
float Super_poder = populacao2 + area2 + PIB2 + pontos_Turisticos - Densidade_Populacional2 + PIB_per_Capita2;


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

printf("Comparação entre as cidades:\n");
printf(" \n");
printf("População = %s\n", (População > população) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Àrea = %s\n", (Àrea > area) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB = %s\n", (PIB > Pib) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Pontos Turísticos = %s\n", (Pontos_Turísticos > pontos_Turisticos) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB per Capita = %s\n", (PIB_per_Capita1 > PIB_per_Capita2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Densidade Populacional = %s\n", (Densidade_Populacional1 < Densidade_Populacional2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Super Poder = %s\n", (super_poder > Super_poder) ? "Carta 1 venceu" : "Carta 2 venceu");
printf(" \n");

return 0;
 



}