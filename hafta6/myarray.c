
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {

    float *v1 = creatVector(N);
    fillArray(v1, N);
    printArray(v1, N);

    printf("Toplam: %f\n", topla(v1, N));

    return 0;
}

