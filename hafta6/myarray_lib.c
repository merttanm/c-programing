#include "myarraylib.h"
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

float *creatVector(int n) {
    float *v = (float *) malloc(n * sizeof (float));
    return v;
}

void fillArray(float *v, int n) {
    int i;
    srand(time(0));
    for (i = 0; i < n; i++) {
        v[i] = (rand() % 10) + 1;
    }


}

void printArray(float *v, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("sayi: %.2f\n", v[i]);
    puts("");
}

float topla(float *v, int n) {
    int i;
    float toplam = 0;
    for (i = 0; i < n; i++) {
        toplam += v[i];
        printf("toplam: %f\n", toplam);
    }
    return toplam;

}