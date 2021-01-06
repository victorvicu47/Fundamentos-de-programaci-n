#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int x, y;

x = 10;

y = 20;

printf("x=%d\ty=%d\n",x,y);

swap(&x, &y);

printf("x=%d\ty=%d\n",x,y);

}

void swap(int *px, int *py)

{

int temp;

temp = *px; /* guarda el valor de la direccion x */

*px = *py; /* pone y en x */

*py = temp; /* pone x en y */
    return (EXIT_SUCCESS);
}

