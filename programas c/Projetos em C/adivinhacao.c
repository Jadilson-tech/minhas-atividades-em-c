# include <stdio.h>
# include <stdlib.h>
# include <time.h>

              // Imprima o cabeçalho para mim.
int main() {
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");

    int segundos= time (0);
    srand (segundos);

    int numerogrande = rand();

    int numerosecreto= numerogrande% 100;

    int chute;
    
    int tentativas=1;

    double pontos= 1000;
    int acertou;

    int nivel;
    printf(" qual nível de dificuldade vai escolher?\n");
    printf(" (1) fácil  (2) médio (3) difícil \n \n");
    printf("Escolha\n");
    scanf("%d",&nivel);

    int numerodetentativas;
    switch (nivel){
    case 1:
        numerodetentativas= 20;
        break;

    case 2:
        numerodetentativas= 15;
        break;

    
    default:
        numerodetentativas=6;
        break;
        
    }



    for (int i=1;i<= numerodetentativas;i++) {

        printf("Tentativa %d\n",tentativas);
        printf("Qual é seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute é o número %d \n",chute);

        if (chute<0){
            printf("Você não pode digitar números negativos \n");

            continue;                     // o continue é como um break porém ele nao termina o codigo, apenas da como uma pre condiçao atendida.
        }

        acertou= chute==numerosecreto;
        int maior= chute > numerosecreto;

        if(acertou){

            break;         // O break aqui funciona para parar o loop caso a condição seja atendida.
        }

                      
        else if (maior){                /* Usamos o else if para reduzir o uso computacional na execução do código pois se utilizarmos 
                                                 apenas o if o loop percorreria o resto de todo for */                 

                printf("Seu chute foi maior que o número \n");
        }

        else {
                printf("Seu chute foi menor que o número \n");
        }
        tentativas ++;

        double pontosperdidos= abs(chute - numerosecreto)/(double) 2;

        pontos = pontos - pontosperdidos;

    }
    printf("Fim de jogo!!!\n");

    if(acertou){
        printf("Você ganhou! \n");
        printf ("Você acertou em %d tentativas\n",tentativas);
        printf(" Você marcou %.1f pontos\n",pontos);
    }else{
        printf("Você perdeu, tente novamente\n");
    }
}
