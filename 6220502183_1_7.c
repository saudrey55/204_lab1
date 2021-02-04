#include<stdio.h>
#include<string.h>
int main()
{
    float time;
    char z[];

    scanf ("%f",&time);

    if (time<12)
    {
         strcpy(z,"a.m.");
        //printf("%.2f a.m.",time);
    }
    else
    {
        strcpy(z,"p.m.");
        time=time-12;
        //printf("%.2f p.m.",time);
    }
    if (time==0)
    {
        time=12;
    }
    
    return 0;
}