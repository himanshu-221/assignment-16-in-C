/*Write a program in C to find the sum of rows and columns of a Matrix*/

#include<stdio.h>
int main()
{
    int m1[3][3]={{2,3,0},{5,6,8},{2,4,6}};
    int Rsum[3]={0},Csum[3]={0},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<3 && j<3)
            {
                Rsum[i]+=m1[i][j];
                Csum[j]+=m1[i][j];
            }
        }
    }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         if(j<3)
    //         {
    //             Csum[j]+=m1[i][j];
    //         }
    //     }
    // }
    
    for(j=0;j<3;j++)
    {
        printf("Sum of columns%d= %d\n",j+1,Csum[j]);
    }
    for(i=0;i<3;i++)
    {
        printf("Sum of row%d= %d\n",i+1,Rsum[i]);
    }
    return 0;
}