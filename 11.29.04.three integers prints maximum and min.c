#include<stdio.h>
int main()
{
int i,max,min,N,x;
printf("enter N:");
scanf("%d",&N);
max=0;
min=999;
for(i=1;i<=N;i++)
{
printf("enter x %d : " ,i);
scanf("%d" ,&x);
if(max<x)
max=x;
if(min>x)
min=x;
}
printf("\n max =%d" ,max);
printf("\nmin=%d" ,min);
return 0;
}
