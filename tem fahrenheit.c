// C/5=(F-32)/9=(K-273)/5

#include<stdio.h>
int main()
{
    double c,f;//c=centigrade; f=fahrenheit
    printf(" Enter the value of c =");
    scanf("%lf",&c);
    f=(c*1.8)+32;
    printf(" The Fahrenheit temperature is = %.3lf\n", f);
    return 0;
}

