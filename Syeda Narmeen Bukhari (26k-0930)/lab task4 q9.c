#include<stdio.h>
int main()
{
	char signal;
	
	printf("enter signal letter (R, Y, G) :");
	scanf(" %c",&signal);
	
	
	switch(signal)
	{
		
		
		case 'R':
			printf("stop");
			break;
			
		case 'Y':
			printf("wait");
			break;
			
		case 'G':
			printf("go");
			break;
			
		default :
		    printf("no instruction");			
	}
	
	
}
