#include <stdio.h>
#include <stdlib.h>
#include "sort_Estructuras.h"
#define CANTIDAD 3

int main()
{
    EPersona cliente[CANTIDAD];

    get_Estructura(cliente.Nombre, cliente.Apellido, cliente.DNI,CANTIDAD);

    for(i=0;i<CANTIDAD;i++){
        printf("%c %c %d", cliente.Nombre, cliente.Apellido, cliente.DNI);

    }
}
