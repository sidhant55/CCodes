# include<stdio.h>

int reverse( int n, int rev) {
    if(n == 0)
        return rev; 
    return reverse(n / 10, rev * 10 + n % 10);
}
 

int main()
{
	int n;
   	printf("Enter number");
	scanf("%d",&n);
	int ans=reverse(n,0);
	printf("%d",ans);
}
