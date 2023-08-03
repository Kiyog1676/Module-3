#include <stdio.h>;
int main()

{
	int day;
	printf("enter your day ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("monday");
			break;
			
		case 2:
			printf("tuesday");
			break;
			
		case 3:
			printf("wensday");
			break;
			
		case 4:
			printf("thursday");
			break;
			
		case 5:
			printf("frieday");
			break;
			
		case 6:
			printf("saturday");
			break;
			
		case 7:
			printf("subday");
			break;
			
	}
}