#include<stdio.h>

int main(){
	
	int y;
	int x;
	int bd;
    
        
        
        printf("\nEnter the  first 5 digits of ID  :");
        scanf("%2d%3d",&y,&x);
	
	
	
		printf("year = 19%2d\n",y);
		printf("Whole dates = %3d\n",x);
        
        
        
        //calling function
        
        
        
               bd= int BD(x,y );
        
        
                printf("\nBirthday= %c %d ",month,day);
		        return 0;
	}


int BD(int x, int y ){


	
	int day;
	char month;
	
	
	
	if(x>335){
   	 day= x-335;
   	 month= 'December';
   	 
   	 return day;
   	 return month;
   	 
   }

   else if(x>305){
   	  day= x-305;
   	  month= 'November';
   	  
   	   return day;
   	 return month;
   	  
   }
    else if(x>274){
    	day=x-274;
    	month= 'October';
    	
    	 return day;
   	 return month;
    	
	}

    else if(x>244){
    	day= x-244;
    	month='September';
    	
    	 return day;
   	 return month;
    	
	}

    else if(x>213){
    	
    	day= x-213;
    	month='August';
    	
    	 return day;
   	 return month;
    	
	}

    else if(x>182){
    	
    	day=x-182;
    	month='July';
    	
    	 return day;
   	 return month;
    	
	}
	
	else if(x>152){
		
		day= x-152;
		month='June';
		
		 return day;
   	 return month;
		
	}
	         
	else if(x>121){
		
		day= x-121;
		month='May';
		
		 return day;
   	 return month;
		
	}         
	 
	 else if(x>91){
	 	
	 	day= x-91;
	 	month='April';
	 	
	 	 return day;
   	 return month;
	 	
	 } 
	 
	 else if(x>60){
	 	
	 	day= x-60;
	 	month='March';
	 	
	 	 return day;
   	 return month;
	 	
	 	
	 	
	 }
	 
	 else if(x>31){
	 	
	 	day= x-31;
	 	month='February';
	 	
	 	 return day;
   	 return month;
	 	
	 	
	 	
	 }
	 
	 else{
	 
	    day= x;
	    month='January';
	    
	     return day;
   	 return month;
	        
}
	         
	         
	         
	         
	         
	         
	         
	         
	         
	
	
	
	
	
	}
		
	
	
}
		
		
	
	
	
	
	
		
		
	
		
	
	
	
	
	
	
	
	
	
