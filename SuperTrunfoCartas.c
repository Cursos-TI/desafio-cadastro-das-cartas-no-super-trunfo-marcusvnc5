#include <stdio.h>

int main (){
	
    printf("Desafio Super Trunfo: Países \n");

    char Letra1;
    int Codigo1;
    char Cidade1[20];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapta1;
    float SuperPoder1;
    int escolhaJogador;

    printf("Carta 1\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &Letra1);

    printf("Digite o código da carta: ");
    scanf("%d", &Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade1);
    
    printf("Digite a população: ");
    scanf("%lu", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / Area1;

    PIBperCapta1 = (float) PIB1 / Populacao1;

    SuperPoder1 = (float) Populacao1+Area1+PIB1+PontosTuristicos1+PIBperCapta1+DensidadePopulacional1;

    printf("Carta 1 \n");
    printf("Letra da carta: %c \n", Letra1);
    printf("Código da carta: %d \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos Turísticos: %d \n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    printf("PIB per Capta: %.2f \n", PIBperCapta1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    char Letra2;
    int Codigo2;
    char Cidade2[20];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapta2;
    float SuperPoder2;
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

    printf("Carta 2\n");

    printf("Digite a letra do estado: ");
    scanf("  %c", &Letra2);

    printf("Digite o código da carta: ");
    scanf("%d", &Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade2);

    printf("Digite a população: ");
    scanf("%lu", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / Area2;

    PIBperCapta2 = (float) PIB2 / Populacao2;

    SuperPoder2 = (float) Populacao2+Area2+PIB2+PontosTuristicos2+PIBperCapta2+DensidadePopulacional2;

    printf("Carta 2\n");
    printf("Letra da carta: %c \n", Letra2);
    printf("Código da carta: %d \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("PontosTurísticos: %d\n", PontosTuristicos2);
	printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
    printf("PIB per Capta: %.2f \n", PIBperCapta2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    escolhaJogador = (resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG);

    printf("Comparação de Cartas!\n");
    printf("Escolha um atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capta\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Atributo de 'População' escolhido!\n");
         if (Populacao1 > Populacao2){
            printf("Carta 1: %s venceu com População de %lu\n", Cidade1, Populacao1);
         } else if (Populacao1 < Populacao2){
            printf("Carta 2 %s venceu com População de %lu\n", Cidade1, Populacao2);
         } else {
            printf("Empate em População!\n");
         }
    break;
    case 2:
        printf("Atributo de 'Área' escolhido!\n");
        if (Area1 > Area2){
            printf("A Carta 1 %s com Área de %.2f venceu!\n", Cidade1, Area1);
        } else if (Area1 < Area2){
            printf("Carta 2 %s com Área de %.2f venceu!\n", Cidade2, Area2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    case 3:
        printf("Atributo de 'PIB' escolhido!\n");
        if (PIB1 > PIB2){
            printf("A Carta 1 %s com PIB de %.2f venceu!\n", Cidade1, PIB1);
        } else if (PIB1 < PIB2){
            printf("Carta 2 %s com PIB de %.2f venceu!\n", Cidade2, PIB2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    case 4:
        printf("Atributo de 'Pontos Turísticos' escolhido!\n");
        if (PontosTuristicos1 > PontosTuristicos2){
            printf("A Carta 1 %s com %d Pontos Turísticos venceu!\n", Cidade1, PontosTuristicos1);
        } else if (PontosTuristicos1 < PontosTuristicos2){
            printf("Carta 2 %s com %d Pontos Turísticos venceu!\n", Cidade2, PontosTuristicos2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    case 5:
        printf("Atributo de 'Densidade Populacional' escolhido!\n");
        if (DensidadePopulacional1 < DensidadePopulacional2){
            printf("A Carta 1 %s com Densidade Populacional de %.2f venceu!\n", Cidade1, DensidadePopulacional1);
        } else if (DensidadePopulacional1 > DensidadePopulacional2){
            printf("Carta 2 %s com Densidade Populacional de %.2f venceu!\n", Cidade2, DensidadePopulacional2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    case 6:
        printf("Atributo de 'PIB per Capta' escolhido!\n");
        if (PIBperCapta1 > PIBperCapta2){
            printf("A Carta 1 %s com PIB per Capta de %d venceu!\n", Cidade1, PIBperCapta1);
        } else if (PIBperCapta1 < PIBperCapta2){
            printf("Carta 2 %s com PIB per Capta de %d venceu!\n", Cidade2, PIBperCapta2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    case 7:
        printf("Atributo de 'Super Poder' escolhido!\n");
        if (SuperPoder1 > SuperPoder2){
            printf("A Carta 1 %s com Super Poder de %d venceu!\n", Cidade1, SuperPoder1);
        } else if (SuperPoder1 < SuperPoder2){
            printf("Carta 2 %s com Super Poder de %d venceu!\n", Cidade2, SuperPoder2);
        } else {
            printf("Houve um empate entre as cartas nesse atributo!\n");
        }
    break;
    }

    return 0;
}