#include <stdio.h>
#include <stdlib.h>
/*
Project: Calculator.
Author: Victor Otieno
Date: 29 Oct 2021
Compiler: GCC
License: MIT
*/
int main()
{
    int num1,num2,sub,mult,sum;
    float divide;
    int result=0, product=1;
    printf("\tCALCULATOR\n");
    printf("Enter the values to calculate\n");
    scanf("%d%d",&num1,&num2);
    sum=result+num1+num2;
    printf("The sum is %d\n",sum);
    sub=num1-num2;
    printf("The difference is %d\n",sub);
    divide=num1/num2;
    printf("The quoeficient is %f\n",divide);
    mult=product*num1*num2;
    printf("The product is %d\n",mult);
    return 0;
}
