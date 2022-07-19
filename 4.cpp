#include<stdio.h>

float run( float,int);

int main()
{
	
	float crr;
	int ov;
    float  scr;
	
	printf("\nEnter the current run rate :");
	scanf("%f",&crr);
	
	printf("\nEnter the num of overs played :");
	scanf("%d",&ov);
	
	// call function run with two parameters
	
	
	scr=run(crr,ov);
	
	printf("\nProjected Score : %d",scr);
	
	return 0;
	
}

float run(float crr, int ov){
	
	float totalscore;
	float scr;
	
	
	totalscore = crr * ov;
	
	scr = totalscore + crr*(20 - ov);
	
	return scr;
	
	
	
	
	
	
	
}










