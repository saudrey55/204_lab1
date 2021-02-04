#include<stdio.h>

int main()
{
    float time;

    scanf ("%f",&time);

    if (time<12)
    {
        printf("%.2f a.m.",time);
    }
    else
    {
        printf("%.2f p.m.",time);
    }
    return 0;
}