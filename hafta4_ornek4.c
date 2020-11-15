/*
#include <stdio.h>
#include <stdlib.h>

//  ------------------------------ amstrong sayi bulma iþlemi---------------

int main(int argc, char *argv[]) {
	 int num, originalNum, remainder, result = 0;
    printf("bir sayi giriniz: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d sayisi amstron sayi.", num);
    else
        printf("%d sayisi amstong sayi deðildir.", num);

	
}*/
