#include <stdio.h>

int main (){
	
    printf("Desafio Super Trunfo: Países \n");

    char Letra1;
    int Codigo1;
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapta1;

    printf("Carta 1\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &Letra1);

    printf("Digite o código da carta: ");
    scanf("%d", &Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / Area1;

    PIBperCapta1 = (float) PIB1 / Populacao1;

    printf("Carta 1 \n");
    printf("Letra da carta: %c \n", Letra1);
    printf("Código da carta: %d \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos Turísticos: %d \n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    printf("PIB per Capta: %.2f \n", PIBperCapta1);

    char Letra2;
    int Codigo2;
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapta2;

    printf("Carta 2\n");

    printf("Digite a letra do estado: ");
    scanf("  %c", &Letra2);

    printf("Digite o código da carta: ");
    scanf("%d", &Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / Area2;

    PIBperCapta2 = (float) PIB2 / Populacao2;

    printf("Carta 2\n");
    printf("Letra da carta: %c \n", Letra2);
    printf("Código da carta: %d \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("PontosTurísticos: %d\n", PontosTuristicos2);
	printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
    printf("PIB per Capta: %.2f \n", PIBperCapta2);
	
    return 0;
}