include <stdio.h>
#include <stdlib.h>


int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z;  //variaveis extras pra não precisar ta declarando no meio do code
 
	char Velha [3][3]={{'a','b','c'},{'d','f','g'},{'h','i','j'}}	;   // declarando o vetor
	
	
	printf("|BEM VINDO AO JOGO DA VELHA|\n\n");
	
	for(z=0;z<10;z++);    //in terface com tabela do lado (falta implementar o code do jogo
	{
		printf("Digite a posicao sendo \t 1  |2  |3\n                       1|1/1|1/2|1/3| \n                       2|1/2|2/2|2/3| \n                       3|1/3|2/3|3/3|\n");
		printf("%c\n",Velha[1][2]);
	}
	
	
}
