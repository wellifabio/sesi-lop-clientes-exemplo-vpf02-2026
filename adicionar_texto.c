#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("nao_estruturado.txt","a");
	if(arquivo == NULL){
		printf("Erro ao adicionar dados no arquivo nao_estruturado.txt");
		getch();
		return; 
	}else{
		printf("Dados adicionados ao arquivo com sucesso, com 10 frases repetidas.\n");
	}
	for(int i = 0; i < 10; i++){
		fprintf(arquivo,"O que eu quiser escrever.\n");
	}
	fclose(arquivo);
	getch();
}