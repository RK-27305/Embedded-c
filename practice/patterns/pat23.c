#include<stdio.h>
int main()
{
	int n,rows,cols,spaces;
	char ch;
	ch=64;
	printf("enter number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++)
	{
		for(spaces=1;spaces<=n-rows;spaces++)
		{
			printf(" ");
		}
		ch++;
		for(cols=1;cols<=2*rows-1;cols++)
		{
			if(rows==1||cols==1||cols==2*rows-1)
			{
			printf("%c",ch);
			}
			else
			{
				printf("*");
			}	
		}
			printf("\n");
	}
		return 0;
}
