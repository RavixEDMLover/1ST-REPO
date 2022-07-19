#include<stdio.h>
int fact(int);
int main(){
	
	int n;
	int r;
	int nCr;
	
	printf("\nEnter a number for n ");
	scanf("%d",&n);
	
	printf("\nEnter a number for r  ");
	scanf("%d",&r);
	
	//call function fact
	
	 nCr =  fact(n)/(fact(r)* fact(n-r));
		
	 
	 printf(" value of %dC%d = %d\n",n,r,nCr);
	 return 0;
	
}
	
	
	
	//FUNCTION DEFINITION


int fact(int n){
	
	int j=1;
	int i=i;
	
	
	for(i=1; i<=n; i++){
		
		j= j*i;
			
	}
	return j;
	
	
	
	
	
	
	
	
	
	
	
}