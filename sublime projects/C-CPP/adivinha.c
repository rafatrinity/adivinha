#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

int n[10];

int descobre(int par, int impar){
	int a=0, b=0, i;
	if (impar==0)
	{
		return pow(2,par);
	}
	else{
		for (i = 0; i < 10; i++)
		{
			if (n[i]==2)
			{
				//impar
				b+=pow(2,i);
			}
		}
		
		a=pow(2,(par+impar));
		
		return (a+b);
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	inicio:	
	int j, i, par=0, impar=0, m=0;
	char opcao;
	
	printf("\n\t:::::.   :::::::  :::   ::  .:::::  :::::::\n\t::   ::  ::       ::::  ::  ::      ::\n\t::   ::  :::::::  :: :: ::  .:::::  :::::::\n\t:::::.   ::       ::  ::::      ::  ::\n\t::       :::::::  ::   :::  :::::.  :::::::\n\t::\n");
	printf("\n\t        :::::::  :::       :::\n\t        ::       ::::     ::::\n\t        :::::::  :: ::   :: ::\n\t        ::       ::  :: ::  ::\n\t        :::::::  ::   :::   ::\n");
	printf("\n\t::     ::  :::       :::  	:::   ::  O\n\t::     ::  ::::     ::::  	::::  :: ---\n\t::     ::  :: ::   :: ::  	:: :: ::\n\t::     ::  ::  :: ::  ::  	::  ::::\n\t*:::::::*  ::   :::   ::  	::   :::\n");
	
	system("pause");
	system("cls");

	printf("\tSERÁ QUE EU CONSIGO ADIVINHAR EM QUAL NÚMERO VC ESTÁ PENSANDO?\n");
	sleep(2);
	system("cls");
	
	pergunta:
	printf("ESSE NÚMERO É PAR?\nS = SIM\nN = NÃO\n");
	fflush(stdin);
	opcao=getch();
	opcao=toupper(opcao);
	
	switch(opcao){
		case 'S':

		for (j = 0; j < 3; ++j)
		{
			system("cls");
			printf("\tDIVIDA ESSE NÚMERO POR 2\n");
			for (i = 0; i < 7; ++i)
			{
				printf("   * ");
				usleep(200000);
			}
		}par++;  // k
		n[m]=1;
		m++;
		break;

		case 'N':
		for (j = 0; j < 3; ++j)
		{
			system("cls");
			printf("\tSUBTRAIA 1 E DIVIDA ESSE NÚMERO POR 2\n");
			for (i = 0; i < 7; ++i)
			{
				printf("   * ");
				usleep(200000);
			}
		}impar++; // l
		n[m]=2;
		m++;
		break;

		default:
		printf("\tERRO!\n\tDIGITE APENAS S OU N");
		sleep(3);
		system("cls");
		goto pergunta;
	}
	
	pergunta2:
	system("cls");
	printf("O RESULTADO DESSA DIVISÃO FOI 1?\nS = SIM\nN = NÃO\n");
	fflush(stdin);
	opcao=getch();
	opcao=toupper(opcao);
	
	
	switch(opcao){
		case 'S':
			
		system("cls");
		printf("\tO SEU NÚMERO É");
		for (i = 0; i < 3; ++i)
		{
			printf(". ");
			usleep(800000);
		}
		printf(" %d\n",descobre(par,impar));
		system("pause");
		
		
		pergunta3:
		printf("\n\n\tDESEJA REFAZER O TESTE?\nS = SIM\nN = NÃO\n");
		fflush(stdin);
		opcao = getch();
		opcao = toupper(opcao);
		if (opcao=='S')
		{
			system("cls");
			goto inicio;
		}
		else if (opcao=='N')
		{
			exit(0);
		}
		else{
			printf("\tERRO!\n\tDIGITE APENAS S OU N");
			sleep(3);
			system("cls");
			goto pergunta3;
		}
		break;
		

		case 'N':
		goto pergunta;
		break;

		default:
		printf("\tERRO!\n\tDIGITE APENAS S OU N");
		sleep(3);
		system("cls");
		goto pergunta2;

	}
	
	
	
	
	
	
	
}
