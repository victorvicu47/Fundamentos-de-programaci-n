/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arreglo usando scanf.c
 * Author: HP
 *
 * Created on 23 de noviembre de 2020, 12:38 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

	 int arreglo[100];
    int x = 1,n;
    arreglo[0];
    arreglo[1];
	printf("\n Digite la candidad: ");
	scanf("%d",&n);
	for (x;x<=100;x=x+1){
		printf("%.1lf\n",arreglo[0]);
		arreglo[0] = arreglo[0] + arreglo[1];
		printf("%.1lf\n",arreglo[1]);
		arreglo[1] = arreglo[0] + arreglo[1];

	}
    return (0);
}