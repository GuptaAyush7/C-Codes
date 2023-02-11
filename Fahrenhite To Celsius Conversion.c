#include <stdio.h>

int main(){
	float c, f;
	printf("Enter Temperature in Farhenite:");
	scanf("%f", &f);
	c = (f - 32) * 5/9;
	printf("Temperature In Celsius= %f", c);
	return 0;
}
