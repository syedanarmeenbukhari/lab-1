#include<stdio.h>
int main()
{
	int unit;
	float Bill,Discount,Finalbill;
	
	printf("enter unit consumed :");
	scanf("%d",&unit);
	
	printf("enter bill amount :");
	scanf("%f",&Bill);
	
	if(unit < 100)
	{ 
	  Discount = Bill* 0.10;
	  Finalbill = Bill - Discount;
	  
	  printf("10%% discount applied \n");
	  printf("finalbill = %.2f",Finalbill); 
		
		
		
		
	}
	else
	   {

	   printf(" No discount applied ");
	   printf("Final bill = %.2f", Bill);
}
}
