/***********************************
MMIR01. Recursion C
Factorial: n! = n * (n-1!)
************************************/

#include <stdio.h>

long int factorial (int n);

int main()
{
	int n = 0;
	int res = 0;
	printf("Introduce a positive integer:\n");
	scanf("%d", &n);
	res = factorial(n);
	printf("Result: %d\n", res);
	
	return 0;
}

long int factorial (int n){
int res = 0;
	if (n>0)
		res = n*factorial(n-1);
	else
		res = 1;
	return res;
}