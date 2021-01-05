#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int numero;
for(numero=1; numero<=5; numero++){
printf("El cubo del número %d es %d\n", numero, cubo(numero));
}
return 0;
}
int cubo(int base)
{
int potencia;
potencia = base * base * base;
return potencia;
}