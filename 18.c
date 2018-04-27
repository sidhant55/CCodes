# include <stdio.h>

int main()
{
	printf("Enter the number");
	int n;
	scanf("%d",&n);

	int mult=1;
	for (int i=1;i<n;i++)
	{
		if (n%i==0)
			mult*=i;

	}
	if (mult==n)
		printf("yes");
	else
		printf("no");
}