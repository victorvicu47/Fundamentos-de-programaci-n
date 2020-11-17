/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tablas con for.c
 * Author: HP
 *
 * Created on 17 de noviembre de 2020, 02:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
 
    int g;
    int k;
    
    for(k=1; k<=10; k++){ 
    
     printf ("///////////\n");
        
         for (g=1; g<=10;g++){
    
    printf ("%d X %d = %d\n",k,g,k*g);
        
     
      
         }
    
    }
    return (0);
}

