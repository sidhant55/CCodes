# include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three number");
	scanf("%d %d %d",&a,&b,&c);

	double ans=(a+b+c)/3.0;

	printf("Median %f",ans);
}