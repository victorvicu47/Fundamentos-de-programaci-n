
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x = 0;
    int n;
    
    printf("Ingrese el valor de n: ");
    scanf("%d",&n);
    
    int arreglo[n];
    
    for (x; x<n; x++){
        printf("Ingrese el nuevo valor: ");
        scanf("&d",&arreglo[x]);
    }
    x = 0;
    for (x; x<n; x++){ 
        suma = suma + arreglo[x];
    }
    printf("\nel promedio en %f: ", suma/n);
    return (0)
}

