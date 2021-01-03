#include <stdio.h>
#include <stdlib.h>

 void main(){
 
 int a, b, c, d, mayor;
 
 printf ("Programa que indica cual de 4 numeros es el mayor\n");
 printf ("Introduce 4 numeros enteros:\n");
 
 scanf ("%i%i%i%i", &a, &b, &c, &d);
 
 if (a > b)
  if (a > c)
   if (a > d)
    mayor = a;
    
   else
    mayor = d;

  else 
   if (c > d) 
    mayor = c;
    
   else
    mayor = d;
 else
  if (b > c)
   if (b > d)
    mayor = b;
    
   else 
    mayor = a;
    
  else 
   if (c > d)
    mayor = c;

   else 
    mayor = d;

 printf ("El mayor es %i", mayor);

    return (EXIT_SUCCESS);
}

