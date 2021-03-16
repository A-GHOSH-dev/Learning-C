
#include<stdio.h>
#include<conio.h>
int add( int, int);
int add(int n1, int n2)
{
int z = n1+n2;
return z;
}
int main()
{
int x, y, sum;

printf("enter the first number:");
scanf("%d", &x);
printf("Enter the second number:");
scanf("%d", &y);
sum = add(x, y);
printf("sum is %d", sum);
return 0;
}
