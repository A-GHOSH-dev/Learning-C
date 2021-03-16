#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
{
int temp = a;
a=b;
b = temp;
printf( "After swap:%d%d", a, b);
}

void main()
{
int x=5, y=10;
printf("Before swapping: %d %d", x, y);
swap(x, y);
printf("after swapping:%d%d", x, y);

}
