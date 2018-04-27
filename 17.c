#include <stdio.h>

void check(int n)
{
	int tmp=n;
	int sum=0;
	while(tmp>0)
	{
		int rem=tmp%10;
		sum=sum+(rem*rem*rem);
		tmp=tmp/10;
	}
	if (n==sum)
		printf("%d ",n);
}

void find(int n)
{
	int i;
	for (i=1;i<=n;i++)
	{
		check(i);
	}
}

int main()
{
	printf("Enter the number");
	int n;
	scanf("%d",&n);
	find(n);
}