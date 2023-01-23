Algoritmo P7_E2_D
	Escribir " Se desea mostrar lo nros impares de 0 hasta N,";
	Escribir " ademas de calcular la suma de dichos numeros.";
	
	Escribir " Ingrese el valor (entero) de N:";
	Escribir Sin Saltar"                  N = ";
	Leer N;
	Num <- N_Entero(N);
	
	Si Num <> 0 Entonces
		Suma <- 0;
		Si Num > 0 Entonces
			ini <- 0
			finn <- Num
			cond <- Num
		SiNo
			ini <- Num
			finn <- 0
			cond <- -1
		Fin Si
		Escribir " Los numero seran :";
		Escribir Sin Saltar"   L : { ";
		Para i <- ini Hasta finn Con Paso 1  Hacer
			si i%2<>0 Entonces
				Suma <- Suma + i;
				Escribir Sin Saltar i;
				si i < cond Entonces
					Escribir Sin Saltar", ";
				FinSi
			FinSi
		FinPara
		Escribir Sin Saltar" }";
		Escribir "";
		Escribir " Suma = ", Suma;
	SiNo
		Escribir " Valor invalido.";
	Fin Si
	Escribir " Terminando programa...";
FinAlgoritmo

Funcion Num_E <- N_Entero(N)
	Var_aux <- Num*1000;
	Resto <- Var_aux%1000;
	si Resto == 0 Entonces
		Num_e <- N;
	SiNo
		Num_E <- 0;
	FinSi
FinFuncion

