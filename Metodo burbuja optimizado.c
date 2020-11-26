
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int aux,i,j;
	int n;
         int num[3] = {3,1,5};
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
           
           if(num[j] > num[j+1]){
               
               
               aux = num[j+1];
               num[j+1]= num[j];
               num[j] = aux;
           }
       } 
    }
    for(int i = 0; i < 3; i++){
        printf("%d\t",num[i]);
    }
	printf("\nIngrese cuantos datos desea manejar: ");
	scanf("%d",&n);


	for(i = 0; i < n; i++ ){
		printf("\nIngrese los numeros a analizar: ");
	}

		for (int i = 1; i < n; i++){
			for(j = n - 1; j >= i; j--){

				if(num[j - 1] > num[j]){

				aux = num[j-1];
				num[j-1]= num[j];
				num[j] = aux;
			}
		}
	}
	printf("\n");
	for(int i = 0; i < n; i++ ){

		printf("%lf\t",num[i]);

	}
	return 0;
}