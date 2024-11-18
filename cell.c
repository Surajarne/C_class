#include<stdio.h>
int main()
{
int a, b, c, sum;

    printf("the value of a:");
    scanf("%d",&a);
    
    printf("the velue of b:");
    scanf("%d",&b);
     
     c=a;
     a=b;
     b=c;
     
      printf("After swapping the values a=%d\n, b=%d\n", a, b);
      sum=a+b;																																				
 printf("sum of two num is %d\n", sum);

 return 0;
 }
