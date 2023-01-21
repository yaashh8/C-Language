#include<stdio.h>
 
 main()
{
	int r,c;
	printf("enter no .of rows : ");
	scanf("%d",&r);
	
	printf("enter no. of column :");
	scanf("%d",&c);
    
    int a[r][c];
    for(int i=0;i<r;i++)     
    {
        for(int j=0;j<c;j++)
        {
        	printf("a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<r;i++)     
   {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<r;i++)   
    {
        int rsum=0;
        for(int j=0;j<c;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("\nSum of all the elements in row %d = %d\n",i,rsum);
    }
    
    
}