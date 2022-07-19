# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
#include<windows.h>



void MENU()
{
    setlocale(LC_ALL,"ptb");
    int opcao;
    system("cls");
    while (1)
    {
   printf("\n _______________________________________________________\n");
   printf("|                                                         |\n");
   printf("|     CRIPTOGRAFIA ASSIMETRICA DE DADOS                   |\n");
   printf("|                                                         |\n");
   printf("|    1..........GERAR CHAVE PÚBLICA                       |\n");
   printf("|    2......... CRIPTOGRAFAR TEXTO(SISTEMAS DE NUMERAÇÃO) |\n");
   printf("|    3......... CRIPTOGRAFIA (SUBSTITUIÇAO ALFABÉTICA)    |\n");
   printf("|    4......... DESCRIPTOGRAFAR ARQUIVO DE TEXTO          |\n");
   printf("|    5......... SABER MAIS                                |\n");
   printf("|    6......... SAIR                                      |\n");
   printf("|_________________________________________________________|\n");

      printf("\n___________________________________________\n");
        printf("|DIGITE O NÚMERO DA OPÇAO DESEJADA !      | \n");
        printf("|_________________________________________|\n");
        scanf("%d%*c",&opcao);
        setbuf(stdin,NULL);

        switch(opcao)
        {
        case 1:
            system("cls");
            Gerar_Chave();
            break;
        case 2 :
            system("cls");
            Menu_Criptografar();

            break;
        case 3:
            Criptografar_Caractere();
            break;
        case 4 :
            Descriptografar();
            break;
        case 5:
            Saber_mais();
            break;
        case 6:
            for (int t=9;t>0;t--)
            {
                system("cls");
                Sleep(t);
             printf("\t\tENCERRANDO em %d...\n\n",t);
            }
            system("cls");
            exit(0);

        default:
            system("cls");
            printf("A opcao digitada nao existe...");
        }
    }
}
