#include <stdio.h>
int main()
{
	int r,c;
	for (r=1; r<=4; r++)
	{
		for (c=1; c<=r; c++)
		{
			printf("*");
		}
			printf("\n");
	}
}
