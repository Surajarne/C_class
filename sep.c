#include<stdio.h>
int  main(){
        int a,b,y,z;
        printf("enter the num :");
        scanf("%d",&a);

 if(a>=0)
{
 	printf("the number is positive \n");
}
 else
{
 	printf("the number is negavtive \n");
}
        y=a/10;
        z=y%10;
        y=a/100;
	b=y%10;

{
	printf("the number at 10th place :%d \n", z);
}
{
	printf("the number at 100th place :%d \n", b );
}	
        return 0;


 }
