#include <stdio.h>
int main()
{
	int tmp;
	int *a;
	int *b;
	a = 1;
	b = 2;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("%d", a);
	return (0);
}
