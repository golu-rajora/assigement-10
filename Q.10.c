//10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void fact(int x);
int main()
{
    int x;
    printf(" print all prime factors of a given number:-");
    printf("\n enter a number:-");
    scanf("%d",&x);
    printf(" %d number all prime factors is:- ",x);
     fact(x);
    getch();
    return 0;
}
  void fact(int x)
  {

 for(int i=2;x!=1;i++)
    {
        if(x%i==0)
        {
            x=x/i;
            printf("%d,",i);
            i--;
        }
    }
  }
