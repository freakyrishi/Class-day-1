
/*
                                         1
                                        1 2
                                       1 2 3
                                      1 2 3 4      */

#include <stdio.h>
int main()
{
	int i,j,space;
	for(i=1;i<=4;i++)
	{
		for(space=0;space<=(40-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
}
