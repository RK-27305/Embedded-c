#include<stdio.h>
int main(){
	int rows,cols,n,count=1;
	printf("enter a number:");
	scanf("%d", &n);
	for(rows=1;rows<=n;rows++){
		for(cols=1;cols<=n-rows+1;cols++){
			printf("%c ",64+cols);
			
		}
		printf("\n");
	}
	return 0;}
