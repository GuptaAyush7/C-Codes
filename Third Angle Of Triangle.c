#include <stdio.h>
#include <math.h>

int main(){
	int x, y, p;
	printf("Enter First Number:");
	scanf("%d", &x);
	printf("Enter Second Angle:");
	scanf("%d", &y);
	p = 180 - (x + y);
	printf("Third Angle= %d", p);
	return 0;
}
