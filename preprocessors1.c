#include<stdio.h>
#include<conio.h>
#ifndef INFO
#define INFO"\nwelcome to VIT\n"
#endif // INFO
#define info_for(x,y)\
printf(#x" "#y":C prog\n")
//#-stringize-converts parameters into strings
#define bill(z) printf("bill" #z "=%d",bill##z)
//Tokenpasting combines 2 arguments
//all preprocessors
int main()
{
    int bill100=200;
    printf(INFO);
    //predefined macros
    printf("The date is: %s\n",_DATE_);
    printf("The time is: %s\n",_TIME_);
    printf("The file is: %s\n",_FILE_);
    printf("The line number is: %s\n",_LINE_);
    //printf("The write message is:",INFO);
    info_for(INDIA,VELLORE);
    bill(100);//bill is a macro
    return 0;
}
