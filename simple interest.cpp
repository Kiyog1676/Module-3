#include <stdio.h>
int main()

{
	float P , R , T , Si ;
	
	printf("enter p(payment) :");
	scanf("%f", &P);
	
	printf("enter r(rate) :");
	scanf("%f", &R);
	
	printf("enter t(time) :");
	scanf("%f", &T);
	
	Si = (P*R*T)/100;
	
	printf("simple interest=%f", Si);
}