#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int a,b,sum=0;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}

int input()
{
    int x;
    printf("Enter the value:\n");
    scanf("%d",&x);
    return x;
}

int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

void output(int a,int b, int sum)
{
    printf("the sum of %d and %d is %d\n",a,b,sum);
}