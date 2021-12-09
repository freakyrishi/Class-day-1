/*
1
10
101
1010*/

#include <stdio.h>
int main()
{
	int r,c;                             //logic r/c=0 division
	for(r=1;r<=4;r++)                    //1))agar r=1 and c=r=1==1
	{                                      //2))agar r=2 c=1 then div nhi hoga to ans=1
		for(c=1;c<=r;c++)                  //and r=2 c=2 rhe division 0
		{                                //3)) r=3 c=1 then ans=1,,r=3 c=2
			printf("%d",c%2);            //
		}
		printf("\n");
	}
}
