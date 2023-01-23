// Programa para calcular el combinatorio de n,k(conciderando k iguales).

// Librerias.
#include <stdio.h>
#include <conio.h>

// Funciones secundarias.
void Enunciado();
int N_entero(float);
int Fact(int);

// Funcion principal.
main(){
	// Declaracion de variables.
	float num_x = 0;
	int Total, Tomados, dif, Comb;
	// Enuciado
	Enunciado();
	// Peticion y registro de datos.
	printf("\n\n\t    n = ");scanf("%f",&num_x);
	Total = N_entero(num_x);
	num_x = 0;
	printf("\n\t    k = ");scanf("%f",&num_x);
	Tomados = N_entero(num_x);
	// Condicional para continuar
	if(Total>0 && Tomados>=0 && Total>Tomados){
		// Calculos necesarios
		dif = Total - Tomados;
		Comb = Fact(Total)/( Fact(Tomados)*Fact(dif) );
		// Muestra de resultados.
		printf("\n\t El combinatorio de %d tomados de %d es :\n", Total, Tomados);
		printf("\n\t             C_%d,%d = %d\n", Total, Tomados, Comb);
	}else{
		printf("\n\t El valor invalido.");
		printf("\n\t Lea correctamente el enunciado.");
	}
	printf("\n\n\t Terminando programa...\n");
	getch();
}

void Enunciado(){
	printf("\n\t   *** Numero combinatorio ***");
	printf("\n\t       -------------------");
	printf("\n\n\t Sea  el numero combinatorio :");
	printf("\n\t                      C_(n,k) = n! / [ k!*(n-k)! ]");
	printf("\n\n\t  Donde : n > 0 , y es un nro. entero.\n");
	printf("\n\t          k >= 0 , y es un nro entero. \n");
	printf("\n\n\t Ingrese los valores de ...\n");	
}
// Comprueba si num_x es un numero entero.
int N_entero(float num_x){
	int num = 0, var_aux = 0;
	float resto = 0;
	var_aux = num_x*1000;
	resto = var_aux%1000;
	if ( resto == 0 )
		num = num_x;
	else
		num = -1;
	return num;
}
// Realiza el calculo del operador factorial
int Fact(int arg){
	int f = 1, i;
	if (arg!=0){
		for(i=1;i<=arg;i++){
			f=f*i;
		}
	}
	return f;
}
