#include<stdio.h>
#include<conio.h>
int main(){
    int *x;
    char *y;
    float *z;
    double *a;
    printf("%d size int\n",sizeof(int));
    printf("%d size char\n",sizeof(char));
    printf("%d size float\n",sizeof(float));
    printf("%d size double\n",sizeof(double));
    printf("%d size pointer int\n",sizeof(x));
    printf("%d size pointer char\n",sizeof(y));
    printf("%d size pointer float\n",sizeof(z));
    printf("%d size pointer double\n",sizeof(a));



return 0;
}
//4 size int
//1 size char
//4 size float
//8 size double
//8 size pointer int
//8 size pointer char
//8 size pointer float
//8 size pointer double
