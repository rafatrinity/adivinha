//autor: Rafael Trindade
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <math.h>
int n[10], i;

int mag(int x, int y){
	int a=0,b=0;
	if (y==0)
	{
		return pow(2,x);
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
		a=pow(2,(x+y));
		return (a+b);
	}
}


int main ()
{
	inicio:
	setlocale(LC_ALL,"portuguese");

	int j, k=0, l=0, m=0;
	char par,um,ini;
	for (i = 0; i < 10; i++)
	{
		n[i]=0;
	}
	printf("\tPENSE EM UM NÚMERO");
	for (i = 0; i < 4; ++i)
	{
		printf(".");
		usleep(800000);
	}
	system("cls");

	printf("\tSERÁ QUE EU CONSIGO ADIVINHAR EM QUAL NÚMERO VC ESTÁ PENSANDO?\n");
	sleep(3);
	pergunta:
	system("cls");
	printf("ESSE NÚMERO É PAR?\nS = SIM\nN = NÃO\n");
	scanf("%c",&par);
	par=toupper(par);

	switch(par){
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
		}k++;
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
		}l++;
		n[m]=2;
		m++;
		break;

		default:
		printf("\tERRO!\n\tDIGITE APENAS S OU N");
		goto pergunta;
	}

	pergunta2:
	system("cls");
	printf("O RESULTADO DESSA DIVISÃO FOI 1?\nS = SIM\nN = NÃO\n");
	fflush(stdin);
	scanf("%c",&um);
	um=toupper(um);

	switch(um){
		case 'S':
		system("cls");
		printf("\tO SEU NÚMERO É");
		for (i = 0; i < 3; ++i)
		{
			printf(".");
			usleep(800000);
		}
		printf(" %d\n",mag(k,l));
		system("pause");
		pergunta3:
		printf("\n\n\tDESEJA REFAZER O TESTE?\nS = SIM\nN = NÃO\n");
		fflush(stdin);
		scanf("%c",&ini);
		ini = toupper(ini);
		if (ini=='S')
		{
			system("cls");
			goto inicio;
		}
		else if (ini=='N')
		{
			exit(0);
		}
		else{
			printf("\tERRO!\n\tDIGITE APENAS S OU N");
			system("cls");
			goto pergunta3;
		}
		break;

		case 'N':
		goto pergunta;
		break;

		default:
		printf("\tERRO!\n\tDIGITE APENAS S OU N");
		goto pergunta2;

	}

	return 0;
}


