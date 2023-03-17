/*Write a program in C to accept a matrix and determine whether it is a sparse matrix.
*/
#include<stdio.h>
int main()
{
    int m[3][3];
    int i,j;
    printf("Enter values for metrix;\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int size=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j] != 0)
            {
                size++;
            }
        }
    }

    if(size > (9/2))
    {
        printf("This metrix is not a sparse metrix");
    }
    else{
        printf("This metrix is sparse metrix");
    }
}