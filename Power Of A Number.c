#include <stdio.h>
#include <math.h>

int main(){
	int x, y, p;
	printf("Enter Number:");
	scanf("%d", &x);
	printf("Enter Power:");
	scanf("%d", &y);
	p = pow(x, y);
	printf("Answer= %d", p);
	return 0;
}
