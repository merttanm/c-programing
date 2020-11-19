/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: MERT
 *
 * Created on 19 Kasım 2020 Perşembe, 02:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
enum days {
    mon, tue, wed, thu, fri, sat, sun
};

int main(int argc, char** argv) {
    enum days gun;
    
    for(gun=mon; gun<= sun; gun++)
        printf("%d. gun \n", gun);
    
    return (EXIT_SUCCESS);
}

