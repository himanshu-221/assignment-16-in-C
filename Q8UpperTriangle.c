/*Write a program in C to print or display an upper triangular matrix.*/

#include<stdio.h>
int main()
{
    int m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i>=0 && j>i)
            {
                printf("%d\t",m[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}