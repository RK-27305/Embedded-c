#include<stdio.h>
int main()
{
	int n,rows,cols,spaces,count=5;
	char ch;
	ch=64;
	printf("enter number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++)
	{
		/*for(spaces=1;spaces<=n-rows;spaces++)
		{
			printf(" ");
		}
		ch++;*/
		for(cols=1;cols<=n-rows+1;cols++)
		{
			if(rows%2==0)
			{
			printf("*");
			}
			else
			{
				printf("%d",count);
				
			}	
		}
			printf("\n");
			count--;
	}
		return 0;
}
