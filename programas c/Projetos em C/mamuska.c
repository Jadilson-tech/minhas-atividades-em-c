# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

	printf("****************************************************************\n");
	printf("*********Bem vindo ao nosso jogo de adivinhação Mamuska*********\n" );
	printf("****************************************************************\n");


	int segundos = time(0);
	srand (segundos);

	int numerogrande = rand();

	int numerosecreto= numerogrande% 100+1;
	int chute;
	int tentativas= 1 ;
	double pontos= 1000;

	while(1){
		printf("Essa é a tentativa %d\n",tentativas );
		printf("Qual é o seu chute ? \n");
		scanf("%d",&chute);
		printf("Seu chute é o número %d\n",chute );

		if(chute<0){
			printf("O seu chute fou um número menor que zero\n");
			continue;
		}
		int acertou= chute == numerosecreto;
		int maior= chute > numerosecreto;

		if (acertou){
			printf("Parabéns, você acertou o número secreto\n");
			printf(" Continue jogando conosco");
			break;
		}
		else if(maior){
			printf(" Seu chute é maior que o número secreto.");

		}
		else{
			printf("Seu chute é menor que o número secreto\n");
		}
		tentativas++;
		double pontosperdidos= abs(chute-numerosecreto)/(double)2;

		pontos= pontos- pontosperdidos;

	}
	printf(" Fim de jogo \n");
	printf("Sua pontuação foi de %.1f pontos\n",pontos );
	printf("Você acertou em %d tentativas \n",tentativas );
}

