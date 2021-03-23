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
    printf("Regno is %d\n name of stud is: %s\n marks of the stud: %f\n",s.regno,s.name,s.marks);
    //printf("The regno of stud is:%d\n",s.regno);
    //printf("The name of stud is:%s\n",s.name);
    //printf("The marks of stud is:%f\n",s.marks);

}
//The student info are:
//Regno is 2020
 //name of stud is: India
 //marks of the stud: 99.989998
