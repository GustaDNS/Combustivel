#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas,float vEta);

int main()
{
	printf("#### EcoCAR #### \n");
	
	float precoGasolina, precoEtanol;
	
	printf("Qual o preco da gasolina? \n");
	scanf("%f", &precoGasolina);
	
	
	printf("Qual o preco da etanol \n");
	scanf("%f", &precoEtanol);
	

	
	int resultado = Calculo (precoGasolina, precoEtanol);
	
	if (resultado == 0){
		printf ("Compensa abastecer com gasolina. \n");
	}
	else if (resultado == 1){
		printf ("Compensa abastecer com etanol. \n");
	}
	else{
		printf ("S�o equivalentes, tanto faz. \n");
	}
	
	
	system ("pause");
	
	return 0;
}

int Calculo(float vGas,float vEta)
{
	
	//Pre�o da gasolina * 0.7 = Pre�o m�ximo do Alcool
	
	if ((vGas * 0.70) < vEta)
	{
		//compensa abastecer com gasolina
		return 0;
	}
	else if((vGas * 0.70) > vEta)
	{	//compensa abastecer com o Etanol
		return 1;	
	}
	else
	{
		//Valores s�o equivalentes
		return 2;
	}
}
