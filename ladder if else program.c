#include<stdio.h>

main()
{

int number;
printf("Enter the number = ");
scanf("%d" , &number);

if(number<0)
{
	printf("The number entered is not neutral");
}

else if(number==0)
{
	printf("The number entered is neutral");
}

else if(number>0)
{
	printf("The number entered is also not neutral");
}
}
