# include <stdio.h>
# include <stdlib.h>
#include<windows.h>
# include <locale.h>
# include <time.h>
#include "../MENU.h"
#include "../Menu_Criptografar.h"
#include "../Criptografar.h"
#include "../Descriptografar.h"
#include "../Guardar_texto.h"
#include"../Gerar_Chave.h"

void Gerar_Chave()
{
    char Chave_privada[6];
    unsigned long long int Chave_privada_num[6],Soma_Pub=0,soma_total=0;
    printf("\n\t\t\t\t GERAR CHAVE P�BLICA ");
    printf("\n\tATEN��O : SUA CHAVE PRIVADA DEVE CONTER NO M�XIMO 5 CARACTERES !\n\n");
    printf("\n\n Digite sua chave privada para gerar a chave sua p�blica :");
    gets(Chave_privada);
    while(strlen(Chave_privada)==0) // teste para saber se a chave privada foi ou nao digitada
    {
        printf("\nA CHAVE N�O FOI DIGITADA ! \n");
        system("pause");
        system("cls");
        printf("\n\tATEN��O : SUA CHAVE PRIVADA DEVE CONTER NO M�XIMO 5 CARACTERES !\n\n");
        printf("\n\n Digite sua chave privada para gerar a chave sua p�blica :");
        gets(Chave_privada);
    }

    while (strlen(Chave_privada)>5) // verificando se foram digitados no m�ximo 5 caracteres;
    {
        printf("\n\t SUA CHAVE PRIVADA S� PODE CONTER NO M�XIMO 5 CARACTERES !\n\n");
        system("pause");
        system("cls");
        printf("\n\tATEN��O : SUA CHAVE PRIVADA DEVE CONTER NO M�XIMO 5 CARACTERES !\n\n");
        printf("\n\n Digite sua chave privada para gerar a chave sua p�blica :");
        gets(Chave_privada);
    }

    for (int i=0;i<=strlen(Chave_privada);i++)
    {
        Chave_privada_num[i] = Chave_privada[i]; // Chave privada num recebe o valor dos caracteres na tabelas ASCII;
    }
    system("pause");
     for (int i=0;i<strlen(Chave_privada);i++)
    {
        Soma_Pub+=Chave_privada_num[i]; // Soma dos Valores da Chave privada;
    }
    srand(Soma_Pub); // Gerando a chave publica com a soma dos valores da chave  privada (numero aleat�rio);
    unsigned long long int Chave_pub= rand();// Gerando o valor numerico da chave publica;

    for (int t=9;t>0;t--)
    {
      system("cls");
      Sleep(t);
    printf(" \t GERANDO CHAVE P�BLICA EM %d... :  \n",t);
    }
    system("cls");
    system("pause");
    printf("\n\n CHAVE P�BLICA : %d\n\n",Chave_pub);
    system("pause");
   system("cls");
   MENU();
}
