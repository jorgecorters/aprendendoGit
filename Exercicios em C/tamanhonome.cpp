#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char palavra[50];
	int cont = 0, i;
	
	printf("Digite uma palavra(ou FIM para encerrar): ");
	fgets(palavra, sizeof(palavra), stdin);
	palavra[strcspn(palavra, "\n")] = '\0';
	
	for(i = 0; palavra[i]; i++){
			palavra[i] = toupper(palavra[i]);
	}
	
	while(strcmp(palavra, "FIM") != 0){
		cont++;
		printf("Digite uma palavra(ou FIM para encerrar): ");
		fgets(palavra, sizeof(palavra), stdin);
		palavra[strcspn(palavra, "\n")] = '\0';
		
		for(i = 0; palavra[i]; i++){
			palavra[i] = toupper(palavra[i]);
		}
	}
	
	if(cont == 0){
		printf("Nao foi digitada nenhuma palavra.");
	}
	
	printf("\n Quantidade: %d", cont);
	//teste
	
	return 0;
}