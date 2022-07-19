# include <stdio.h>
# include <stdlib.h>
#include "../Menu_Criptografar.h"
#include "../Guardar_texto.h"


void Menu_Criptografar()
{
    while (1) {
    int opcao;
    system("cls");
    printf("\n\t CRIPTOGRAFIA ASSIMÉTRICA TEXTO\n\n");
    printf("\n\t ORIENTAÇÃO : O ÚLTIMO DÍGITO DA FRASE DEVE SER UM ESPAÇO !\n\n");
    printf("\n\n1) Digitar Texto ");
    printf("\n\n2) Retornar ao menu anterior");
    printf("\n\n Digite o numero referente a opcao desejada\n");
    scanf("%d",&opcao);
    setbuf(stdin,NULL);

    switch(opcao)
    {
    case 1:
        system("cls");
        Guardar_texto(1);
        break;
    case 2:
        MENU();
        break;
    default:
        printf("A opcao desejada nao existe !");
    }
    }
}
