#include<stdio.h>

int sum(int,int);
int main() {
	
	int num1;
	int num2;
	int add;
	
	printf("\nEnter the first num :");
	scanf("%d",&num1);
	
	
	printf("\nEnter the second num :");
	scanf("%d",&num2);
	
	// call function sum with two parameters

   add= sum(num1,num2);
   
   printf("\nAdditon : %d",add);
   
   return 0;
   
}
int sum( int num1, int num2) {
	
	int add;
	
	add= num1 + num2;
	
	return add;
}