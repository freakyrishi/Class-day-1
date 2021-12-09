/*      
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e*/

#include <stdio.h>
int main()
{
	int i,j;
	char a='A';
	for (i='a';i<='e';i++)
	{
		for(j='a';j<='e';j++)
		{
			printf(" %c",i);
		}
		printf("\n");
	}
}
