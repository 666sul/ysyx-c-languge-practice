#include<stdio.h>


int main ()
{
	int x = 0,y = 0 ,z=0 ;
	int sum1 = 0,sum2 =0 ,sum3 = 0 ,sum4 =0;	

	loop:if(x<=100)
	{
	sum1= sum1 + x ;
	x++;
	goto loop;
	}
	printf("%d \n ",sum1);

	while(y<=100)
	{
		sum2= sum2 + y;
		y++;
	}	
	printf("%d \n", sum2);
	do 
	{
		sum3 = sum3 + z ;
		z++ ;
	
	}while(z<=100);
	printf("%d \n",sum3);

	for(int a=0; a <= 100;a++)
	{
		sum4 =sum4 + a;	
	}
	printf("%d \n",sum4);

	 for(int b = 10 ; b<20 ; b++)
	{
		if(b % 3==0)
		{
			continue ;

		}
		printf("%d\n",b);
	}	



return 0;
}


