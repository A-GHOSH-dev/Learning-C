#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    char str1[10];
    char str[20];

    printf("enter the 1st string lwrcase: ");
    gets(str);
    printf("enter the 2st string uppercase: ");
    gets(str1);

    printf("convert to uppercase: %s",strupr(str));
    printf("convert to lowercase: %s",strlwr(str1));

    getch();

}

//enter the 1st string lwrcase: vit
//enter the 2st string uppercase: BIT
//convert to uppercase: VITconvert to lowercase: BIT
