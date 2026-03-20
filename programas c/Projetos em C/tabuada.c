# include <stdio.h>
	int main(){

		int numero;
		int i;                   // todas as variáveis devem ser declaradas

		printf("Conheça a calculadora interativa do Jadilson\n");
		printf("********************************************\n");
		printf("Qual o número que deseja ver a tabuada completa?\n");

		scanf("%d",&numero);    // Dentro do scanf não podemos colocar caracteres especiais para nao bugar o sistema, ex: colocar depoios do %d um \n pois causa erro

		printf(" A tabuada do número %d é:",numero);


		for (i=0;i<11;i++){               // No for devemos usar ; para separar os blocos
			printf("%d x %d = %d\n",numero,i,numero*i);
		}
		
return 0;
}