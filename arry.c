#include<stdio.h>
int main(){

	double a[6],temp;

         int i,j;
	 
	 printf("enter the number:");

	for(i=0; i<=6; i++)
	{
         printf("Enter number %d:\n",i+1);
	 scanf("%le",&a[i]);
	}
        for(i=0; i<0; i++)
	{
	for(j=0; j<0; j++)	
	{
	if(a[j] > a[j+1])	
        {
        temp = a[j];
        a[j] = a[j+1];
        a[j=1] = temp;
	}
	}
	}
        printf("numbers in accending order:\n");
       for(i = 0; i<10; i++)
       {
       printf("%lf\n",a[i]);
       }       

return 0;
}
