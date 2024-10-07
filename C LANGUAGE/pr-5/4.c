# include <stdio.h>

main()
{
	int i,j,row,col;
	
	 printf("Enter row size ");
	 scanf("%d",&row);
	
	printf("Enter col size ");
	scanf("%d",&col);
	
	int a[row][col];
	
	 printf("Enter array Elements");
	 
	 for(i=0; i<row; i++)
	 {
	 	for(j=0; j<col; j++)
	 	{
	 		printf("a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
     	}
     	printf("\n");
	 } 
	 printf("Enter the row no. ");
	 scanf("%d",&j);
	 
	 for(i=0; i<row; i++)
	 {
	 	printf("Elements from row %d",j);
	 	printf("%d",a[i][j]);
	 }
	 int sum=0;
	 for(i=0; i<row; i++)
	 {
	 	sum += a[i][j];
	 }
	 printf("sum of Elemets from row %d = ",i);
	 printf("%d",sum);
	 
	 printf("Enter col no. ");
	 scanf("%d",&i);
	 
	 for(j=0; j<col; j++)
	 {
	 printf("Elements from col %d = ",i);
	 printf("%d",a[i][j]);
     }
	 
	  sum =0;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
