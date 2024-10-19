#include <stdio.h>
main()
{
	int i,j,row,col;
	
	printf("Enter the row : ");
	scanf("%d",&row);
	printf("Enter the col : ");
	scanf("%d",&col);
	
	int a[row][col];
	
	printf("\n\narray input\n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
		printf("%d a[%d][%d] = ", i,j);
		scanf("%d",& a[i][j]);
     	}
     	printf("\n");
    }
    
	printf("\n\narray output\n\n");
	
	for(i=0; i<row; i++)
	{
		printf("%d a[%d][%d] = ", i,j);
		scanf("%d",& a[i][j]);
	}
}
