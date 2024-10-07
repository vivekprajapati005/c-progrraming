# include <stdio.h>

main()
{
	
	int i,j, row;
	printf("Enter row & col size ");
	scanf("%d",&row);

	int a[row][row];
	
	printf("\n Enter array Elements\n\n");
	 
	 for(i=0; i<row; i++)
	 {
	 	for(j=0; j<row; j++)
	 	{
	 		printf("a[%d][%d] = ",i,j);
	 		scanf("%d",&a[i][j]);
		}
	 }
	
}
