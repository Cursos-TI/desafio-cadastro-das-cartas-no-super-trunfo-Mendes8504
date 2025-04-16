#include <stdio.h>

    int main() {

        //Declarando as variáveis para guardar os valos sobre as cartas
        char estado1[30], estado2[30];
        char codigo1[10], codigo2[10];
        char cidade1[30], cidade2[30];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int turistico1, turistico2;
        float densidadepopulacional1, densidadepopulacional2;
        float pibpercapita1, pibpercapita2;

        //"cabeçalho" do programa
        printf("*** Super Trunfo***\n\n");


        //entrada da primeiro estado
        printf("Digite o 1° Estado:\n");
        scanf("%s", estado1);

        //entrada do codigo que representara a carte 01
        printf("Insira um código para a carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%s", codigo1);
        
        //entrada da cidade escolhida pelo usuário
        printf("Digite o nome da Cidade:\n");
        scanf("%s", cidade1);

        //entrada da população da cidade 
        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao1);

        //entrada da área em Km²
        printf("Digite a área da cidade em quilômetros quadrados:\n");
        scanf("%f", &area1);

        //entrada do PIB da cidade escolhida pelom usuário
        printf("Digite o (PIB) Produto Interno Bruto da cidade: \n");
        scanf("%f", &pib1);

        //entrada da quantidade de pontos turísticos da cidade 
        printf("Digite a quantidade de pontos turísticos na cidade: \n");
        scanf("%d", &turistico1);
        printf("\n");

        //calculo da primeira carta 
        densidadepopulacional1 = (float) populacao1 / area1;

        pibpercapita1 = (float) pib1 / populacao1;


        //saida de dados, o código a seguir irá imprimir todos os dados fornecidos pelo usuário sobre a primeira carta
        printf("Carta 01\n--------------------------------\n");
        printf("Estado: %s \n", estado1);
        printf("Codigo da Carta: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Área (em km²): %f \n", area1);
        printf("PIB: %f \n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turistico1);
        printf("Densidade Populacional: %f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %f reais \n--------------------------------\n\n", pibpercapita1);
    



        //entrada do segundo estado
        printf("Digite o 2° estado: \n");
        scanf("%s", estado2);

        //estrada do código que representará a carta 02
        printf("Insira um código para a carta usando a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%s", codigo2);

        //entrada da segunda cidade
        printf("Digite o nome da Cidade:\n");
        scanf("%s", cidade2);

        //entrada da população da segunda cidade
        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao2);

        //entrada da área em Km² da segunda cidade
        printf("Digite a área da cidade em quilômetros quadrados:\n");
        scanf("%f", &area2);

        //entrada do PIB referente a segunda cidade
        printf("Digite o (PIB) Produto Interno Bruto da cidade: \n");
        scanf("%f", &pib2);

        //Entrada da quantidade dos pontos turisticos
        printf("Digite a quantidade de pontos turísticos na cidade: \n");
        scanf("%d", &turistico2);
        printf("\n");

        //calculo da segunda carta
        densidadepopulacional2 = (float) populacao2 / area2;
        
        pibpercapita2 = (float) pib2 / populacao2;


        //saida de dados, o código a seguir irá imprimir todos os dados fornecidos pelo usuário sobre a segunda cidade
        printf("Carta 02\n--------------------------------\n");
        printf("Estado: %s \n", estado2);
        printf("Codigo da Carta: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área (em km²): %f \n", area2);
        printf("PIB: %f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", turistico2);
        printf("Densidade Populacional: %f hab/km²\n", densidadepopulacional2);
        printf("PIB per Capita: %f reais\n--------------------------------\n", pibpercapita2);

     
    return 0;

}
