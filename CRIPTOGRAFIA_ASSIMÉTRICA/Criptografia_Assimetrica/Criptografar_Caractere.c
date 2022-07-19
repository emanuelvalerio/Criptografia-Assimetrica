# include <stdio.h>
# include <stdlib.h>
#include<string.h>
#include "../Criptografar_Caractere.h"
#include "../Guardar_texto.h"
int tam_texto[100000];
void Criptografar_Caractere(char Texto [100000],int CHAVE_PUBLICA)
{
   system("cls");
  char texto[100000],C;
  FILE *arq;
  int vet_num[100000];
  int chave_pub;
  char crip[100000];
  printf("\n\t ORIENTAÇÃO : SÓ É PERMITIDO USAR CARACTERES DE LETRAS, NUMÉROS E OS SÍMBOLOS DE INTERROGAÇÃO E EXCLAMAÇÃO.\n"
         "\tNO FIM DA MENSAGEM DEVE CONTER UM ESPAÇO EM BRANCO !\n\n");
   printf("DIGITE A MENSAGEM QUE DESEJA CRIPTOGRAFAR : ");
   gets(texto); // lendo a mensagem

   while (strlen(texto)==0) // teste para saber se a mensagem foi digitada
   {
       printf("\nA MENSAGEM NÃO FOI DIGITADA !\n");
       system("pause");
       system("cls");
       printf("\n\t ORIENTAÇÃO : SÓ É PERMITIDO USAR CARACTERES DE LETRAS, NUMÉROS E OS SÍMBOLOS DE INTERROGAÇÃO E EXCLAMAÇÃO.\n"
         "\tNO FIM DA MENSAGEM DEVE CONTER UM ESPAÇO EM BRANCO !\n\n");
   printf("DIGITE A MENSAGEM QUE DESEJA CRIPTOGRAFAR : ");
   gets(texto);
   }

   fflush(stdin);
   printf("\n\nDigite a sua chave pública : ");
   scanf("%d",&chave_pub); // leitura da chave pública
   fflush(stdin);
   int i;
   for(i=0;i<strlen(texto);i++)
   {
           texto[i] = toupper(texto[i]); // converte caracteres minúsculos para maiúsculos

   }

   for(i=0;i<strlen(texto);i++) // substituiçao do alfabeto usual por outros caracteres;
   {
       if (texto[i]=='A')
       {
           texto[i] = '-';
       }
      else  if (texto[i]=='B')
        {
            texto[i] ='Z';
        }
       else  if (texto[i]=='C')
         {
             texto[i] = 'X';
         }
       else   if (texto[i]=='D')
          {
              texto[i] = 'M';
          }
        else   if (texto[i]=='E')
           {
               texto[i] = 'D';
           }
         else   if (texto[i]=='F')
            {
                texto[i]='O';
            }
         else    if (texto[i]=='G')
             {
                texto[i] = 'W';
             }
          else    if (texto[i]=='H')
              {
                  texto[i] = 'K';
              }
            else   if (texto[i]=='I')
               {
                   texto[i] = '.';
               }
            else    if (texto[i]=='J')
                {
                    texto[i] = '"';
                }
             else   if (texto[i]=='K')
                {
                    texto[i] = 'A';
                }
             else   if (texto[i]=='L')
                {
                    texto[i] = 'T';
                }
             else   if (texto[i]=='M')
                {
                    texto[i] = 'S';
                }
             else   if (texto[i]=='N')
                {
                    texto[i] = '=';
                }
             else   if (texto[i]=='O')
                {
                    texto[i] = 'Q';
                }
             else   if (texto[i]=='P')
                {
                    texto[i] = 'G';
                }
             else   if (texto[i]=='Q')
                {
                    texto[i] = '\\';
                }
             else   if (texto[i]=='R')
                {
                    texto[i] = '@';
                }
             else   if (texto[i]=='S')
                {
                    texto[i] = 'Y';
                }
            else    if (texto[i]=='T')
                {
                    texto[i] = 'J';
                }
             else   if (texto[i]=='U')
                {
                    texto[i] = '%';
                }
            else    if (texto[i]=='V')
                {
                    texto[i] = 'B';
                }
          else      if (texto[i]=='W')
                {
                    texto[i] = 'H';
                }
         else if (texto[i]=='X')
         {
             texto[i]='ç';
         }
             else   if (texto[i]=='Y')
                {
                    texto[i] = 'F';
                }
            else    if (texto[i]=='Z')
                {
                    texto[i] = '#';
                }
            else    if (texto[i]=='0')
                {
                    texto[i] = '*';
                }
            else    if (texto[i]=='1')
                {
                    texto[i] = '0';
                }
             else   if (texto[i]=='2')
                {
                    texto[i] = '9';
                }
             else   if (texto[i]=='3')
                {
                    texto[i] = ';';
                }
             else   if (texto[i]=='4')
                {
                    texto[i] = '+';
                }
            else    if (texto[i]=='5')
                {
                    texto[i] = '|';
                }
            else    if (texto[i]=='6')
                {
                    texto[i] = '(';
                }
             else   if (texto[i]=='7')
                {
                    texto[i] = '&';
                }
             else   if (texto[i]=='8')
                {
                    texto[i] = ')';
                }
             else   if (texto[i]=='9')
                {
                    texto[i] = '1';
                }
            else if (texto[i]=='?')
            {
                texto[i]='/';
            }
            else if(texto[i]=='!')
            {
                texto[i]=':';
            }



   }
   printf("\n\n");
   for (i=0;i<strlen(texto);i++) // pegando o valor inteiro de cada caractere;
   {
       vet_num[i] = texto[i];

   }
   char local[100];
   printf("Digite o endereço onde deseja salvar o arquivo criptografado : ");
   gets(local);
   while(strlen(local)==0) // verifica se o endereço onde o arquivo deve ser salvo foi digitado;
   {
       printf("\n Não foi digitado o endereço onde o arquivo deve ser salvo ! \n\n");
       system("pause");
       system("cls");
       printf("Digite o endereço onde deseja salvar o arquivo criptografado : ");
      gets(local);

   }
   arq = fopen(local,"w"); // Abertura para escrita no arquivo;

    for (i=0;i<strlen(texto);i++) // processo de criptografia do código;
   {
       vet_num[i] *= chave_pub;


   }

   for (i=0;i<strlen(texto);i++)
   {
      fprintf(arq,"%X ",vet_num[i]); // imprimindo no arquivo, o valor criptografado em hexadecimal;
   }
   for(i=8;i>0;i--)
    {
        system("cls");
        Sleep(i);
        printf("\t\tCRIPTOGRAFANDO...\n\n");
    }
    system("cls");
    printf("\n\n\t MENSAGEM CRIPTOGRAFADA COM SUCESSO !!!\n\n");
    system("pause");
    system("cls");

   fflush(arq);
   fclose(arq);
   MENU();
   return 0;

}

