#include <stdio.h>

int main(){
	int a, b;
	printf("Enter Value of a:");
	scanf("%d", &a);
	printf("Enter Value of b:");
	scanf("%d", &b);
	a>b?printf("a is greater"):printf("b is greater");
	return 0;
}
