#include<stdio.h>

 //function definition
	  
	  int sel(int x,int y)
	  
	  {
	  	char  Rk= 'R';
		  char Pr = 'P';
		  char Scr = 'S';

	  	
	  	
	  	
	  	
	  	if(x=='R' && y==1 || x=='P' && y==2 || x=='S' && y==3 ){
	  		
	  		return x=y;
		  }
	  	
	  	else if(x=='P' && y==1 || x=='S' && y==2 || x=='S' && y==1){
	  		
	  		return y>x;
		  }	  	
	  	
	  	
	  	else if(x==2 && y=='R' || x==3 && y=='P' || x==3 && y=='R'){
	  		
	  		 return x>y;
		  }
	    else{
	    	return 0;
		}
		  }    
	      
	      

int main()
{
	
	int x;
	int y;
	int p;
	
	printf("\nInput the letter(R/P/S)");
	
    scanf("%d",&x);
    
    printf("Input the computer choice(1/2/3)");
    
    scanf("%d",&y);
    
    //call function
    
              p=sel(x,y);
	

	      
		if(x=y){
		 
		printf("\nMatch ties");
	}
	
	else if(y>x){
		
		printf("\nYou lost");
	}

     else if(x>y){
     	
     	printf("\nYou won");
	 }
	 
	 else{
	 	 printf("\nGame over");
	 }
	      
	       
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
	      
}