#include <stdio.h>

int main(){
	char ch;
	printf("Enter Value:");
	scanf("%c", &ch);
	(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')?printf("Entered value is a character"):printf("Entered value is not a character");
	return 0;
}
