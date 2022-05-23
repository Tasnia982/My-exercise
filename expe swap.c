/* akhan a num1 ar num2 proti khtra sane tai 1st instraction a - hoi pora oi ta
nia num2 tha kj hoi akhan a num1=56 2nd tay nay na*/

#include<stdio.h>
int main()
{
    int num1 =56,num2=34;
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("num1 = %d\n",num1);
    printf("num2=%d\n",num2);
    return 0;

}

