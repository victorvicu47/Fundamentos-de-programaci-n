#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int x = 0;
    int n;
    
    printf("Ingrese el valor de n: ");
    scanf("%d",&n);
    
    float arreglo[n];
    
    for (x; x<n; x++){
        printf("ingrese el nuevo valor : ");
        scanf("%f", &arreglo[x]);
    }
    x = 0;
    float min = arreglo[0];
    float max = arreglo[0];
    for (x; x<n; x++){
        if(arreglo[x]<min){
            min = arreglo[x];
        }
        if(arreglo[x]>max){
            max = arreglo[x];
        }
        
        printf("\n el max %f: ", max);
        printf("\n el min %f: ", min);
    }
    return (0);
}

