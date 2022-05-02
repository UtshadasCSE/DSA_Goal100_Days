#include<stdio.h>
int sum(int a,int b);
int main()
{
  int num1,num2;
  printf("Enter number1 & number2:");
  scanf("%d %d",&num1,&num2);
  printf("Answer:%d",sum(num1,num2));
  
}
int sum(int a,int b){
  int sum=a+b;
  return sum;
}