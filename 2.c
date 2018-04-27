#include <stdio.h>
#include <math.h>

int main(int argv, char **argc)
{
	int val;
	printf("Enter side");
	scanf("%d",&val);
	double root=sqrt(3);
	double area=(root*val)/((double)4);
	double peri=3*val;
	printf ("Area= %f and Cirmcuference= %f",area, peri);
}