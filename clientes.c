#include <stdio.h>
#include <windows.h>

struct Cliente{
	char nome[50];
	int idade;
	char email[100];
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Cliente clientes[5] = {
		{"João da Silva", 30, "joao.silva@email.com"},
		{"Maria da Silva", 40, "maria.silva@email.com"},
		{"José da Silva", 25, "jose.silva@email.com"},
		{"Ana da Silva", 18, "ana.silva@email.com"},
		{"Carlos da Silva", 45, "carlos.silva@email.com"}
	};
	FILE *arquivo = fopen("clientes.csv","w");
	if(arquivo == NULL){
		printf("Erro ao gravar arquivo\n");
		return 0;
	}
	fprintf(arquivo,"Nome,Idade,E-mail\n");
	for(int i = 0; i < 5; i++)
		fprintf(arquivo,"%s, %d, %s\n",clientes[i].nome, clientes[i].idade, clientes[i].email);
	fclose(arquivo);
	printf("Arquivo criado com sucesso.");
	getch();
}