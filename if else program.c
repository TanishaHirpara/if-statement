#include<stdio.h>

main()
{

int a, b;
printf("Enter value of A = ");
scanf("%d" ,&a);
printf("Enter value of B = ");
scanf("%d" ,&b);

if(a<b)
{
	printf("%d is Minimum" , a);
	
}
else
{
	printf("%d is Min" , b);
}
}
