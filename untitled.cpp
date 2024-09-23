#include<stdio.h>
int main()
{
	int a[10],key,low,high,mid,i=0,n;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the key element");
	scanf("%d",&key);
	printf("enter the elements");
	scanf("%d",&a[i]);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	for(i=0;i<=n;i++)
	{
		if(key==mid)
		{
			printf("key found");
		}
		else if(key<mid)
		{
			printf("key found at position %d",i+1);
		}
		else
		{
			printf("key not found");
		}
		return 0;
	}
}
		
