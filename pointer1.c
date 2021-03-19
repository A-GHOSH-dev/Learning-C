#include<stdio.h>
#include<conio.h>
int main(){
    int x=10;
    int *y;
    y=&x;
    printf("%d value of x\n",x);
    printf("%u address of x\n",&x);
    printf("%u address of x\n",y);
    printf("%d value of x\n",*y);
    printf("%u address of y\n",&y);
    return 0;

}
//10 value of x
//6422044 address of x
//6422044 address of x
//10 value of x
//6422032 address of y

