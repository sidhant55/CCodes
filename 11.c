#include<stdio.h>

void find(float *p)
{
double val=(9/5.0)*(*p)+32;
*p=val;
}

int main()
{
printf("Enter temp in degree");
float tmp;

scanf("%f",&tmp);

find(&tmp);
printf("%f",tmp);
}
