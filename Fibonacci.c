/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fibonacci.c
 * Author: HP
 *
 * Created on 10 de noviembre de 2020, 02:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int f= 18;
    
    int p= 0;
    int g= 0;
    int k= 1;
    int m= 1;
    
    
    printf ("0, ");
    
    while (f<m);{
        
        g=k;
        k=p;
        p=g+k;
        m=m+1;
        
        printf ("%m, ",p);
    }
    
   return (0);
}
  

