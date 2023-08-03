#include <stdio.h>
int main()

// year to day 
{
	int d,y;
	printf("enter the number of year :");
	scanf("%d",&y);
	
	d=y*365;
	
	printf("day int the %d year=%d", y,d);
	
// days to year 

    printf("enter the number of days :");
    scanf("%d", &d);
    
    y=d/365;
    
    printf("day in the %d year =%d", d,y);
}