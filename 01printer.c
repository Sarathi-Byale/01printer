#include<stdio.h>
int main()
{
	printf("Enter the input:");
	int i;
	int j;
	int n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++){
			printf("01");
		}
		printf("\n");
	}
	
}
