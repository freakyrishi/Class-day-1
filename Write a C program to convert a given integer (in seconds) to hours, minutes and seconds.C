#include<stdio.h>
#include<conio.h>
void main()
{
int sec,h,m,s;
printf("enter sec");
scanf("%d",&sec);
h=sec/3600;
m=(sec-3600*h)/60;
s=sec-((3600*h-60*m));
printf("h%d\n m%d\n s%d\n",h,m,s);
getch();
}