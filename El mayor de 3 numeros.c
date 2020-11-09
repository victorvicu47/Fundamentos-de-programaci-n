/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   El mayor de 3 numeros.c
 * Author: HP
 *
 * Created on 9 de noviembre de 2020, 11:05 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float primero = 10.0;
    float segundo = 11.0;
    float tercero = 9.0;
    
    
    if (primero > segundo && primero > tercero)
        printf("El mayor es el %.1f" , primero);
    else{
    if (segundo > primero && segundo > tercero)
        printf("El mayor es el %.1f" , segundo);
    else
        
    if (tercero > primero && tercero > segundo)    
        printf("El mayor es el %.1f" , tercero);
                
    else
        printf("el segundo es mayor"); }
    return (EXIT_SUCCESS);
}

