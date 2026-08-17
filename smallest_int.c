#include<stdio.h>

int main(){
	int a=5,b=24,c=3,d=12,e=13,f=16;
		
	if(a<b && a<c && a<d && a<e && a<f){
		printf("smallest is %d",a);
	}else if ( b<c &&b<d && b<e && b<f){
		printf("smallest is %d",b);	
	}else if (c<d && c<e&&c<f){
		printf("smallest is %d",c);
	}else if (d<e&&d<f){
		printf("smallest is %d",d);
	}else if (e<f){
		printf("smallest is %d",e);
	}else {
		printf("smallest is %d",f);
	}

return 0;
}