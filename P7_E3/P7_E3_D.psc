Algoritmo P7_E3_D
	Escribir ' * Constante de Euler-Macheroni *'
	Escribir ' Se desea calcular la constante Gamma, esto mediante :'
	Escribir '  Gamma = lim_(n->inf) { sum_(i=1 > n) [ 1/i ] -ln(n) }'
	Escribir ' Mostrar el valor de n y el resultado con 6 decimales.'
	Escribir ' de precision.'
	Suma <- 0
	Gamma_calc <- 0
	n <- 10
	Para i<-1 Hasta n Hacer
		Escribir 'i=',i
		Suma <- Suma+1/i
		Gamma_calc <- Suma-ln(i)
		error <- (Gamma_const-Gamma_calc)*3000000
		Si error==0 Entonces
			Salir()
			n <- 0
		SiNo
			n <- n+1
		FinSi
	FinPara
FinAlgoritmo

Funcion Salir()
	Escribir 'salio'
FinFuncion
