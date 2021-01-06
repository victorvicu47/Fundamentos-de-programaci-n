#include <stdio.h>
#include <string.h>
struct ficha{
 char nombre[20]; /* nombre */
 char apellido[20]; /* apellido */
 int edad; /* edad */
 float salario; /* salario */
 };
struct ficha mi_ficha; /* declaramos mi_ficha como una
estructura del tipo ficha */
int main(void)
{
strcpy(mi_ficha.nombre,"Victor Andrey");
strcpy(mi_ficha.apellido,"Vicuña Arriaga");
printf("\n%s ",mi_ficha.nombre);
printf("%s\n",mi_ficha.apellido);
strcpy(mi_ficha.edad,"19 años");
printf("\n%s ",mi_ficha.edad);
return 0;
}

