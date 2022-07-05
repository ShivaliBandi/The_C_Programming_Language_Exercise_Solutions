#include<stdio.h>
int main()
{

    float fahr,celsius;
    int lower=0,upper=300,steps=20;
    celsius=upper;
    while(celsius>=lower)
    {
        fahr=((9.0/5.0)*celsius)+32.0;
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        celsius=celsius-steps;
    }
}