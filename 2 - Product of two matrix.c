#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,3,8,7};
    int b[3][3]={1,-1,2,3,5,7,8,9,6};
    int c[3][3];
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
              sum = a[i][k]*b[k][j]+sum;
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
