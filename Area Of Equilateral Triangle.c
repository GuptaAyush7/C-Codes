#include <stdio.h>
#include <math.h>

int main(){
	float l, a;
	printf("Enter Length Of Side:");
	scanf("%f", &l);
	a = pow(l, 2) * sqrt(3)/4;
	printf("Area= %f", a);
	return 0;
}
