#include<stdio.h>
#include<conio.h>
struct stud
{
    int regno;
    char name[30];
    float marks;
};
void main()
{


    struct stud s;

    printf("The student structure size:%d \n",sizeof(struct stud));
    printf("The student structure size:%d \n",sizeof(s));
}
//The student structure size:40
//The student structure size:40
