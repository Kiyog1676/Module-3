#include <stdio.h>
int main()

{
	int name[5];
	int location[5];
	int age;
	
	printf("enter your name \n");
	gets(name);
	printf("enter your location \n");
	gets(location);
	printf("enter your age \n");
	scanf("%s", &age);
	
	printf("%s \n", name);
	printf("%d \n", age);
	printf("%s \n", location);
}