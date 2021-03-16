#include<stdio.h>
#include<conio.h>
void add( int, int);
void add(int x1, int x2)
{
int sum = x1+x2;
printf("sum of %d and %d is %d\n", x1, x2, sum);
}
int main()
{
int n1, n2;

printf("enter the first number:");
scanf("%d", &n1);
printf("Enter the second number:");
scanf("%d", &n2);
add(n1, n2);
printf("END\n");
return 0;
}
