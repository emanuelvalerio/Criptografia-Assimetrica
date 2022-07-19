# include <stdio.h>
# include <stdlib.h>
#include<string.h>

#include "../Guardar_texto.h"
#include "../Criptografia_Hexadecimal.h"

int tam_texto[100000];
void Criptografia_Hexadecimal(char Texto [100000],int CHAVE_PUBLICA)
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
    for (i=0;i<sizeof(Texto_Dec);i++) // criptografando os valores de cada caracteres multiplicando-os pelo valor da chave;
    {
        Texto_Dec[i] *= CHAVE_PUBLICA;
    }
     printf("Digite o endere�o onde deseja salvar o arquivo(obs: o arquivo deve ser salvo em .txt)\n\n");
     gets(nome);

     while(strlen(nome)==0) // verifica se o endere�o onde o arquivo deve ser salvo foi digitado;
   {
       printf("\n N�o foi digitado o endere�o onde o arquivo deve ser salvo ! \n\n");
       system("pause");
       system("cls");
       printf("Digite o endereco onde deseja salvar o arquivo criptografado : ");
      gets(nome);

   }

     FILE *arq;
     arq = fopen(nome,"w"); // abertura do arquivo para escrita;
     if (arq==NULL) // verificando se o arquivo existe
     {
         printf("ERRO AO ABRIR ARQUIVO !");

     } else {
     for (i=0;i<strlen(Texto);i++) // Gravando a mensagem criptografada no arquivo
    {
        fprintf(arq,"%X ",Texto_Dec[i]);
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
