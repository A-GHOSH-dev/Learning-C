#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){

    int x,y,z,p,q,r,s,t;
    clrscr();
    printf("Enter the two numbers: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    p=x-y;
    q=x*y;
    r=x/y;
    s=x%y;
    t=pow(x,y);
    printf("\nThe addition of x+y: %d",z);
    printf("\nThe substraction of x-y: %d",p);
    printf("\nThe multiplication of x*y: %d",q);
    printf("\nThe division of x/y: %d",r);
    printf("\nThe modulo of x and y: %d",s);
    printf("\nThe x to the power y is: %d",t);


}
