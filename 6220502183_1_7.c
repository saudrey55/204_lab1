#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    float time;
    int a,b;
    char z[10];

    scanf ("%f",&time);
    
    if (time<12)
    {
        strcpy(z,"a.m.");  
    }
    else
    {
        strcpy(z,"p.m.");
        time=time-12;
    }
    if (time==0)
    {
        time=12;
    }
    a=time;
    b=round((time-a)*100); 
    printf("%d:%d %s",a,b,z);
    return 0;
}