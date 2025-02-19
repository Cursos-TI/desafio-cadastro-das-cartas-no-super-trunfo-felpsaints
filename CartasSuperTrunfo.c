#include <stdio.h>

int main() {

    //Declarando as variáveis da Carta 1
    char codigo1[4]; //o codigo se torna uma string de 4 caracteres
    char estado1; 
    char cidade1[50]; //o nome da cidade se torna uma string de 50 caracteres
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    
    //Declarando as variáveis da Carta 2

    char codigo2[4];
    char estado2;
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;


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


    //Exibindo as cartas com os dados que foram informados acima.

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);    

}