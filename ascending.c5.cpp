#include <stdio.h>
int main()

{
	int arr[max_size];
	int size;
	int i,j,temp;
	
	printf("enter size of array :");
	scanf("%d", &size);
	
	printf("enter elements in array :");

        for (i=0;i<size;i++)
        {
        	scanf("%d", &arr[i]);
	}
	
	for (i=0;i<size;i++)
	{
	for (j+i;j<size;j++)
	
	if(arr[i]>arr[j])
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	}
}
        printf("enter elements in ascending order :");
        foe(i=0;i<size;i++)
        {
        	printf("%d/t", arr[i])

	}






    