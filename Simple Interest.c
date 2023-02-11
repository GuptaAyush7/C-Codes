#include <stdio.h>

int main(){
	float p, r, t, si;
	printf("Enter Principal Amount:");
	scanf("%f", &p);
	printf("Enter Rate Of Interest(in %):");
	scanf("%f", &r);
	printf("Ener Time(in years):");
	scanf("%f", &t);
	si = (p * r * t)/100;
	printf("Simple Interest= %f", si);
	return 0;
}
