#include <stdio.h>

int main ()
{
	int num;
	
	// Input bilangan bulat positif
	printf("Masukkan bilangan bulat positif:")
	;scanf("%d", &num );
	
	// Mengcek apakah bilangan bulat ganjil atau genap
	if (num % 2 ==0) {
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
	return 0;
}
