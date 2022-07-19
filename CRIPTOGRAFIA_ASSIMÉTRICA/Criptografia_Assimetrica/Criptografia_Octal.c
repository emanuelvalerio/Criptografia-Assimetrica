# include <stdio.h>
# include <stdlib.h>
#include "../Guardar_texto.h"
#include "../Criptografia_Octal.h"
int tam_texto[100000];
void Criptografia_Octal(char Texto [100000],int CHAVE_PUBLICA)
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
    for (i=0;i<sizeof(Texto_Dec);i++) // criptografando a mensagem, pela multiplicaçao dos valores dos caracteres pela chave;
    {
        Texto_Dec[i] *= CHAVE_PUBLICA;
    }
     printf("Digite o endereço onde deseja salvar o arquivo(obs: o arquivo deve ser salvo em .txt) \n");
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
     arq = fopen(nome,"w");
     if (arq==NULL)
     {
         printf("ERRO AO ABRIR ARQUIVO !");

     } else {
     for (i=0;i<strlen(Texto);i++) // Gravando a mensagem criptografada no arquivo
    {
        fprintf(arq,"%o ",Texto_Dec[i]);
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

   printf("\n\n\t\tMENSAGEM CRIPTOGRAFADA COM SUCESSO !!! \n\n\t \n\n");

   }
system("pause");
system("cls");
    MENU();


}



