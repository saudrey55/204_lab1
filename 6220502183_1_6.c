#include<stdio.h>

int main()
{
   int n,m,t,c;
   char z;

    scanf ("%d %d %d",&n,&m,&t);
   
    scanf (" %c",&z);
    c=(t-1)%(m+n);

    if (z=='R')
    {
        if(c<m)
        {
            printf("R");
        }
        else
        {
            printf("L");
        }
    }
    else if (z=='L')
    {
        if(c<n)
        {
            printf("L");
        }
        else
        {
            printf("R");
        }
    }
    
     
    return 0;
}