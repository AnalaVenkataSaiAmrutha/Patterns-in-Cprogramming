/*Pattern 6
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",j+65);
		}
		printf("\n");
		
	}
	return 0;
}
