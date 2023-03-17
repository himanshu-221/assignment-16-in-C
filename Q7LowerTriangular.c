/*Write a program in C to print or display the lower triangular of a given matrix*/

#include<stdio.h>
int main()
{
    int m[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    printf("Lower triangle of given metrix is ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>=1 && j<i)
            {
                printf("%d\t",m[i][j]);
            }
        }
        printf("\n");
    }

    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         printf("%d\t",m[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}