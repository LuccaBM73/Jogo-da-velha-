#include <stdio.h> 
#include <stdlib.h>
int menu();
char local();
char ** aloca(int x, int y) ;

int main() 
{
	menu();


}
int menu()
{

			int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,x,y,z;
			
			do{
			
			
				printf("	**************************************\n"
					   "	*	Bem vindo ao menu inicial    *\n"	 // ta assim pq nessa linha eu usei tab
					   "	*                                    *\n"
					   "	**************************************\n"
					   "	*                                    *\n"
					   "	* DIGITE 1 PARA ACESSAR O JOGO       *\n"
					   "	* DIGITE 2 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 3 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 4 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 5 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 6 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 7 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 8 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 9 PARA ACESSAR X XXXX       *\n"
					   "	* DIGITE 0 PARA SAIR                 *\n"
					   "	**************************************\n"
					   
				);
				scanf("%d",&a);
				switch (a)
					{
					case 1:local();break;
					case 2:;break;
					case 3:;break;
					case 4:;break;
					case 5:;break;
					case 6:;break;
					case 7:;break;
					case 8:;break;
					case 9:;break;
					case 0:	printf("ADIOS AMIGO :): %d\n",a);break;
					}
			}	
			while(a!=0);
	

}
char ** aloca(int x, int y) {
	char ** velha = (char **) malloc(x*sizeof(char*));
	int i, j;
	for(i=0; i<x; i++){
		velha[i] = (char*) malloc(y*sizeof(char));
	}
	for(i=0; i<x; i++) 
		for(j=0; j<y; j++) 
			velha[i][j]=' ';
	return velha;
}
char local()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z;
	//char Velha [3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}}	; 
	char ** Velha = aloca(3, 3);
		printf("Digite a posicao sendo \t 1  |2  |3\n                       1|1/1|1/2|1/3| \n                       2|1/2|2/2|2/3| \n                       3|1/3|2/3|3/3|\n");
		for(m=0;m<10;m++)
		{
		printf("Digite o setor que você deseja marcar (X/Y)\n");
		
			scanf("%d",&u);
			scanf("%d",&v);
			--v;
			--u;
		printf("Digite se é X ou O\n");
		scanf (" %c",&Velha[u][v]);	;
		printf("*****************\n");
		printf("* %c ** %c ** %c*\n",Velha[0][0],Velha[0][1],Velha[0][2]);
		printf("*****************\n");
		printf("* %c ** %c ** %c*\n",Velha[1][0],Velha[1][1],Velha[1][2]);
		printf("*****************\n");
		printf("* %c ** %c ** %c*\n",Velha[2][0],Velha[2][1],Velha[2][2]);
		printf("*****************\n");

	
		}
}//https://github.com/LuccaBM73/Jogo-da-velha-/blob/master/ve%20ai%20vei