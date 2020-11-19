/*
#include <stdlib.h>
#include <stdio.h>
#include "time.h"
#include "hafta5_ornek5_vectorlib_pointer.h"

float *creatFloatVector(int n){
	
	float *v= (float *) malloc (n * sizeof(float));
	int i;
	for(i=0; i< n; i++){
		v[i]= rand() / (float) RAND_MAX; //OLUÞTURULACAK MAX SAYI RAND_MAX
	}
}

void printVector(float *v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%f\n", v[i]);
	}
}
*/
