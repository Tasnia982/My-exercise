#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf(" Enter the 3 num :");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    avg=(float)sum/3;//type custing (32)
    printf( "The sum is = %d\n",sum);
     printf("The avg is=%f\n",avg);

    return 0;
}
