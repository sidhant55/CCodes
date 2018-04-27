#include<stdio.h>

int gen(int n, int *arr)
{
	if (n==0)
	{
		arr[0]=0;
		return 0;
		}
	else if (n==1)
	{
		arr[1]=1;
		return 1;
		}
		
	if (arr[n]!=0)
		return (arr[n]);
	
	arr[n]=(gen(n-1,arr)+gen(n-2,arr));	
	return arr[n];
}

int main()
{
	printf("Enter no of terms");
	int n;
	scanf("%d",&n);
	
	int arr[100];
	
	int i;
	
	for ( i=0;i<=n;i++)
	arr[i]=0;
	
	gen(n,arr);
	
	for ( i=0;i<n;i++)
	printf("%d ",arr[i]);
	

}
