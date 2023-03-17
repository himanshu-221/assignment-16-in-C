/* Write a program in C to find the row with maximum number of 1s*/

#include<stdio.h>
int main()
{
    int m[3][4]={{1,2,3,1},{1,1,7,0},{1,1,13,1}};
    int i,j,flag;
    int arr[3];
    for(i=0;i<3;i++)
    {
        flag=0;
        for(j=0;j<4;j++)
        {
            if(m[i][j] == 1)
            {
                flag++;
            }
        }
        arr[i]=flag;
    }
    int max=0,row;
    for(i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            row=i+1;
        }
    }
    printf("Maximum 1s in %d row",row);
    // for(i=0;i<3;i++)
    // {
    //     printf("%d\t",arr[i]);
    // }
    return 0;

}