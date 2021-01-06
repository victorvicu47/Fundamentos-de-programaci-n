#include <stdio.h>
char strA[80] = "Cadena a usar para el programa de ejemplo";
char strB[80];
int main(void)
{
 char *pA; /* un apuntador al tipo caracter */
 char *pB; /* otro apuntador al tipo caracter */
 puts(strA); /* muestra la cadena strA */
 pA = strA; /* apunta pA a la cadena strA */
 puts(pA); /* muestra a donde apunta pA */
 pB = strB; /* apunta pB a la cadena strB */
 putchar('\n'); /* dejamos una línea en blanco */
 while(*pA != '\0') /* linea A (ver texto) */
 {
 *pB++ = *pA++; /* linea B (ver texto) */
 }
 *pB = '\0'; /* linea C (ver texto) */
 puts(strB); /* muestra strB en la pantalla */
 return 0;
}

