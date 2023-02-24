#include<stdio.h>
int main()
{
    int i,j,a1[2][2],a2[2][2];
  	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)	
		{
			printf("enter element:");
			scanf("%d",&a1[i][j]);
		}
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
		{
	
			printf(" %d ",a1[i][j]);
		}
			printf("\n");
		}
			printf("second element ");
			
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
		{
			printf("enter element :");
			scanf("%d",&a2[i][j]);
		}
		}
		for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d ", a1[i][j] * a2[i][j]);
        }
        printf("\n");
    }
}
