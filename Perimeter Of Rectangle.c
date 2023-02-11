#include <stdio.h>

int main(){
	float l, b, a;
	printf("Enter Length:");
	scanf("%f", &l);
	printf("Enter Breadth:");
	scanf("%f", &b);
	a = 2 * (l + b);
	printf("Perimeter= %f", a);
	return 0;
}
