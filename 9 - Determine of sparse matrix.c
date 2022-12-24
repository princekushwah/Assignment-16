#include<stdio.h>
int main()
{
    int a[3][3]={1,0,0,4,0,5,0,3,0};
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>(3*3)/2)
        printf("Sparse matrix");
    else
        printf("Dense matrix");
}
