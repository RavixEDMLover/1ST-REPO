#include<stdio.h>

int sum(int,int);

int main()

{
	int a;
	int b;
	int re;
	
	printf("\nEnter the first number");
	scanf("%d",&a);
	
	printf("\nEnter the second number");
	scanf("%d",&b);
	
	re= sum(a,b);
	
	printf("value : %d",re);
	
	
	
}

//call function

int sum(int a,int b){
	
	int j;
	int x;
	int y=0;
	
	for(j=a; j<=b; j++){
		
		x= j*j;
		y= y+x;
	}
	
	return y;
	
	
	
}










