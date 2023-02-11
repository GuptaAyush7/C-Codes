#include <stdio.h>

int main(){
	float l, m, k;
	printf("Enter Length In Centimeter:");
	scanf("%f", &l);
	m = l / 100;
	k = m / 1000;
	printf("Length in Meter= %f", m);
	printf("Length in Kilometer= %f", k);
	return 0;
}
