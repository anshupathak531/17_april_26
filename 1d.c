#include<stdio.h>
int main()
{
    int n,i,a[n];
    printf("\n\n How many Element you want to store in array?");
    scanf("%d",&n);
    printf("\n\n Enter %d Elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n Element of the Array are:\n\n");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}