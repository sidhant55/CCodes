# include<stdio.h>

int main()
{
	printf("Enter size and elements");
	int n;
	int arr[100];
	scanf("%d\n",&n);
	
	int i;
	for ( i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for (i=0;i<n;i++)
	{
		int j=0,c=0;
		for (j=1;j<=arr[i];j++)
		{
			if (arr[i]%j==0)
			c++;
			}
		if (c==2)
		printf("prime no %d \n",arr[i]);
	}
	
}
