#include <stdio.h>
int main(){
	
    int numero=1;
    int soma= 0;

	while(numero<= 100){
		printf("%d\n",numero );
		numero++;
		soma= soma + numero;
	}

	printf("%d\n Essa é a soma dos números ",soma);
	return 0;

}