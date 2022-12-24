#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,1,5,6,1,1,9};
    int count=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
    }
    printf(" 1 -- maximum number of times  %d",count);
    return 0;
}
