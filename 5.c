# include <stdio.h>

int main()
{
	int arr[10]={5,2,5,6,9,3,4,1,2,20};

	int l=sizeof(arr);

	printf("%d %d\n",arr[5], l);
	int i;
	int sum1=0,sum2=0;
	for (i=0;i<l/4;i++)
	{
		if (i%2==0)
			sum1=sum1+*(arr+i);
		else
			sum2=sum2+*(arr+i);
	}

	printf(" Odd =%d and Even=%d",sum2,sum1);

	return 0;
}