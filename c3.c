#include<stdio.h>
#include<math.h>

int main(){
 	
	int n;

	printf(" Enter the value of given data:");
	scanf("%d",&n);

	float a[n];
	float b[n];

	float c,d;

	printf("enter x1s:");

	for(int i=0; i<n; i++)
	{
	 scanf("%f",&a[i]);
	}

	printf("enter y1s:");

	for(int i=0; i<n; i++)
	{
	scanf("%f",&b[i]);
	}
	
	int done=1;
	while(done==1){

		printf("enter x2:");	
		scanf("%f",&c );

		printf("enter y2:");
		scanf("%f",&d );
	
		float x[n];
		float y[n];
		for(int i=0; i<n; i++)
		{
		 x[i]=c-a[i];
		 y[i]=d-b[i];
		
		 x[i]=x[i]*x[i];
		 y[i]=y[i]*y[i];	
	
		}	
 	 
  	  	float dis[n];
		for(int i=0; i<n; i++)
		{
	 	 dis[i]= sqrt(x[i]+y[i]);

		}
	
		for(int i=0; i<n; i++)
		{
		  printf("%f\n",dis[i]);
		}

	 printf("enter 1 to continue\n");
	 scanf("%d",&done);
	}

	printf("\n last");

 	return 0;

}
