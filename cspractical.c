#include<stdio.h>
int main ()
{
    float c,f;
    printf("enter the temperature in centigrade\n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The temperature after converting is %f Fahrenheit\n",f);
    return 0;
}