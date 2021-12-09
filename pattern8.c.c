/*a
  ab
  abc
  abcd*/


#include <stdio.h>
int main()
{
	int r,c;
	for (r='a'; r<='d'; r++)
	{
		for (c='a'; c<=r; c++)
		{
			printf("%c",c);
		}
			printf("\n");
	}
}
