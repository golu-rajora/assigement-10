//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int si(int a,int t,float r);
int main()
{
    int a,t,g;
    float r;
    printf("enter the ammount:-");
    scanf("%d",&a);
    printf(" Enter the interest rate:-");
    scanf("%f",&r);
    printf(" Enter the month:-");
    scanf("%d",&t);
    g=si(a,t,r);
    printf("per month  interest is=%d",g);
    getch();
    return 0;
}
int si(int a,int t,float r)
{
    return a*t*r/100;
}
