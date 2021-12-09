/*

1234
aaaa
1234
aaaa   */

#include <stdio.h>
int main()
{
	int i,j;
	char a='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i%2==0)
			{
				printf("a");
			}
			else
			{
				printf("%d",j);
			}
			
		}
		printf("\n");
	}
}
