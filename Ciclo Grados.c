#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <stdlib.h>

int main(){

	int op;
	float celsius, fahrenheit, kelvin;


	do{




		printf("\n--------------------------------------------------");
		printf("\nCalculo de convercion de los grados de temperatura ");
		printf("\n--------------------------------------------------");
		printf("\nCelsius a Fahrenheit.............[ 1 ]");
		printf("\nFahrenheit a Celsius..........[ 2 ]");
		printf("\nCelsius a Kelvin..............[ 3 ]");
		printf("\nFahrenheit a Kelvin.............[ 4 ]");
		printf("\nKelvin a Fahrenheit..........[ 5 ]");
		printf("\nKelvin a Celsius..............[ 6 ]");
		printf("\n--------------------------------------------------");
		printf("\nElije ? "); scanf("%d", &op);

		system("cls");
		switch(op) {

		case 1:
			printf("\nleyendo los grados Celsius");
			printf("\ningrese los grados celsius que desea procesar:  ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 9/5) + 32 ;
			printf( "%.2f  grados fahrenheit", fahrenheit);

			break;
		case 2:
			printf("\nleyendo los grados Fahrenheit");
			printf("\ningrese los grados faherenheit:  ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5/9 ;
			printf( "%.2f  grados celsius", celsius);

			break;
		case 3:
			printf("\nleyendo los grados Celsius");
			printf("\ningrese los grados celsius que desea procesar:  ");
			scanf("%f", &celsius);
			kelvin = (celsius + 273.15) ;
			printf( "%.2f  grados kelvin", kelvin);

			break;

		case 4:
			printf("\nleyendo los grados Fahrenheit");
			printf("\ningrese los grados faherenheit:  ");
			scanf("%f", &fahrenheit);
			kelvin = ((fahrenheit - 32) * 5/9) + 273.15 ;
			printf( "%.2f  grados kelvin", kelvin);

			break;
		case 5:
			printf("\nleyendo los grados kelvin");
			printf("\ningrese los grados kelvin:  ");
			scanf("%f", &kelvin);
			fahrenheit = ((kelvin - 273.15) * 9/5) + 32 ;
			printf( "%.2f  grados fahrenheit", fahrenheit);

			break;
		case 6:
			printf("\nleyendo los grados kelvin");
			printf("\ningrese los grados kelvin:  ");
			scanf("%f", &kelvin);
			celsius = (kelvin - 273.15) ;
			printf( "%.2f  grados celsius", celsius);

			break;
		case 7:
			break;

		default: printf("\nopcion invalida");
		break;
		}

	}while(op!=7);

}
