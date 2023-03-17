/*Write a program to calculate the sum of two matrices each of order 3x3.
*/

#include<stdio.h>
int main()
{
    int m1[3][3]={1,2,3,4,5,6,7,8,9};
    int m2[][3]={9,8,7,6,5,4,3,2,1};
    int msum[3][3]={0},i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            msum[i][j]=m1[i][j]+m2[j][i];
        }
    }

    printf("sum of these two metrices is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",msum[i][j]);
        }
        printf("\n");
    }
    return 0;
}