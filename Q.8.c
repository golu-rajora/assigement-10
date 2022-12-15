//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
 float arrg(int x,int y);
int main()
{
  printf(" calculate the number of arrangements one can make from n items and r selected at a time:-");
  printf("\n enter the item n=");
  int n,r;
  scanf("%d",&n);
  printf("enter the selected item from the n item r=");
  scanf("%d",&r);
  printf("number of arrangement of %d item from %d item is result= %.f",n,r,arrg(n,r));
  getch();
  return 0;
}
  float arrg(int n,int r)
  {
   float p=1,f=1;

        for(int i=1;i<=n;i++)
        {
            p=p*i;
        }

     for(int c=1;c<=n-r;c++)
     {
      f=f*c;
     }

   return p/f;


  }
