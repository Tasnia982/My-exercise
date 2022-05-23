#include<stdio.h>
int main()
{
    double length,width,area;
    printf(" Enter the value of length and width :");
    scanf("%lf%lf",&length,&width);
    area=length*width;
    printf(" The area is= %.2lf", area);
    return 0;

}
