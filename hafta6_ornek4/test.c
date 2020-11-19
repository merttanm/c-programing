#include "array.h"
#include <stdio.h>
#include <stdlib.h>
void creat1DArray(int n,  int *v){
    int i;
    for(int i=0; i<n ; i++)
        v[i]=i+1;
}
void print1DArray(int n,  int *v){
    int i;
    for(int i=0; i<n ; i++)
        printf("%d ", v[i]);
}
void creat2DArray(int n, int m, int *M){
    int i ,j, saydir=0 ;
    for( int i= 0; i<n; i++){
    for( int j= 0; j<m; j++){ 
        M[m * j + i]=++saydir;
    }
    }
}
void print2DArray(int n, int m, int *M){
    int i ,j;
    for( int i= 0; i<n; i++){
    for( int j= 0; j<m; j++){ 
        printf("%d ",  M[m * j + i]);
        }
    puts(" ");
    }


}
void creat3DArray(int n, int m, int p, int *T){
    int i ,j, k, saydir=0 ;
    for( int i= 0; i<n; i++){
      for( int j= 0; j<m; j++){ 
       for( int k= 0; k< p; k++){
            T[k * m * n + m * i + j]=++saydir;
       
    }
    }
    }
}

void print3DArray(int n, int m, int p, int *T){
    int i ,j, k, saydir=0 ;
    for( int i= 0; i<n; i++){
      for( int j= 0; j<m; j++){ 
       for( int k= 0; k< p; k++){
           printf("%d ",   T[k * m * n + m * i + j]);
        }
    puts(" ");
    }
    }
}