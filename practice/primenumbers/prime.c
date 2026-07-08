#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n<=1){
		printf("given is not a prime number");
	}
	else{
		
	for(i=2;i<=n;i++){
		if(n%i==0){
			count++;}
	}
	}
	if(count>2){
		printf("given number is not prime ");
	}
	else{
		printf("given number is prime");}

}
