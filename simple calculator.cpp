#include <stdio.h>
int main();

{

	int number1, number2, addition, subtraction, multiply, 
	float divided;

	printf("enter number1,\n");
	scanf("%d", number1);
	
	printf("enter your number2,\n");
	scanf("%d", &number2);
	
	addition=number1+number2;
	substraction=number1-number2;
	multiply=number1*number2;
	divided=(float)number1/number2;
	
	
	
	printf("addition=%d\n,addition");
	printf("subtraction=%d\n,subtraction");
	printf("multiply=%d\n,multiply");
	printf("divided=%.2f\n,divided");
	
	return(0);
}
