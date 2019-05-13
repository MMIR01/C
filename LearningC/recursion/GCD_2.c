/***********************************
*MMIR01. Recursion C
Best way
************************************/

#include <stdio.h>

int GCD (int n, int m);

int main()
{
	int n = 0;
	int m = 0;
	int res = 0;
	printf("GCD\n");
	printf("Introduce a positive integer:\n");
	scanf("%d", n);
	printf("Introduce a second positive integer:\n");
	scanf("%d", m);
	res = GCD(n,m);
	printf("Result: %d\n", res);
	
	return 0;
}

int GCD(int a, int b)
{
	int res;
	if (a == b)
		res = a;
	else if (a > b)
		res = GCD(b, a - b);
	else
		res = GCD(a, b - a);
	return res;
}