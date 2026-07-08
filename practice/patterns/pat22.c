#include<stdio.h>
int main()
{
	int n,rows,cols,spaces;
	char ch;
	ch=65;
	printf("enter number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++)
	{
		/*for(spaces=1;spaces<=rows-1;spaces++)
		{
			printf(" ");
		}*/
		for(cols=1;cols<=rows;cols++)
		{
			printf("%c",ch);
			ch++;
		}
			printf("\n");
	}
		return 0;
}
