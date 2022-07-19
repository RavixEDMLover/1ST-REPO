#include<stdio.h>

int gcd(int a,int b);

int main() {
	
	int a;
	int b;
	int GCD;
	
	printf("Enter the two numbers :");
	scanf("%d %d",&a, &b);
	
	GCD= gcd(a,b);
	printf("The GCD of %d and %d = %d", a,b,GCD);
	
	return 0;
	
}

// call function to find GCD of two numbers

 int gcd(int a,int b)
{
  int G;
  
  for(int i=1; i<=a && i<=b; i++)
  {
  	if(a%i==0 && b%i==0){
  		
  		G=i;
	  }
	  }	
	
 return G;	
	
	
}

