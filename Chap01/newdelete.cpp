#include <stdio.h>

int main()
{
	int* pi, *pj;

	pi = new int;
	pj = new int;
	*pi = 123;
	printf("*pi = %d\n", *pi);
	printf("*pj = %d\n", *pj);

	delete pi,pj;
}