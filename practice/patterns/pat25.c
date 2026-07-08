#include<stdio.h>
#include<math.h>
int main()
{
	int n,rows,cols,count;
	printf("enter a number: ");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++){

		for(cols=1;cols<=rows;cols++){
			count=pow(rows,cols);
			printf("%d ",count);
		}
		printf("\n");
	}
	return 0;
}
