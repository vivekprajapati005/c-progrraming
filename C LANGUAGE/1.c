# include <stdio.h>

main()
{	
       int size,i;
       
       printf("Enter the size of array : ");
	   scanf("%d", &size);
	   
	   int a[size];
	   
	   printf(" Enter array Elemenets:\n");
	   for(i=0; i<size; i++)
	   {
	   	printf("a[%d] = ",i);
	   	scanf("%d", &a[i]);
	   }
	  printf("Negative Elements from array");
	  
	  for(i=0; i<size; i++)
	  {
	  	if(a[i] < 0)
	  	printf("% d",a[i]);
	  }
	  
}



