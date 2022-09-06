#include<stdio.h>
#include<math.h>
int main()
{
    float trueval,approxval;
    printf("Enter the true value\n");
    scanf("%f",&trueval);
    printf("Enter the approximate value\n");
    scanf("%f",&approxval);
    float abs,rel,per;
    abs = fabs(trueval-approxval);
    rel = abs/trueval;
    per = rel*100;
    printf("absolute error is :%f\n",abs);
    printf("Relative error is:%f\n",rel);
    printf("Precentage error is:%f\n",per);
}
