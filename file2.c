#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
FILE *a, *b;
char x[1000], y;
a=fopen("C.txt","w");

if(a==NULL)
{
printf("\nFile is not available");
exit(1);

}
printf("\nEnter the sentence: ");
gets(x);

fprintf(a, "%s",x);
fclose(a);
b=fopen("C.txt","r");
if(b==NULL)
{
printf("\nThe file s not available");
printf("%s",x);
}

}
