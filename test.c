int main(){

	int a=36,b=10,r;
	
	while(b > 0){

		r = a % b;
		a=b;
		b=r;
			
	}
	
 return a;
}