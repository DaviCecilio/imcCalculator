#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()                    
{
	char name[60], result[60];
  float imc=0,height=0, weight=0;

	printf("**Calcualdora de IMC (Indice de Massa Corporea)**\n");

	printf("\nQual seu nome?:");
	scanf("%s", name);

	printf("Digite sua altura: ");
	scanf("%f", &height);
	
	printf("\nDigite seu peso:");
	scanf("%f", &weight);

	imc=weight/pow(height, 2);

	if (imc<18.5) strcpy(result, "Abaixo do Peso");
	else if((imc>=18.5) && (imc<=24.9)) strcpy(result, "Peso normal");
	else if((imc>= 25) && (imc<=29.9)) strcpy(result, "Sobrepeso");
	else if((imc>=30) && (imc<=34.9)) strcpy(result, "Obesidade grau 1");
	else if((imc>=35) && (imc<=39.9)) strcpy(result, "Obesidade grau 2");	
	else strcpy(result, "Obesidade grau 3");

	printf("Ola %s",name);
	printf("\nSeu imc e: %f", imc);
	printf("\nResultado e: %s", result);
   
    system("pause");
}
