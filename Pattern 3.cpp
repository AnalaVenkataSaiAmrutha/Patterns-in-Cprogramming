/* Pattern 3 */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
	return 0;
}
