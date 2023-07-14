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
	
	
	printf("Olá, bem-vindo à Calculadora de bonificação, para começarmos, digite a quantidade de funcionários que farão o teste: ");
	scanf("%d", &funcionarios);
	fflush(stdin);
	system("cls");
	
	int numeroDosFuncionarios [funcionarios];
	int pecasTipoA[funcionarios];
	int pecasTipoB[funcionarios];
	float salario[funcionarios];

	
	for(int i=0;i< funcionarios;i++)
	{
	printf("Insira o número do funcionário %d:\n", i+1);
	scanf("%d", &numeroDosFuncionarios[i]);
	fflush(stdin);
	system("cls");
	
	printf("Quantidades de peças do tipo 'A' feitas pelo funcionário %d:\n", numeroDosFuncionarios[i]);
	scanf("%d", &pecasTipoA[i]);
	fflush(stdin);
	system("cls");
	
	printf("Quantidades de peças do tipo 'B' feitas pelo funcionário %d:\n", numeroDosFuncionarios[i]);
	scanf("%d", &pecasTipoB[i]);
	fflush(stdin);
	system("cls");
	
	salario[i] = 900;
	
	if(pecasTipoA[i] > 30 && pecasTipoA[i] < 35){
		printf("Funcioário %d, você conseguiu um aumento de 3 por cento com as peças do tipo 'A' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.03);
			
		printf("Funcionário %d,você receberá: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if(pecasTipoA[i] > 35){
		printf("Funcionário %d, você conseguiu um aumento de 5 por cento com as peças do tipo 'A' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.05);
			
		printf("Funcionário %d,você receberá: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
		if(pecasTipoB[i] > 30 && pecasTipoB[i] < 35){
		printf("Funcionário %d, você conseguiu um aumento de 4 por cento com as peças do tipo 'B' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.04);
			
		printf("Funcionário %d,você receberá: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if(pecasTipoB[i] > 35){
		printf("Funcionário %d, você conseguiu um aumento de 6 por cento com as peças do tipo 'B' que fez.\n\n", numeroDosFuncionarios[i]);
		
			salario[i] = salario[i] + (900.00* 0.06);
			
		printf("Funcionário %d,você receberá: R$%.2f\n\n", numeroDosFuncionarios[i], salario[i]);		
		
		fflush(stdin);
		system ("pause");
		system("cls");
		
	}
	
	if (pecasTipoA[i] < 30 && pecasTipoB[i] < 30)  {
		printf("Você não receberá bonificação, seu salário será de R$%.2f\n\n", salario[i]);
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
	printf("Total de peças do tipo 'A': %d\n\n", TotalDePecasA);
	printf("Total de peças do tipo 'B': %d\n\n", TotalDePecasB);
	printf("Total de peças no mês: %d\n\n", TotalDePecasMes);
	printf("Total de colaboradores que produziram peças do tipo 'A': %d\n\n", FezA);
	printf("Total de colaboradores que produziram peças do tipo 'B': %d\n\n", FezB);
	printf("Salário mais alto: %.2f\n\n", SalarioMaisAlto);
	
	

}


