/*area=sqrt(s*(s-a)*(s-b)*(S-c))
s=(a+b+c)/2 */
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf(" Enter the value of a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=a+b+c;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf(" The area is= %.2lf", area);
    return 0;

}


