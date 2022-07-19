# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
#include "../Descriptografar.h"
# include "../MENU.h"

void Descriptografar()
{
    system("cls");
    setlocale(LC_ALL,"ptb");
    int opcao;
    printf("\n __________________________________________________________________\n");
   printf("|                                                                     |\n");
   printf("|     CRIPTOGRAFIA ASSIMÉTRICA DE DADOS                               |\n");
   printf("|      DESCRIPTOGRAFAR ARQUIVO DE TEXTO                               |\n");
   printf("|                                                                     |\n");
   printf("|    1... DESCRIPTOGRAFAR ARQUIVO EM DECIMAL                          |\n");
   printf("|    2... DESCRIPTOGRAFAR ARQUIVO (CIFRA DE SUBSTITUIÇÃO ALFABÉTICA)  |\n");
   printf("|    3... DESCRIPTOGRAFAR ARQUIVO OCTAL                               |\n");
   printf("|    4... DESCRIPTOGRAFAR ARQUIVO HEXADECIMAL                         |\n");
   printf("|    5... VOLTAR AO MENU ANTERIOR                                     |\n");
   printf("|____________________________________________________________________ |\n");

    printf("\n________________________________________________________________________\n");
    printf("\n|Digite o número correspodente ao tipo de descriptografia desejada     |\n");
    printf("|________________________________________________________________________|\n");
    scanf("%d",&opcao);
    switch(opcao)
    {

    case 1:
        Descriptografar_Decimal();
        break;
    case 2:
        Descriptografar_Caractere_parte1();
        break;
    case 3:
        Descriptografar_Octal();
        break;
    case 4:
        Descriptografar_Hexadecimal();
        break;
    case 5:
        MENU();
        break;
    default:
        printf("Opçao nao encontrada !!!");
    }
}
