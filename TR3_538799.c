#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;

   	//#########################
	for (i = 0; i < 200; i++){  //LIMPEZA DO VETOR 
		x[i] = 0;
	}

   	while (1){
   		printf("Digite um valor entre 0 a 5000, caso queira ver os números já digitados escreva -1: ");
		scanf("%d", &k); //ENTRADA DO USUÁRIO
		if (k == -1){
			break;
		}
		if (k >= 0 && k<=5000){
			y = k % 32;
			w = k / 32;
			x[w] = (1 << y) | x[w];
		}
		else{
			printf("O valor inserido está fora do intervalo\n");
		}
	}
	printf("Os valores inseridos foram: ");
	for (i = 0; i < 200; i++){
		for (j = 0; j < 32; j++){
        	if ((x[i] >> j) & 1){
            	printf("%d ", j + i * 32);
        }
    }
	}
   	//#########################
	return 0;  
}