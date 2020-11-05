/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: HP
 *
 * Created on 3 de noviembre de 2020, 02:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float res1 = 1.0;
    float res2 = 2.0;
    float res3 = 3.0;        
    
    res1=((6.18/5.0) * (pow(((14.1-4)/2),2)));
    res2=((8.9*34)/17);
    res3=(8-7);
    
    printf("El primer resultado es%f/n", res1);
    printf("El segundo resultado es%f/n", res2);
    printf("El tercer resultado es%f/n", res3);
    
    return (0);
}

