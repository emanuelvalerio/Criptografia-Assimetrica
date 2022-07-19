# include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<locale.h>
#include"../Descriptografar_Hexadecimal.h"

void Descriptografar_Hexadecimal()
{
    setlocale(LC_ALL,"ptb");
    system("cls");
    char local[100];
    printf("\tDESCRIPTOGRAFAR ARQUIVO DE TEXTO EM HEXADECIMAL \n");
    printf("DIGITE O ENDEREÇO ONDE SEU ARQUIVO(.txt) ESTÁ ARMAZENADO : ");
      fflush(stdin);
    gets(local); // leitura do local onde o arquivo está armazenado

    while(strlen(local)==0) // verifica se o endereço onde o arquivo foi salvo foi digitado;
   {
       printf("\n Não foi digitado o endereço onde o arquivo está salvo ! \n\n");
       system("pause");
       system("cls");
       printf("\tDESCRIPTOGRAFAR ARQUIVO DE TEXTO EM HEXADECIMAL \n");
       printf("DIGITE O ENDEREÇO ONDE SEU ARQUIVO(.txt) ESTÁ ARMAZENADO : ");
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
           Descriptografar(); // chamando a funçao Descriptografar;
       } else
       {
    printf("DIGITE A SUA CHAVE PRIVADA : ");
    gets(chave_priv); // leitura da chave privada;

    while(strlen(chave_priv)==0) // teste para saber se  CHAVE foi digitada;
    {
        printf("\n A CHAVE PRIVADA NÃO FOI DIGITADA \n");
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

    system("pause");
    for (int i=0;i<sizeof(chave_priv);i++)
    {
        Soma_Pub+=chave_priv_num[i]; // Soma dos Valores da Chave privada;
    }

    srand(Soma_Pub); // Gerando a chave publica com a soma dos valores da privada (numero aleatório);
    int Chave_pub = 0;
    Chave_pub=rand();

    char texto_criptografado[100000];
    int cont_chave=0,pos_texto=0;
    int valor[100000];
    int  tam_chave = 0 ;
     tam_chave = sizeof(Chave_pub);
    i=0;
      int t=0,m=0;

    while(!feof(arquivo))
    {

        fscanf(arquivo,"%X",valor);

  int receb_chave[100000];
           fflush(stdin);


         receb_chave[i] = valor[i]/Chave_pub; // processo reverso da criptografia

         texto_criptografado[i] = (char)receb_chave[i]; // array de string recebendo o valor em caracteres do códiogo decifrado


       printf("%s",texto_criptografado);

    }
getchar();
  system("cls");
  MENU(); // chamando a funçao MENU
}
}
