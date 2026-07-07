#include<stdio.h>
int main(){
	int rows,cols,n,count=1;
	printf("enter a number:");
	scanf("%d", &n);
	for(rows=1;rows<=n;rows++){
		for(cols=1;cols<=rows;cols++){
			printf("%c ",64+rows);
			
		}
		printf("\n");
	}
	return 0;}
