//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
 #include<stdio.h>
  float comb(int n,int r);
 int main()
 {

   printf("calculate the number of combinations one can make from n items and r selected at a time:-\n");
   int n,r;
   printf("\n enter the total number of objects in the set n=");
   scanf("%d",&n);
   printf(" enter the number of choosing object from the set r=");
   scanf("%d",&r);
   printf("combination calculate result is=%.f",comb(n,r));
   getch();
   return 0;
 }
   float comb(int n,int r)
   {
   float p=1,q=1,f=1,s;

        for(int i=1;i<=n;i++)
   {
       p=p*i;
   }
   for(int b=1;b<=r;b++)
   {
       q=q*b;
   }
   for(int c=1;c<=n-r;c++)
   {
       f=f*c;
   }
   s=f*q;

   return p/s;

   }

