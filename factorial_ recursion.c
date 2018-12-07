//FACTORIAL WITH RECURSION
#include<stdio.h>
int fact(int);
void main()
{
int a,i,fat=1,y;
printf("enter the element\n");
scanf("%d",&a);
y=fact(a);
printf("%d",y);
}


int fact(int x)
{
int fat=1,y;
if(x==0)
{
return 1;
}
if(x!=0)
{
y=x*fact(x-1);
return y;
}
}
