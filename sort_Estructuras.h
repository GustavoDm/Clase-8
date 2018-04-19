#ifndef SORT_ESTRUCTURAS_H_INCLUDED
#define SORT_ESTRUCTURAS_H_INCLUDED

typedef struct{

char Nombre[50];
char Apellido[50];
int DNI;

}EPersona;



int get_Estructura(EPersona* cliente, int cantidad);

#endif // SORT_ESTRUCTURAS_H_INCLUDED
