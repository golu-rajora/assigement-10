//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int main()
{
    int x;
    printf("calculate the factorial of a number:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    printf("%d number of factorial is = %d",x,fact(x));
    return 0;
}
int fact(int x)
{
    int s=1;
    for(int i=1;i<=x;i++)
    {
        s=s*i;
    }
    return s;
}
