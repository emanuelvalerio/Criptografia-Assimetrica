# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <locale.h>
#include "../Guardar_texto.h"
#include "../Menu_Criptografar.h"
# include "../MENU.h"

char Texto [100000];
int tam_texto[100000];
int CHAVE_PUBLICA;
int Tipo_Criptografia;
void Guardar_texto(int valor)
{
    if (valor==1)
    {


        printf("Digite o texto : ");
        gets(Texto);
        printf("\nDigite sua Chave Publica : \n");
        fflush(stdin);
        scanf("%d",&CHAVE_PUBLICA);


   printf("\n _________________________________________________________\n");
   printf("|                                                          |\n");
   printf("|     CRIPTOGRAFIA ASSIMETRICA DE DADOS                    |\n");
   printf("|                                                          |\n");
   printf("|    1...Criptografar em Octal                             |\n");
   printf("|    2...Criptografar em Hexadecimal                       |\n");
   printf("|    3...Criptografar em Decimal                           |\n");
   printf("|__________________________________________________________|\n");

      printf("\n_____________________________________________\n");
        printf("|Escolha como quer criptografar seu Texto :  | \n");
        printf("|____________________________________________|\n");
        fflush(stdin);
        scanf("%d%*c",&Tipo_Criptografia);

        switch (Tipo_Criptografia)
        {
        case 1:
            Criptografia_Octal(Texto,CHAVE_PUBLICA);
            break;
        case 2:
            Criptografia_Hexadecimal(Texto,CHAVE_PUBLICA);
            break;
        case 3 :
            Criptografia_Decimal(Texto,CHAVE_PUBLICA);
            break;
        default:
            printf("Opcao de criptografia Invalida !");
        }
        system("pause");
    }


        system("pause");

    }


