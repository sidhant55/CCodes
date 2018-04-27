# include<stdio.h>
# include<math.h>
int main(int n, int *val[])
{
	int a=atoi(val[1]);
	int b=atoi(val[2]);
	int c=atoi(val[3]);

	int alt=b*1.0*b-4.0*a*c;
	double y=sqrt(alt);
	double x1=(-b+y)/(2.0*a);

	printf("%f",x1);

}
