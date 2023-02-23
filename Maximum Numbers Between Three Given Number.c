#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter Value of a:");
	scanf("%d", &a);
	printf("Enter Value of b:");
	scanf("%d", &b);
	printf("Enter Value of c:");
	scanf("%d", &c);
	(a>b)&(a>c)?printf("a is maximum"):(b>a)&(b>c)?printf("b is maximum"):printf("c is maximum");
	return 0;
}
