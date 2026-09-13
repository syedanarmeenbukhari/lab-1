#include<stdio.h>
int main()
{
	
	int num1, num2;
	printf("enter 1st no :");
	scanf("%d",&num1);
	
	printf("enter 2nd no :");
	scanf("%d",&num2);
	
	if(num1==num2)
	  printf("num1 and num2 are equal");
	else if(num1>num2)
	  printf("num1 is greater than num2");
	  
	else
	  printf("num2 is greater than num1");  
}
