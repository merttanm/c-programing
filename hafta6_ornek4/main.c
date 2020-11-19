/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: MERT
 *
 * Created on 17 Kasım 2020 Salı, 21:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    /*
          1 2 3 4 5 6 7 8 9 10 0
     
     */
    int a[10];
    creat1DArray(10, a);
    print1DArray(11, a);
    puts(" ");
    /*
          1  2  3   4  5  6  7
          8  9  10  11 12 13 14
          15 16 17  18 19 20 21
          22 23 24  25 26 27 28
     */
    int B[4][7];
    creat2DArray(4, 7, B);
    print2DArray(4, 7, B);
    puts(" ");
  
    /*
      1  2  3
      4  5  6
      7  8  9
      10 11 12
      13 14 15
      ........
      ........
      58 59 60
      
     
     */
    int C[4][5][3];
    creat3DArray(4, 5, 3, C);
    print3DArray(4, 5, 3, C);

    return (EXIT_SUCCESS);
}

