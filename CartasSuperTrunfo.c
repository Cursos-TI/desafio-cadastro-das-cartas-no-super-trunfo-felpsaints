#include <stdio.h>

int main() {

    //Declarando as variáveis das cartas, resolvi deixar tudo junto para facilitar a leitura.

    char codigo1[4], codigo2[4], estado1, estado2, cidade1[50], cidade2[50]; 
    int populacao1, populacao2, turismo1, turismo2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;


    //Solicitando dados ao usuário das cartas
    printf("Iremos iniciar com a carta 1\n");

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);
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

    printf("Iremos iniciar com a carta 2\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
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


    //Calculando os dados solicitados.
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;


    //Exibindo as cartas com os dados que foram informados acima.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);


    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);  
    printf("Densidade Populacional: %f hab/km²\n", densidade2);  
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
}