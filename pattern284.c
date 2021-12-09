/*
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA*/

#include <stdio.h>
int main()
{
	int i,j;
	char a='A';
	for(i='E';i>='A';i--)
	{
		for(j=5;j>=1;j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
}
