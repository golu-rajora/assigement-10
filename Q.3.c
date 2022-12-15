//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int eo(int x);
int main()
{
    int x;
    printf(" check whether a given number is even or odd:-\n");
    printf("enter a number:-");
    scanf("%d",&x);
    if(eo(x)==0)
        printf("it is even number");
    else
        printf("it is odd number");
    getch();
    return 0;
}
int eo(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}

