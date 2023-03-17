/*Write a program to calculate the product of two matrices each of order 3x3.*/
#include<stdio.h>
int main()

{
    int m1[][3]={1,2,3,4,5,6,7,8,9};
    int m2[][3]={9,8,7,6,5,4,3,2,1};
    int mpro[3][3],sum,i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            mpro[i][j]=sum;
        }
    }

    printf("Product of those two mwtrices is\n");
    for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                printf("%d\t",mpro[j][k]);
            }
            printf("\n");
        }
    return 0;
}