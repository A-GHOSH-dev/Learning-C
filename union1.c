#include<stdio.h>
#include<conio.h>
union stu
{
    int x;
    char z;
    float y;
};
void main()
{


    union stu s;
    s.x=80;
    s.y=99.98;
    s.z='c';
    printf("\n x: %d\n",s.x);
    printf("\n y: %f\n",s.y);
    printf("\n z: %c\n",s.z);
}
//x: 1120400739

 //y: 99.979271

 //z: c
