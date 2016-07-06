#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,y,r,sum=0,count=0,cpy;
clrscr();
printf("enter the number");
scanf("%d",&n);
y=n;
cpy=n;
while(cpy!=0)
{
cpy=cpy/10;
count++;
}
while(n>0)
{
r=n%10;
sum=sum+pow(r,count);
n=n/10;
}
if(sum==y)
printf("the number is a armstrong no.");
else
printf("the number is not an armstrong no.");
getch();
}
