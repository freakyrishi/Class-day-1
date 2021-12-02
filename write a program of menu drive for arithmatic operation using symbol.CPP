#include <stdio.h>
#include <conio.h>
void main ()
{
int,num1,num2,res;
char choice;
clrscr();
printf("press +=addition");
printf("press -=subtraction");
printf("press *=multipication");
printf("press /=division");
printf("enter the choice");
scanf("%c",&choice);
if(choice=='+')
{
printf("enter 2 no for addition");
scanf("%d%d",&num1,&num2);
res=num1+num2;
printf("%d",res);
}
else
if(choice=='-')
{
printf("enter 2 no for subtraction");
scanf("%d%d",&num1,&num2);
res=num1-num2;
printf("%d",res);
}
else
if(choice=='*')
{
printf("enter 2 no for multiplicaton");
scanf("%d%d",&num1,&num2);
res=num1*num2;
printf("%d",res);
}
else
if(choice=='/')
{
printf("enter 2 no for division");
scanf("%d%d",&num1,&num2);
res=num1/num2;
printf("%d",res);
}
else
{
printf("incorrect menu selected");
}
getch();

}

