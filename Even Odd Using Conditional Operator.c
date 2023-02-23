#include <stdio.h>

int main(){
	int a;
	printf("Enter Value of a:");
	scanf("%d", &a);
	a%2==0?printf("Number is Even"):printf("Number is Odd");
	return 0;
}
