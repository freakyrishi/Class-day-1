#include <stdio.h>
#include <conio.h>
void main ()
{
int choice,num1,num2,res;
clrscr();
printf("press 1=addition");
printf("press 2=subtraction");
printf("press 3=multipication");
printf("press 4=division");
printf("enter the choice");
scanf("%d",&choice);
if(choice==1)
{
printf("enter 2 no for addition");
scanf("%d%d",&num1,&num2);
res=num1+num2;
printf("%d",res);
}
else
if(choice==2)
{
printf("enter 2 no for subtraction");
scanf("%d%d",&num1,&num2);
res=num1-num2;
printf("%d",res);
}
else
if(choice==3)
{
printf("enter 2 no for multiplicaton");
scanf("%d%d",&num1,&num2);
res=num1*num2;
printf("%d",res);
}
else
if(choice==4)
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

