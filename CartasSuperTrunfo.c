#include <stdio.h>
#include <string.h>

int main (){
    char estado1;
    char codigo1[10];
    char cidade1[30];
    int populacao1;
    int turistico1;
    float area1;
    float pib1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): \n");
    scanf("%c", &estado1);
     getchar();

    printf("Codigo: \n");
    scanf("%s", codigo1);
     getchar();

    printf("Cidade: \n");
    scanf("%s", &cidade1);
     getchar();

    printf("População: \n");
    scanf("%d", &populacao1);
     getchar();

    printf("Pontos Turisticos: \n");
    scanf("%d", &turistico1);
     getchar();

    printf("Área: \n");
    scanf("%f", &area1);
     getchar();

    printf("Pib: \n");
    scanf("%f", &pib1);
     getchar();

//FINAL 
    printf ("\n=== Carta 1 Cadastrada ===\n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %s\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("Populacao: %d\n", populacao1);
    printf ("Area: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões\n", pib1);
    printf ("Pontos Turisticos: %d\n", turistico1);

    
    return 0;
} 