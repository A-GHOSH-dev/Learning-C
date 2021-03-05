#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){

    int x,y,z,p,q,r,s,t;

    printf("Enter the one numbers: ");
    scanf("%d",&x);
    y=x;
    printf("\nThe value of y: %d",y);
    y+=x;
    printf("\nThe value of y: %d",y);
    y-=x;
    printf("\nThe value of y: %d",y);
    y*=x;
    printf("\nThe value of y: %d",y);
    y/=x;
    printf("\nThe value of y: %d",y);
    y%=x;
    printf("\nThe value of y: %d",y);
    floor(y/x);
    printf("\nThe value of y: %d",y);

}

