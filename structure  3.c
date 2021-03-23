#include<stdio.h>
#include<conio.h>
struct stud{
int x;
float y;
char z;
}s,s1;
void add()
{
s.x=500;
printf("The value of s.x is %d\n",s.x);
}
void main()
{
struct stud a,b;
a.x=200;
s.x=100;
s.y=88.84;
s.z='c';
s1.x=900;
b.x=800;
printf("The value of x is %d\n",s.x);
printf("The value of y is %f\n",s.y);
printf("The value of z is %c\n",s.z);
printf("The value of a.x is %d\n",a.x);
printf("The value of b.x is %d\n",b.x);
printf("The value of s1.x is %d\n",s1.x);
add();
}
//The value of x is 100
//The value of y is 88.839996
//The value of z is c
//The value of a.x is 200
//The value of b.x is 800
//The value of s1.x is 900

//The value of s.x is 500
