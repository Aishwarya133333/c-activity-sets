//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter the first number:");
    scanf("%d",&x);

    printf("Enter the second number:");
    scanf("%d",&y);

    if(x>=0&&y>=0)
    {
        sum= x+y;
        printf("%d\n",sum);
    }
    return 0;
}
