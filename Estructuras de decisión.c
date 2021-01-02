#include <stdio.h>
#include <stdlib.h>

void main(){
 
 int year;
 
 printf ("Progama para determinar si un año es bisiesto");
 printf ("\nIntroduce un numero de año\n");
 
 scanf ("%i", &year);
 
 if (year%4 == 0 && year%100 != 0 || year%400 == 0)

  printf ("\a\nEl año %i si es bisiesto", year);
  
 else
  
  printf ("\a\nEl año %i no es bisiesto", year);
  
return (0); 
 }