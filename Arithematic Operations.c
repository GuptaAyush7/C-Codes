#include <stdio.h>

int main(){
	int a, b, s, d, p, m;
	float di;
	printf("Enter Value Of a:");
	scanf("%d", &a);
	printf("Enter Value Of b:");
	scanf("%d", &b);
	s = a + b;
	d = a - b;
	p = a * b;
	di = a / b;
	m = a % b;
	printf("Sum= %d \n", s);
	printf("Difference= %d \n", d);
	printf("Product= %d \n", p);
	printf("Division= %f \n", di);
	printf("Modulus= %d \n", m);
	return 0;
}
