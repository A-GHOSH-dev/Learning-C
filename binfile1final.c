#include<stdio.h>
#include<stdlib.h>
struct num
{
int p, q, r, s, t;

}n;
int main()
{
FILE *a;
n.p=1;
n.q=2;
n.r=3;
n.s=4;
n.t=5;
a=fopen("IFL.bin", "w");
fwrite(&n, sizeof(n), 1, a);
fclose(a);
a=fopen("IFL.bin", "r");
fread(&n,sizeof(n),1,a);
printf("\n p=%d,q=%d,r=%d,s=%d,t=%d", n.p,n.q,n.r,n.s,n.t);
fclose(a);
}
// p=1,q=2,r=3,s=4,t=5
