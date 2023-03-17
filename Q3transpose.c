/*Write a program in C to find the transpose of a given matrix.*/
#include<stdio.h>

int main()
{
    int m1[3][3]={{2,3,4},{7,8,9},{3,6,9}};
    int trns[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            trns[i][j]=m1[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trns[i][j]);
        }
        printf("\n");
    }
    return 0;
}