#include "hafta4_ornek5_header.h"

int topla(int a, int b){
	return a+b;
}
int cikar(int a, int b){
		return a-b;
}
int ascii(char c){
		return 0;
}
int faktoritel(int sayi){
	int i;
    int sonuc=1;
	for(i=1; i<=sayi; sayi--){
		if(sayi>0){
			sonuc=sayi*sonuc;
		}
	}
	return sonuc;
}


