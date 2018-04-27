# include <stdio.h>

int main()
{
	printf ("Enter three number");
	int a,b,c;
	scanf ("%d %d %d",&a,&b,&c);

	int ans=a>b>c?a:b>c?b:c;

	printf("Max number %d",ans);
	return 0;
}