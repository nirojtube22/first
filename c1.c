#include<stdio.h>
#include<math.h>

int main(){
	
 
	printf(" Working \n");

	int a,b,c,d;
	float e;
	printf("enter x1:");
	scanf("%d",&a);

	printf("enter y1:");
	scanf("%d",&b );

	printf("enter x2:");	
	scanf("%d",&c );

	printf("enter y2:");
	scanf("%d",&d );
	
	
	int x=c-a;
	int y=d-b;
  	x=x*x;
	y=y*y;
	
    	e=sqrt(x+y);
	
	printf("%f",e);
	printf("\n last");
 	return 0;

}
