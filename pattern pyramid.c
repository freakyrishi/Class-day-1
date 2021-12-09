 /*          *
            * *
           * * *
          * * * *                     */

#include <stdio.h>
int main()
{
	int a,b,space;
	
	for(a=1;a<=4;a++)
	{
		for(space=0;space<=(40-a);space++)
		{
			printf(" ");
		}
		for (b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
    }
    
}
