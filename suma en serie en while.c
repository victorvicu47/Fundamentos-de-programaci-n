#include <stdio.h>
void main()
{
long i, n, factorial;
printf ("Introduzca un número: ");
scanf ("%ld", &n);
factorial = 1;
for (i=1; i<=n; i++) {
factorial *= i;
}
printf ("factorial(%ld) = %ld", n, factorial);
 return (0);
}

