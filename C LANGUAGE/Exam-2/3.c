#include <stdio.h>

main()
{
	int n,i,sum = 0;
	
	printf("Enter the number of Element : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the Element of array: \n");
	
	for(i=0; i<n; i++)
	{
	scanf("%d",&
	a[i]);
    }
    
    for(i=0; i<n; i++)
    {
    	if (a[i]>0)
    	{
    		sum +=  a[i];
		}
	}
	printf("The sum of all positive Values is: %d\n",sum);
}
