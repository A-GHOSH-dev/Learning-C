#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    char str1[10];
    char str[20];

    printf("enter the 1st string: ");
    gets(str);
    printf("enter the 2st string: ");
    gets(str1);

    printf("the str is: %s",strcat(str1,str));
    getch();

}
//enter the 1st string: vit
//enter the 2st string: vellore
//the str is: vellorevit

