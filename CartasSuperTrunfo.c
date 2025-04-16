#include <stdio.h>

    int main() {

        char estado1[30], estado2[30];
        char codigo1[10], codigo2[10];
        char cidade1[30], cidade2[30];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int turistico1, turistico2;


        printf("Digite o estado: \n");
        scanf("%s", estado1);

        printf("Insira um código para a carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%s", codigo1);

        printf("Digite o nome da Cidade:\n");
        scanf("%s", cidade1);

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade em quilômetros quadrados:\n");
        scanf("%f", &area1);

        printf("Digite o (PIB) Produto Interno Bruto da cidade: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos na cidade: \n");
        scanf("%d", &turistico1);


        printf("Carta 02\n--------------------------\n");
        printf("Estado: %s \n", estado1);
        printf("Codigo da Carta: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Área (em km²): %f \n", area1);
        printf("PIB: %f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n--------------------------------\n", turistico1);
        printf("\n");


        printf("Digite o estado: \n");
        scanf("%s", estado2);

        printf("Insira um código para a carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%s", codigo2);

        printf("Digite o nome da Cidade:\n");
        scanf("%s", cidade2);

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade em quilômetros quadrados:\n");
        scanf("%f", &area2);

        printf("Digite o (PIB) Produto Interno Bruto da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turísticos na cidade: \n");
        scanf("%d", &turistico2);


        printf("Carta 01\n--------------------------\n");
        printf("Estado: %s \n", estado2);
        printf("Codigo da Carta: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área (em km²): %f \n", area2);
        printf("PIB: %f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n--------------------------------\n", turistico2);



    
    
    
    return 0;



    /*
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50*/
}
