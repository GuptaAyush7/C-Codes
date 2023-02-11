#include <stdio.h>
#include <math.h>

int main(){
	int x, y, p;
	printf("Enter Base:");
	scanf("%d", &x);
	printf("Enter Height:");
	scanf("%d", &y);
	p = 0.5 * x * y;
	printf("Answer= %d", p);
	return 0;
}
