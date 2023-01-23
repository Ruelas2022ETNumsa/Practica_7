// Hallar la constante de Euler-Mascheroni por ciclos for
// Con 6 decimales de precision.
// Librerias
#include<stdio.h>
#include<math.h>
#include<conio.h>
// Definiendo la constante
#define Gamma_c 0.5772156649
// Programa principal
main(){
	// Definiendo variables
	int i, n = 2, error;
	float arg, Suma = 0, Gamma_x = 0;
	// Enunciado
	printf("\n\t *** Constante de Euler-Mascheroni ***");
	printf("\n\t     -----------------------------");
	printf("\n\n\t Sea la constante Gamma = %0.10f.\n\t calcular dicha constante mediante:", Gamma_c);
	printf("\n\n\t  * S = sum_(i=1 > i=n){ 1/i }\n\n\t   Gamma = lim_(n->inf) { S -ln(n) }");
	printf("\n\n\tMostrar el valor de n y el resultado\n\tcon 6 decimales de precision.");
	// Iniciando el ciclo for
	for(i=1 ; i<=n ; i++){
		// Calculos necesarios
		Suma += 1.0/i;
		Gamma_x =Suma - log(i);
		error = (Gamma_c-Gamma_x)*3000000;//3000000 2745238  10000000
		// Condicional para añadir otra repeticion a ciclo
		if ( error == 0 )
			break;
		else
			n++;
	}
	// Culculo final
	Gamma_x = Suma - log(i);
	// muestra de resultados
	printf("\n\n\t Los resultados son :");
	printf("\n\n\t\t n = %d ",i);
	printf("\n\t\t Gamma calc  = %0.10f",Gamma_x);
	printf("\n\t\t Gamma const = %0.10f",Gamma_c);
	printf("\n\n\t Terminando el programa...");
	getch();
}
