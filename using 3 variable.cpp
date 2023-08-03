#include <stdio.h>
int main()

{
	int x,y;
	printf("value of x & y : \n");
	scanf("%d%d",&x,y);
	
	printf("befor swaping the value of x & y :%d%d",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("\nafter swaping the value of x & y : %d%d",x,y);
	
	return(0);
}