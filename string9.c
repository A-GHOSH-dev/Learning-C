#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    char str1[10];
    char str[20];
    int x;
    printf("enter the 1st string: ");
    gets(str);
    printf("enter the 2st string: ");
    gets(str1);
    x=strcmp(str,str1);

    printf("the compared str is: %d",x);
    getch();

}
//Return Value
//This function return values that are as follows −

//if Return value < 0 then it indicates str1 is less than str2.

//if Return value > 0 then it indicates str2 is less than str1.

//if Return value = 0 then it indicates str1 is equal to str2.



//enter the 1st string: vit
//enter the 2st string: vitvellore
//the compared str is: -1




//enter the 1st string: vit
//enter the 2st string: VIT
//the compared str is: 1




//enter the 1st string: vit
//enter the 2st string: vit
//the compared str is: 0




//enter the 1st string: vitt
//enter the 2st string: vit
//the compared str is: 1




//enter the 1st string: vi
//enter the 2st string: vit
//the compared str is: -1







