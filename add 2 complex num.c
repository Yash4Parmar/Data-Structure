// YASH PARMAR
// addition of two complex number
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};

int main ()
{
    struct complex num1,num2,sum;

    printf("enter real and imag. part of 1st comp. number :");
    scanf("%f%f",&num1.real,&num1.imag);
    printf("enter real and imag. part of 2nd comp. number :");
    scanf("%f%f",&num2.real,&num2.imag);

    sum.real=num1.real + num2.real;
    sum.imag=num1.imag + num2.imag;

    printf(" sum = %f = i %f",sum.real,sum.imag);
    return 0;
}
