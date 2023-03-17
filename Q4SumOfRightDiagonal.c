/*Write a program in C to find the sum of right diagonals of a matrix.*/
#include<stdio.h>
int main()
{
    int m1[3][3]={{2,3,4},{6,7,8},{3,6,9}};
    int sum=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum+=m1[i][j];
            }
        }
   }
   printf("sum of right diagonal is %d",sum);
   return 0;
}