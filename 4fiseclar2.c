#include<stdio.h>
void main()
{
	int arr[5]={2,3,4,5,6};
	int first=arr[0];
	int second=arr[0];
	int i,j;
	for(i=0;i<5;i++)
	{
		if(first<arr[i])
		{
			first=arr[i];
		}
	}
	for( i=0;i<5;i++)
	
	{
	
	if(second<arr[i]&&(first !=arr[i]))
	{
		second=arr[i];
	}
	}
	printf("the first and second largest in array are %d and %d",first,second);
}
