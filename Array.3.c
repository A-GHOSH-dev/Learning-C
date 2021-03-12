#include<stdio.h>
#include<conio.h>
void main()
{
    int i, large, a[6]={5,12,20,13,8,30};
    large = a[0];
    for (i=1; i<6; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
}

printf ("large: %d\n", large);
}

}


