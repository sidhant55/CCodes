#include <stdio.h>
int main()
{
	printf("Enter choice 1 or 2");
	int n;
	scanf("%d",&n);

	switch(n)
	{
		case 1:
		{
			printf("Enter sides a and b");
			int a,b;
			scanf("%d%d",&a,&b);
			int p=2*(a+b);
			int area=a*b;
			printf("Perimeter= %d , Area= %d",p,area);
			break;
		}
		case 2:
		{
			printf("Enter side of a square");
			int a;
			scanf("%d",&a);
			int p=4*a;
			int area=a*a;
			printf("Perimeter= %d , Area= %d",p,area);
			break;
		}
		default:
		{
			printf("Wrong choice");
		}
	}

}