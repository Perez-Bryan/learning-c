#include <stdio.h>

int main()
{
	int nc;

	nc = 0; 
	while (getchar() != EOF)
		++nc;
	printf("%1d\n", nc);
}
