#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0,i,j,sum1=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>=0)
            {
                sum=a[i][j]+sum;
            }
        }
    }
     printf("row sum ---> %d\n",sum);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[j][i]>=0)
            {
                sum1=a[j][i]+sum1;
            }
        }
    }
    printf("colomn sum --> %d ",sum1);
}
