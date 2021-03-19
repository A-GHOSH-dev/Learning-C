#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x,i,*a;
    printf("enter size of array: \n");
    scanf("%d",&x);
    a=(int *) calloc(x,sizeof(int));
    if(a==NULL)
    {
        printf("Memory not available");

    }
    else
        {
            printf("Array elements are:\n");
        }
    for(i=0;i<x;i++)
    {
        printf("%d",*(a+1));
    }
    return 1;
}
//enter size of array:
//5
//Array elements are:
//00000
