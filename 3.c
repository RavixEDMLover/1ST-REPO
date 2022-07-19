#include<stdio.h>
//function declaration 

int area(int length);
int volume(int surfaceArea,int length);

int main()
{
	int length;
	int surfaceArea;
	int vol;
	
	printf("Enter the length of a side :");
	scanf("%d",&length);
	
	
	// call function 
	
	surfaceArea= area(length);
	vol=volume(surfaceArea,length);

	
	printf("\nSurface Area : %d",surfaceArea);
	printf("\nVolume : %d", vol);
	
	
	return 0;
	
	
}


//function definition

int area(int length) {
	
	int sArea;
	
	sArea= length * length;
	
	return sArea;
	
	}
	
int volume(int length, int surfaceArea){
	
	int vl;
	
	vl= length* surfaceArea;
	
	return vl;
}

 
 
 
 
 