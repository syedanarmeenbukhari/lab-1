#include<stdio.h>
int main()
{
	
	int no;
	printf("enter a number :");
	scanf("%d",&no);
	
	if(no % 3 == 0 && no % 5 == 0)
	    printf(" \"the number is divisible by 3 and 5 \" ");
	else
	    printf(" \"number is not divisible by both 3 and 5 \" ");    
}
