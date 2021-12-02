#include <stdio.h>
#include <conio.h>
void main()
{
int r;
clrscr();
r=1;
while(r<=20)
{
if(r%4==0)
{
printf("%d",r);
}
r=r+1;
}
getch();
}