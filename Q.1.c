//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area( int );
int main()
{
    printf("enter a redious:-");
     int r;
     scanf("%d",&r);
     printf("area of circle is=%f",area(r));
     getch();
     return 0;
}
  float area(int r)
  {
      return 3.14*r*r;
  }

