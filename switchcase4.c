#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,z;
    char n;
    printf("Enter an operator: ");
    scanf("%c",&n);
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);


    switch(n)
    {
    case '+':
        z=x+y;
        printf("The sum is %d",z);
        break;
    case '-':
        z=x-y;
        printf("The diff is %d",z);
        break;
    case '*':
        z=x*y;
        printf("The multiplication is %d",z);
        break;
    case '/':
        z=x/y;
        printf("The division  is %d",z);
        break;
    default:
        printf("Invalid");
    }






}


