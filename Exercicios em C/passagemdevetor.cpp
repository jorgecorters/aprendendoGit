#include <stdio.h>

void preencher(int v[10]){
	
	int maior, menor;
	
	for(int i = 0; i < 3; i++){
		scanf("%d", &v[i]);
		
		if(v[i] == 0){
			break;
		}
		 if(i == 0){
            maior = v[i];
            menor = v[i];
        }
		
		if(v[i] > maior){
			maior = v[i];
		}
		if(v[i] < menor){
			menor = v[i];
		}
	}
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
}

int main(){

	int vetor[3];
	
	preencher(vetor);
    
    return 0;
}