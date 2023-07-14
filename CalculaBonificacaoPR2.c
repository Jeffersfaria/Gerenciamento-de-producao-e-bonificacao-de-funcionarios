#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


float TotalDePagamentos;
int TotalDePecasMes;
int TotalDePecasA;
int TotalDePecasB;
int FezA;
int FezB;
float SalarioMaisAlto;

int main (){
	
	int funcionarios;
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Ol�, bem-vindo � Calculadora de bonifica��o, para come�armos, digite a quantidade de funcion�rios que far�o o teste: ");
	scanf("%d", &funcionarios);
	fflush(stdin);
	system("cls");
	
	int numeroDosFuncionarios [funcionarios];
	int pecasTipoA[funcionarios];
	int pecasTipoB[funcionarios];
	float salario[funcionarios];

	
	for(int i=0;i< funcionarios;i++)
	{
	printf("Insira o n�mero do funcion�rio %d:\n", i+1);
	scanf("%d", &numeroDosFuncionarios[i]);
	fflush(stdin);
	system("cls");
	
	printf("Quantidades de pe�as do tipo 'A' feitas pelo funcion�rio %d:\n", numeroDosFuncionarios[i]);
	scanf("%d", &pecasTipoA[i]);
	fflush(stdin);
	system("cls");
	
	printf("Quantidades de pe�as do tipo 'B' feitas pelo funcion�rio %d:\n", numeroDosFuncionarios[i]);
	scanf("%d", &pecasTipoB[i]);
	fflush(stdin);
	system("cls");
	
	salario[i] = 900;
	
	if(pecasTipoA[i] > 30 && pecasTipoA[i] < 35){
		printf("Funcio�rio %d, voc� conseguiu um aumento de 3 por cento com as pe�as do tipo 'A' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.03);
			
		printf("Funcion�rio %d,voc� receber�: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if(pecasTipoA[i] > 35){
		printf("Funcion�rio %d, voc� conseguiu um aumento de 5 por cento com as pe�as do tipo 'A' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.05);
			
		printf("Funcion�rio %d,voc� receber�: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
		if(pecasTipoB[i] > 30 && pecasTipoB[i] < 35){
		printf("Funcion�rio %d, voc� conseguiu um aumento de 4 por cento com as pe�as do tipo 'B' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.04);
			
		printf("Funcion�rio %d,voc� receber�: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if(pecasTipoB[i] > 35){
		printf("Funcion�rio %d, voc� conseguiu um aumento de 6 por cento com as pe�as do tipo 'B' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.06);
			
		printf("Funcion�rio %d,voc� receber�: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if (pecasTipoA[i] < 30 && pecasTipoB[i] < 30)  {
		printf("Voc� n�o receber� bonifica��o, seu sal�rio ser� de R$%.2f\n\n", salario[i]);
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if(pecasTipoA[i] > 0){
		FezA++;
	}
	if(pecasTipoB[i] > 0){
		FezB++;
	}
	if(i >= 1 && salario[-i] > salario[i]){
		SalarioMaisAlto = salario[-i];
	}
	else{
		SalarioMaisAlto = salario[i];
	}
	
	TotalDePagamentos = TotalDePagamentos + salario[i];
	TotalDePecasA = TotalDePecasA + pecasTipoA[i];
	TotalDePecasB = TotalDePecasB + pecasTipoB[i];

} 

	TotalDePecasMes = TotalDePecasMes + (TotalDePecasA + TotalDePecasB);

	printf("Total da folha mensal de pagamento: R$%.2f\n\n", TotalDePagamentos);
	printf("Total de pe�as do tipo 'A': %d\n\n", TotalDePecasA);
	printf("Total de pe�as do tipo 'B': %d\n\n", TotalDePecasB);
	printf("Total de pe�as no m�s: %d\n\n", TotalDePecasMes);
	printf("Total de colaboradores que produziram pe�as do tipo 'A': %d\n\n", FezA);
	printf("Total de colaboradores que produziram pe�as do tipo 'B': %d\n\n", FezB);
	printf("Sal�rio mais alto: %.2f\n\n", SalarioMaisAlto);
	
	

}


