#include <stdio.h>
int main()

{
	int n,i, sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	
	{
		if(i%2==0)
	{
		sum=sum+i;
	}
	}
	printf("\nsum of first %d even number:%d",n,sum);
	
	{
		int i,n, sum=0;
		rintf("enter a number\n");
        scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    {
    	printf("%d",2*i-1);
    	sum+=2*i-1;
	}
	    printf("\nsum of first %d odd number:%d",n,sum);
	}
	
		
}

