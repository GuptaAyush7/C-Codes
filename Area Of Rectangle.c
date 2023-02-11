#include <stdio.h>

int main(){
	float l, b, a;
	printf("Enter Length:");
	scanf("%f", &l);
	printf("Enter Breadth:");
	scanf("%f", &b);
	a = l * b;
	printf("Area= %f", a);
	return 0;
}
