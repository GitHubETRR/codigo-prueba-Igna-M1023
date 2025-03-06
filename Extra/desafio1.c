#include <stdio.h>
#include <stdbool.h> 
#define TAM_TXT 128

typedef struct{
    int dia;
    int mes;
    int anio;
}fecha_venta_t;

typedef struct{
    char nombre[TAM_TXT];
    char apellido[TAM_TXT];
    fecha_venta_t fecha_venta;
    bool estado;  		// Estado: DISPONIBLE (0) o VENDIDO (1)	
}reservas_t;

typedef enum{
    REGVENTA=1,
    ASIENTOSDISP,
    CONSULTAR,
    CERRARVENTAS
}opciones_t;
