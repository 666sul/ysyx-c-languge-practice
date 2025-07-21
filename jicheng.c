#include <stdio.h>


#define Max(a,b)(a>b)?a:b 

int factorial(int a);

int  jiecheng (int a );

int main ()
{
//=====================1==========
	/*int i ;
	int sum =0;	
	for(i=0;i<3;i++)
	{
		sum = factorial(2);
	}	*/
//=======================2=================
    
/*	int c ;
	c =  jiecheng (5);
	printf("%d " , c);*/
//======================宏定义的函数
	int x, y ,max ;
	printf("input two number");
	scanf("%d%d",&x,&y);
	max =Max(x,y);
	printf("max=%d\n",max);
//====================================
return 0;
}


//===========================
int factorial(int a) 
{	
	int b=1;
	static int c=3;
	return a+b+c;



}
//===================================
//==========================================
int  jiecheng (int a )//static实现阶乘
{
	static int n=1 ;
	int i ;
	for(i=1;i<=a;i++)
	{
		n = n * i ;	
	}
	return n ;
}
//===============================
