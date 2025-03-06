Algoritmo impedanciaINCA
	Escribir 'Este programa le ayudara a obtener el valor de la resistencia y capacitor/inductor a partir de la impedancia'
	Escribir 'Ingrese A (Real)'
	Leer Reals
	Escribir 'Ingrese J (Imaginario)'
	Leer Imags
	Escribir 'Introduzca la frecuencia de trabajo'
	Leer Freq
	// Imaginario Negativo -> capacitor
	// Imaginario Positivo -> inductor
	Si Imags>0 Entonces
		Escribir 'Carga Inductiva'
		Imp <- Imags/(2*PI*Freq)
		Escribir 'El valor del inductor es: ',Imp
	SiNo
		Escribir 'Carga Capacitiva'
		Imp <- -1/(2*PI*Freq*Imags)
		Escribir 'El valor del capacitor es: ',Imp
	FinSi
	// El valor de R es la parte REAL
	Escribir 'Valor de la resistencia: ',Reals
FinAlgoritmo
