#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[10],k,n,b;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the sum you want:");
	scanf("%d",&b);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[k]+a[j]==-a[i]+b)
				{
					break;
				}
			}
			if(a[k]+a[j]==-a[i]+b)
				{
					break;
				}
		}
		if(a[k]+a[j]==-a[i]+b)
				{
					printf("the triplet is %d,%d,%d\n",a[i],a[j],a[k]);
					if(k==(n-1))
					{
					break;
					}
				}
	}
return 0;	
}
