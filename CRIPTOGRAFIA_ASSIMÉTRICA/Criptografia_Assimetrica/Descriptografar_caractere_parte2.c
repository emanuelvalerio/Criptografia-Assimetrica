# include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../Descriptografar_Caractere_parte2.h"

 void Descriptografar_Caractere_parte2(char texto[100000])
{
    printf("\n\n\tCOPIE A MENSAGEM EXIBIDA ACIMA NO CAMPO DE TEXTO ABAIXO PARA COMPLETAR A DESCRIPTOGRAFIA !\n");
    gets(texto); // lendo o texto copiado

    while(strlen(texto)==0) // teste para saber se o texto foi copiado
    {
        printf("\n A MENSAGEM NÃO FOI COPIADA ! \n");
        system("pause");
        system("cls");
        printf("\n\n\tCOPIE A MENSAGEM EXIBIDA ACIMA NO CAMPO DE TEXTO ABAIXO PARA COMPLETAR A DESCRIPTOGRAFIA !\n");
        gets(texto);

    }

    int i;
     for(i=0;i<strlen(texto);i++) // pegando os caracteres correspodentes ao do código cifrado;
   {
       if (texto[i]=='-')
       {
           texto[i] = 'A';
       }
       else if (texto[i]=='Z')
        {
            texto[i] ='B';
        }
         else if (texto[i]=='X')
         {
             texto[i] = 'C';
         }
        else  if (texto[i]=='M')
          {
              texto[i] = 'D';
          }
        else   if (texto[i]=='D')
           {
               texto[i] = 'E';
           }
          else  if (texto[i]=='O')
            {
                texto[i]='F';
            }
           else  if (texto[i]=='W')
             {
                texto[i] = 'G';
             }
            else  if (texto[i]=='K')
              {
                  texto[i] = 'H';
              }
            else   if (texto[i]=='.')
               {
                   texto[i] = 'I';
               }
             else   if (texto[i]=='"')
                {
                    texto[i] = 'J';
                }
              else  if (texto[i]=='A')
                {
                    texto[i] = 'K';
                }
              else  if (texto[i]=='T')
                {
                    texto[i] = 'L';
                }
              else  if (texto[i]=='S')
                {
                    texto[i] = 'M';
                }
              else  if (texto[i]=='=')
                {
                    texto[i] = 'N';
                }
              else  if (texto[i]=='Q')
                {
                    texto[i] = 'O';
                }
              else  if (texto[i]=='G')
                {
                    texto[i] = 'P';
                }
              else  if (texto[i]=='\\')
                {
                    texto[i] = 'Q';
                }
              else  if (texto[i]=='@')
                {
                    texto[i] = 'R';
                }
             else   if (texto[i]=='Y')
                {
                    texto[i] = 'S';
                }
             else   if (texto[i]=='J')
                {
                    texto[i] = 'T';
                }
             else   if (texto[i]=='%')
                {
                    texto[i] = 'U';
                }
              else  if (texto[i]=='B')
                {
                    texto[i] = 'V';
                }
             else   if (texto[i]=='H')
                {
                    texto[i] = 'W';
                }
            else if (texto[i]=='ç')
            {
                texto[i] = 'X';
            }
             else   if (texto[i]=='F')
                {
                    texto[i] = 'Y';
                }
             else   if (texto[i]=='#')
                {
                    texto[i] = 'Z';
                }
             else   if (texto[i]=='*')
                {
                    texto[i] = '0';
                }
              else  if (texto[i]=='0')
                {
                    texto[i] = '1';
                }
             else   if (texto[i]=='9')
                {
                    texto[i] = '2';
                }
             else   if (texto[i]==';')
                {
                    texto[i] = '3';
                }
            else    if (texto[i]=='+')
                {
                    texto[i] = '4';
                }
           else     if (texto[i]=='|')
                {
                    texto[i] = '5';
                }
           else     if (texto[i]=='(')
                {
                    texto[i] = '6';
                }
           else     if (texto[i]=='&')
                {
                    texto[i] = '7';
                }
             else   if (texto[i]==')')
                {
                    texto[i] = '8';
                }
            else    if (texto[i]=='1')
                {
                    texto[i] = '9';
                }
            else if(texto[i]=='/')
            {
                texto[i] = '?';
            }
            else if(texto[i]==':')
            {
                texto[i] = '!';
            }

   }
   for(i=8;i>0;i--)
    {
        system("cls");
        printf("Descriptografando...\n\n");
    }
                system("cls");
                printf("\t\t%s\n\n",texto);
    system("pause");
   MENU(); // chamando a funçao MENU
}
