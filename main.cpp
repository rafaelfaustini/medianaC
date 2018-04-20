#include <stdio.h>

float mediana(float vetor[],int l){
	if(l%2 == 0){
		printf("par");
		return (vetor[l/2]+vetor[(l/2)-1])/2;		
	}

	
	return vetor[l/2];
}
float *BubbleSort(float vetor[], int tamanho){
	int memoria, troca, i, j;
	troca=1;
	for(j=tamanho-1; (j>=1) && (troca==1); j--){
		troca=0; 
		for(i=0; i<j; i++){
				if(vetor[i]>vetor[i+1]){
					memoria=vetor[i];
					vetor[i]=vetor[i+1];
					vetor[i+1]=memoria;
					troca=1;
			}
		}
	}
	return vetor;
}


int main(){
float test[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
printf("Mediana %.2f",mediana(BubbleSort(test,5),5));



}
