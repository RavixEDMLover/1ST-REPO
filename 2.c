#include<stdio.h>
int main()
{
	int Count;
	
	
		// calling function
	
	Count= ct();
	 return 0;
	}



int ct() {
	  int count = 0 ;
	 int i;
	 int n;
	 
	printf("\nEnter the number :");
	scanf("%d",&n);
	 
	 for(i=n+1; i<10; i++){
	 	
	 	   count= count+1;}
	 	    
	 	    printf("%d\n",count);
	 
	 
	 for(i=9; i>=n; i--){
	 	
	 	count= count-1;}
	 	
	 	 printf("%d\n",count);
	 
          
	        
	
}
 
 




