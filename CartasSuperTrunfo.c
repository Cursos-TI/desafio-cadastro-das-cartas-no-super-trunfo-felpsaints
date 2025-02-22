#include <stdio.h>

int main() {

    //Declarando as variáveis das cartas, resolvi deixar tudo junto para facilitar a leitura.

    char codigo1[4], codigo2[4], estado1[3], estado2[3], cidade1[50], cidade2[50]; 
    int turismo1, turismo2, populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;


    //Solicitando dados ao usuário das cartas
    printf("Iremos iniciar com a carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf("%2s", &estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o turismo: ");
    scanf("%d", &turismo1);

    printf("\nIremos iniciar com a carta 2\n");

    printf("Digite o estado (A-H): ");
    scanf("%2s", &estado2);
    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o turismo: ");
    scanf("%d", &turismo2);


    //Calculo dos dados solicitados.
    densidade1 = (float)populacao1 / area1; //Converti para float pra divisao ser em float msm eles sendo int.
    densidade2 = (float)populacao2 / area2; // 
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //Calculo o superpoder
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibpercapita2 + (1 / densidade2);

    printf("\nComparação de cartas (Atributo: População):\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    };
    
    // Exibe os dados de cada carta
    printf("Carta 1 - %s (%2s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%2s): %d habitantes\n", cidade2, estado2, populacao2);

    
  
    //Exibindo as cartas com os dados que foram informados acima.
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", pibpercapita1);
    printf("Superpoder: %.2f\n", superpoder1);


    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);  
    printf("Densidade Populacional: %f hab/km²\n", densidade2);  
    printf("PIB per capita: %f reais\n", pibpercapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Utilizei um operador ternário para verificar a carta vencedora.
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: %s venceu\n", populacao1 > populacao2 ? "Carta 1" : "Carta 2");
    printf("Area: %s venceu\n", area1 > area2 ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", pib1 > pib2 ? "Carta 1" : "Carta 2");
    printf("Pontos Turisticos: %s venceu\n", turismo1 > turismo2 ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", densidade1 < densidade2 ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu\n", pibpercapita1 > pibpercapita2 ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", superpoder1 > superpoder2 ? "Carta 1" : "Carta 2");











}