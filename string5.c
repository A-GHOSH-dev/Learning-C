#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    int x;
    //char str[20]="VIT VELLORE";
    char str[20];
    printf("enter the string: ");
    gets(str);
    x=strlen(str);
    printf("the length of given string is: %d",x);
    getch();

}
//enter the string: VIT VELLORE
//the length of given string is: 11

