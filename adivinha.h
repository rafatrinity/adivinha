#ifndef adivinha
#define adivinha
#include "stdio.h"
#include "stdlib.h"
#include "adivinha.h"
int pot(int a, int b){
	if (b==0)
		return a;
	int c=0;
	for (int i = 1; i < b; i++)
		c+=a*a;
	return c;
}

int magica(int par, int impar, int* posicao, int n){
	int a=0,b=0, i;
	if (impar==0)
		return pot(2,par);
	else{
		for (i = 0; i < n; i++)
		{
			if (*(posicao+=(i*sizeof(int)))==1)
				b+=pot(2,i); //impar
		}
		a=pot(2,(par+impar));
		return (a+b);
	}
}
#endif