#include<stdio.h>
int main()
{

    float fahr,celsius;
    int lower=0,upper=300,steps=20;
    fahr=lower;
    while(fahr<=upper)
    {
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr=fahr+steps;
    }
}