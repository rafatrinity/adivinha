#include "sis.h"
#include "adivinha.h"
int main(int argc, char const *argv[])
{
	apresenta();
	char ehpar, ehum, par=0, impar=0, tot=0, refazer;
	int posicao[14], n=0;
	for (int i = 0; i < 14; i++)
		posicao[i]=0;
	int* pv = posicao;
	cab();
	printf("\t\nPENSE EM UM NÚMERO MAIOR QUE 1\n");
	linha();
	sleep(3);
	cab();
	while(refazer!='N'){
		if(tot==0)
			printf("\t\nESSE NÚMERO É PAR?\nS/N\n");
		else
			printf("\t\nO RESULTADO DA DIVISÃO RESULTOU EM UM NÚMERO PAR?\nS/N\n");
		tot++;
		getchar();
		scanf("%c",&ehpar);
		ehpar=toupper(ehpar);
		if (ehpar=='S'){
			par++;
			n++;
			printf("\tDIVIDA ESSE NÚMERO POR 2\n");
		}
		else if (ehpar=='N'){
			impar++;
			*(pv+=(sizeof(int)))=1;
			n++;
			printf("\tSUBTRAIA 1 E DIVIDA ESSE NÚMERO POR 2\n");
		}
		printf("\t\nESSE NÚMERO É 1?\nS/N\n");
		getchar();
		scanf("%c",&ehum);
		ehum=toupper(ehum);
		if (ehum=='S'){
			cab();
			printf("O NÚMENO NO QUAL VC PENSOU FOI %d\n",magica(par,impar,pv,n));
			sleep(1);
			tot=0;
			for (int i = 0; i < n; i++)
				posicao[i]=0;
			n=0;
		}
	}
	printf("DESEJA REFAZER O TESTE?\nS/N\n");
	getchar();
	scanf("%c",&refazer);
	refazer=toupper(refazer);		
	return 0;
}