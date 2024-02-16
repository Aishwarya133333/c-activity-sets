#include<stdio.h>
struct complex_number
{
    float real;
    float img;
};
typedef struct complex_number complex;

complex input();
complex find_sum(complex c1, complex c2);
void output(complex c1, complex c2, complex sum);

int main()
{
    complex c1,c2,sum;
    c1=input();
    c2=input();
    sum=find_sum(c1,c2);
    output(c1,c2,sum);
    return 0;
}
complex input()
{
    complex c;
    printf("Enter the real part\n");
    scanf("%f",&c.real);
    printf("enter the img part\n");
    scanf("%f",&c.img);
    return c;
}
complex find_sum(complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}

void output(complex c1,complex c2, complex sum)
{
    printf("the sum is %.1f+i%.1f",sum.real,sum.img);
}
