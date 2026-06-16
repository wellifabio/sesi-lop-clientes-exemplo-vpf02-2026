#include<stdio.h>
#include<windows.h>
#define MAX_CHAR 200
void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("texto_aleatorio.txt","r");
	if(arquivo == NULL){
		printf("Erro ao ler arquivo texto_aleatorio.txt");
		getch();
		return; 
	}else{
		printf("Arquivo aberto.\n");
	}
	char linha[MAX_CHAR];
	while(fgets(linha,sizeof(linha),arquivo) != NULL){
		printf("%s", linha);
	}
	fclose(arquivo);
	getch();
}