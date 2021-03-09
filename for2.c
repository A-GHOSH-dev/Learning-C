#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
printf("enter a number: ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
    sum=sum+i;

}
printf("sum of n numbers = %d \n", sum);
}
//sum of n numbers : input=5; output=15.
