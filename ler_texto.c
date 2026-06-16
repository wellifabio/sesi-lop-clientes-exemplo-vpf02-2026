#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("nao_estruturado.txt","r");
	if(arquivo == NULL){
		printf("Erro ao ler arquivo nao_estruturado.txt");
		getch();
		return; 
	}else{
		printf("Arquivo aberto.\n");
	}
	char linha[100];
	for(int i = 0; i < 10; i++){
		fscanf(arquivo,"%[^\n]\n", &linha);
		printf("%s\n", linha);
	}
	fclose(arquivo);
	getch();
}