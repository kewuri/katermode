#include <stdio.h>
#include "std.h"

// программа является учебной 

int main(){
	int a, b;
	printf("Enter integer A and integer B from keyboard\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The sum of A and B is %d", a+b);
	printf("The minus of A and B is %d", a-b);
	printf("The division of A and B is %d\n", a/b);
	return 0;
}
