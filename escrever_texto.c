#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("nao_estruturado.txt","w");
	if(arquivo == NULL){
		printf("Erro ao escrever no arquivo nao_estruturado.txt");
		getch();
		return; 
	}else{
		printf("Arquivo escrito com sucesso, com 10 frases repetidas.\n");
	}
	for(int i = 0; i < 10; i++){
		fprintf(arquivo,"O que eu quiser escrever.\n");
	}
	fclose(arquivo);
	getch();
}