// Programa para mostra los nros enteros desde 0 
// hasta n, y calcular tambien la suma de estos.
// Librerias
#include<stdio.h>
#include<conio.h>
// Programas secundarios
void Enumciado();
int N_Entero(float);
// Programa principal
main(){
	// Declaracion de variables
	int Num, Suma, i, ini, fin, cond;
	float num_x;
	// Funcion enunciado
	Enunciado();
	// Peticion y alamcenamiento de datos
	printf("\n\n\t Ingrese el valor (entero) de N: ");
	scanf("%f", &num_x);
	// Para sabre si el valor en un entero
	Num = N_Entero(num_x);
	// Condicional de nro Z
	if (Num !=0) {
		Suma = 0;// inicalizando el acumulador
		// Condicion para saber su el nro es + o -
		if (Num > 0){
			ini  = 0;
			fin  = Num;
			cond = Num;
		}else{
			ini  = Num;
			fin  = 0;
			cond = -1;
		}
		// Muestra de resultados
		printf("\n\t Los numeros seran :");
		printf("\n\n\t L : { ");
		for(i=ini ; i<=fin ; i++){
			// Condicional para nro pares
			if(i%2!=0){
				Suma +=i;// Calculos necesarios
				printf("%d", i);
				if(i<cond)
					printf(", ");	
			}	
		}
		printf(" }");
		printf("\n\t S = %d", Suma);
	}else{
		printf("\n\n\t Valor invalido.");
	}
	printf("\n\n\t Terminando programa ...");
	getch();
}

void Enunciado(){
	printf("\n\t\t    *** Ejercicio 2  ***");
	printf("\n\t\t        ___________");
	printf("\n\n\t Se desea mostrar lo nros impares de 0 hasta N,");
	printf("\n\t ademas de calcular la suma de estos.");
}

int N_Entero(float num_x){
	// Delaracion de variables
	int num_e = 0, var_aux = 0;
	float resto = 0;
	// Calculos necesarios
	var_aux = num_x*1000;
	resto = var_aux%1000;
	// Condicionnal para nro Z
	if (resto == 0)
		num_e = num_x;
	else
		num_e = 0;
	// Retorno de valor
	return num_e;
}
