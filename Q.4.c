//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void fna(int x);
int main()
{
    printf("print first N natural numbers:-\n");
    int x;
    printf("enetr a number:-");
    scanf("%d",&x);
    fna(x);
    return 0;
}
void fna(int x)
{
    for(int i=1;i<=x;i++)
    {
        printf(" %d",i);
    }
}
