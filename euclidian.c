#include<stdio.h>
int main(){

	int a,b,r;
 	printf("Two integer for GCD using Euclidian\n");
	printf("Enter the first number:");
	scanf("%d",&a);	
	printf("Enter the second number:");
	scanf("%d",&b);
	
	int c=a,d=b;
	
	
	while(b > 0){

		r = a % b;
		a=b;
		b=r;
			
	}

	printf("GCD of %d and %d = %d",c,d,a);
	
 return 0;
}