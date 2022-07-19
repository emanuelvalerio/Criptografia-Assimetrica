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
     printf("Digite o endereço onde deseja salvar o arquivo(obs: o arquivo deve ser salvo em .txt)\n\n");
     gets(nome);

     while(strlen(nome)==0) // verifica se o endereço onde o arquivo deve ser salvo foi digitado;
   {
       printf("\n Não foi digitado o endereço onde o arquivo deve ser salvo ! \n\n");
       system("pause");
       system("cls");
       printf("Digite o endereço onde deseja salvar o arquivo criptografado : ");
      gets(nome);

   }

     FILE *arq;
     arq = fopen(nome,"w"); // abertura do arquivo para escrita;
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
        printf("\t\tCRIPTOGRAFANDO...\n\n");
    }
    fclose(arq);
    system("cls");
   if(arq)
   {

   printf("\n\n\tMENSAGEM CRIPTOGRAFADA COM SUCESSO !!!\n\n");

   }
   system("pause");
   system("cls");
    MENU();


}

