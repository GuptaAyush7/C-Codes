#include <stdio.h>

int main(){
	float m1, m2, m3, m4, m5, t, a, p;
	printf("Ener Marks Of Subject 1:");
	scanf("%f", &m1);
	printf("Ener Marks Of Subject 2:");
	scanf("%f", &m2);
	printf("Ener Marks Of Subject 3:");
	scanf("%f", &m3);
	printf("Ener Marks Of Subject 4:");
	scanf("%f", &m4);
	printf("Ener Marks Of Subject 5:");
	scanf("%f", &m5);
	t = m1 + m2 + m3 + m4 + m5;
	a = t/5;
	p = t/500 * 100;
	printf("Total= %f \n", t);
	printf("Average= %f \n", a);
	printf("Percentage= %f \n", p);
	return 0;
}
