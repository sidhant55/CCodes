#include <stdio.h>

#define PI 3.14159
 
int main(int argc, char** argv)
{	
	int val;
	printf("Enter radius");
	scanf("%d",&val );
    double area=PI*val*val;
    double circum=2*PI*val;
 	printf ("Area= %f and Cirmcuference= %f",area, circum);
    return 0;
}
