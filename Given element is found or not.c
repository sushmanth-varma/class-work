#include <stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  int n,i,e,f=0;
  n=sizeof(a)/sizeof(a[0]);
  printf("enter element to search");
  scanf("%d",&e);

  for(i=0;i<n;i++)
    if (a[i]==e)
       f=1;
  if(f==1)
     printf("Found");
  else
     printf("Not found");
	return 0;
}
output:
enter element to search4
Found
