# include <stdio.h>
# include <string.h>
#include"../Criptografia_Decimal.h"
#include<windows.h>
void Criptografia_Decimal (char Texto [100000],int CHAVE_PUBLICA)
{
    int i;
    int Texto_Dec[100000];
    int Tam_chave;
    Tam_chave=sizeof(CHAVE_PUBLICA);
    for (i=0;i<strlen(Texto);i++) // pegando os valores da mensagem correspodentes na tabela ASCII
    {
        Texto_Dec[i] = Texto[i];
    }
    char nome[80];
    for (i=0;i<sizeof(Texto_Dec);i++)
    {
        Texto_Dec[i] *= CHAVE_PUBLICA;
    }
     printf("Digite o endereço onde deseja salvar o arquivo(obs: o arquivo deve ser salvo em .txt)");
     gets(nome);
     FILE *arq;
     arq = fopen(nome,"w");
     if (arq==NULL)
     {
         printf("ERRO AO ABRIR ARQUIVO !");

     } else {
     for (i=0;i<strlen(Texto);i++) // Gravando a mensagem criptografada no arquivo
    {
        fprintf(arq,"%d ",Texto_Dec[i]);
    }
     }

    for(i=8;i>0;i--)
    {
        system("cls");
        Sleep(i);
        printf("Criptografando...\n\n");
    }

   if(arq)
   {

   printf("MENSAGEM CRIPTOGRAFADA COM SUCESSO !!! ACESSE O ENDEREÇO \n\n");

   }

    exit(0);


}

