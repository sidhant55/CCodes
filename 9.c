# include<stdio.h>

int main()
{
	int n;
	printf("Enter no of subjects\n");
	scanf("%d",&n);
	char arr[100][100];
	printf("Enter Subjects\n");
	int i,j;
	for (i=0;i<n;i++)
		scanf("%s",arr[i]);

	printf("Enter no of students\n");
	int no;
	scanf("%d",&no);
	int brr[100][100];
	for (i=0;i<no;i++)
	{
		for (j=0;j<n;j++)
		scanf("%d",&brr[i][j]);
	}

	for (i=0;i<n;i++)
	printf("%s\t",arr[i]);
		
	printf("\n");

	for (i=0;i<no;i++)
	{
		for (j=0;j<n;j++)
		printf("%d\t",arr[i][j]);
		printf("\n");
	}

}
