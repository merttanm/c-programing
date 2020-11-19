#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main(int argc, char** argv) {

    srand(time(NULL));
    int sayilar[3] = {0};
    int rnd, i;

    for (i = 0; i < 1000; i++) {
        rnd = rand() % 3;
        sayilar[rnd]++;

    }
    for (i = 0; i < 3; i++) {
        printf("%d den %d kere \n", i, sayilar[i]);
    }

    return 0;
}