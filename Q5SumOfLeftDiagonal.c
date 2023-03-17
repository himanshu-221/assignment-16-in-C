/*Write a program in C to find the sum of left diagonals of a matrix*/
#include<stdio.h>
int main()
{
    int m1[3][3]={{1,2,3},{4,10,6},{7,8,9}};
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m1[i][j]==m1[j][i])
            {
                sum+=m1[i][j];
            }
        }
    }
    printf("Sum of left diagonal is %d",sum);
    return 0;
}