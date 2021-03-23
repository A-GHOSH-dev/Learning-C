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

    struct stud s={2020,"India",99.99};
    //struct stud s;
    //s.regno=2020;
    //s.name="India";
    //s.marks=99.99;
    printf("The student info are: \n");
    printf("Regno is %d\n name of stud is: %c\n marks of the stud: %f\n",s.regno,s.name,s.marks);
}
