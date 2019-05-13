/***********************************
*MMIR01. Recursion C
Factorial: n! = n * (n-1!)
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
	if (n > m)
		res = GCD(n,m,m);
	else
		res = GCD(n,m,n);
	printf("Result: %d\n", res);
	
	return 0;
}

int GCD (int n, int m, int div){
if((n%div ==0) || (m%div == 0))
		res = div;
	else
		res = GCD(n,m,div-1);
	
	return res;
};