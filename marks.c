#include<stdio.h>
void sumavg(float, float, float, float*, float*);
int main()
{
    float sub1, sub2, sub3, s, a;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    sumavg(sub1, sub2, sub3, &s, &a);
    printf("Sum of marks: %f\n", s);
    printf("Average of marks: %f", a);
    return 0;
}

void sumavg(float s1, float s2, float s3, float*sum, float*avg)
{
    *sum=s1+s2+s3;
    *avg=(*sum)/3;
}