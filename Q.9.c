//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int con(int n,int d);
int main()
{
    printf("check whether a given number contains a given digit or not:-");
    printf("\n enter a number:-");
    int n,d;
    scanf("%d",&n);
    printf("enter a digit:-");
    scanf("%d",&d);
    if(con(n,d))
        printf("%d digit in the number",d);
        else
        printf("%d digit not in the number",d);
        getch();
        return 0;
}
int con(int n,int d)
{
    int p;
    for(int i=1;n!=0;i++)
    {
        p=n%10;
        n=n/10;
        if(p==d)
          return 1;
    }
    return 0;
}
