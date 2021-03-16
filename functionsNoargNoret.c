#include<stdio.h>
#include<conio.h>
void add(); //function declaration
void add() //function define
{
int n1, n2, sum;
printf("enter the first number:");
scanf("%d", &n1);
printf("Enter the second number:");
scanf("%d", &n2);
sum= n1+n2;
printf("sum of %d and %d is %d \n", n1, n2, sum);
}
int main()
{
add();//function call
printf("END\n");
return 0;//can give any return value....makes code successfully executed
}
