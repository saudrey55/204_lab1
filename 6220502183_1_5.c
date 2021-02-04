#include<stdio.h>

int main()
{
    int i,j,n,z,m;
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&array[i]);
    }
    m=array[0];
    for ( j = 1; j < n; j++)
    {
        if (array[j] > m)
        {
            z=j;
            m=array[j];
        }       
    }
    
    printf("%d %d",z+1,m);
    return 0;
}