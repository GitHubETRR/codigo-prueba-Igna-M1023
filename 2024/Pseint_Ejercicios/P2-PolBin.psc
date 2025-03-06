Algoritmo PolBin
	Escribir 'Bienvenido, Este programa le devolvera la forma (A+J) a base del módulo y el ángulo'
	Escribir 'Ingrese el módulo y luego el ángulo'
	Leer Modu
	Leer ang
	Reals <- Modu*cos(ang*PI/180)
	Imags <- Modu*sen(ang*PI/180)
	Escribir 'La forma Binomica es: ',Reals,' + J',Imags
FinAlgoritmo
