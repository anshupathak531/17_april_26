#include<stdio.h>
int main()
{
    int array[5],n,c,d,swap;
    printf("\n\n How many Element you want to store in array?");
    scanf("%d",&n);
    printf("\n\n Enter %d Integers:" ,n);
    for(c=0; c<n; c++)
    {
        scanf("%d",&array[c]);
    }
    
    for(c=0; c<n; c++)
    {
        for(d=0; d<n-c-1; d++)
        {
            if(array[d] > array[d+1])
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }
    printf("\n\n Sorted Array in Ascending Order:\n\n");
    for(c=0; c<n; c++)
    {
        printf("%d ",array[c]);
    }
    return 0;
}