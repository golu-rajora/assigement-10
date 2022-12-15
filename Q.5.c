//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int x);

int main()
{
    printf(" print first N odd natural numbers:-\n");
    printf("enter a number:-");
    int x;
    scanf("%d",&x);
    odd(x);
    return 0;
}
void odd(int x)
{
    for(int i=0;i<=2*x;i++)
    {
        i=i+1;
        printf(" %d",i);
    }
}
