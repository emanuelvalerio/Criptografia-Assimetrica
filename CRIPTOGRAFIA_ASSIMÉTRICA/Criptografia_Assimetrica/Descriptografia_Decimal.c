# include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<locale.h>
#include"../Criptografia_Decimal.h"
void Descriptografar_Decimal ()
{
    setlocale(LC_ALL,"ptb");
    system("cls");
    char local[100];
    printf("\tDESCRIPTOGRAFAR ARQUIVO DE TEXTO EM DECIMAL \n");
    printf("DIGITE O ENDERE�O ONDE SEU ARQUIVO(.txt) EST� ARMAZENADO : ");
      fflush(stdin);
    gets(local);

    while(strlen(local)==0) // verifica se o endere�o onde o arquivo foi salvo foi digitado;
   {
       printf("\n N�o foi digitado o endere�o onde o arquivo est� salvo ! \n\n");
       system("pause");
       system("cls");
       printf("\tDESCRIPTOGRAFAR ARQUIVO DE TEXTO EM DECIMAL \n");
       printf("DIGITE O ENDERE�O ONDE SEU ARQUIVO(.txt) EST� ARMAZENADO : ");
       fflush(stdin);
       gets(local);

   }

    fflush(stdin);

    char chave_priv[6];
    int chave_priv_num[6];
    FILE *arquivo;
    arquivo = fopen(local,"r");

       if (arquivo==NULL)   // verificando se o arquivo existe;
       {
           printf("\nERRO AO LER ARQUIVO !!!\n");
           getch();
           system("cls");
           Descriptografar(); // chamando a fun�ao Descriptografar;
       } else
       {
    printf("\n\nDIGITE A SUA CHAVE PRIVADA : ");
    gets(chave_priv); // leitura da chave privada;

    while(strlen(chave_priv)==0) // teste para saber se  CHAVE foi digitada;
    {
        printf("\n A CHAVE PRIVADA N�O FOI DIGITADA \n");
        system("pause");
        system("cls");
        printf("DIGITE A SUA CHAVE PRIVADA : ");
        gets(chave_priv);
    }

    int i,Soma_Pub=0;
    for (i=0;i<sizeof(chave_priv);i++)
    {
        chave_priv_num[i] = chave_priv[i];

    }

    printf("\n");
    for (int i=0;i<sizeof(chave_priv);i++)
    {
        Soma_Pub+=chave_priv_num[i]; // Soma dos Valores da Chave privada;
    }

    srand(Soma_Pub); // Gerando a chave publica com a soma dos valores da privada (numero aleat�rio);
    int Chave_pub = 0;
    Chave_pub=rand();

    char texto_criptografado[100000];
    int cont_chave=0,pos_texto=0;
    int valor[100000];
    int  tam_chave = 0 ;
     tam_chave = sizeof(Chave_pub);
    i=0;


    while(!feof(arquivo))
    {

        fscanf(arquivo,"%d",valor); // lendo valores armazenados no arquivo ;

  int receb_chave[100000];
           fflush(stdin);


         receb_chave[i] = valor[i]/Chave_pub; // processo reverso da criptografia

         texto_criptografado[i] = (char)receb_chave[i]; // array de string recebendo o valor em caracteres do c�diogo decifrado


       printf("%s",texto_criptografado);

    }
    fclose(arquivo);


    getchar();
    system("cls");
    MENU(); // CHAMANDO O MENU PRINCIPAL;

}
}



