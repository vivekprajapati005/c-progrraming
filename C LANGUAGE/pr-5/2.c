# include<stdio.h>

main()
{
	int row,col,i,j,larg;
	printf("Enter row size: ");
	scanf("%d",&row);
	printf("Enter col size: ");
	scanf("%d",&col);
	int a[row][col];
	
	printf("\nEnter array elements");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
				printf("a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	 larg = a[0][0];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if (a[i][j] > larg)
			{
			larg =  a[i][j];
		    }
		}
	}
	printf("The larg elements is %d",larg);
	
}
