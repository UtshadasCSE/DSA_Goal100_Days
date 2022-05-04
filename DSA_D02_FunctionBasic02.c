#include<stdio.h>
int squre(int a);
int main()
{
   int num;
   printf("Enter your numbera:");
   scanf("%d",&num);
   printf("Squre: %d",squre(num));
   return 0;
}
int squre(int a)
{
    return (a*a);
}