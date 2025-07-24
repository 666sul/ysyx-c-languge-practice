#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int* c ();
float b (int* arry,int size);
void a (long int* p);
int main (int argc,const char* argv[])

{
//===========================多级指针
/*	int a=1 ;
	int* p1;
	int** p2;
	int*** p3;
	int**** p4;
	int***** p5;
	p1=&a;
	p2=&p1;	
	p3=&p2;
	p4=&p3;
	p5=&p4;
	printf("a的地址是%p\n",p1);

	printf("a的地址是%p\n",p1);
	printf("a的地址是%p\n",p1);
	printf("a的地址是%p\n",p1);
	printf("a的地址是%p\n",p1);
	printf("a的地址是%p\n",p1);


	printf("a的值是%d\n",*p1);
	printf("a的值是%d\n",**p2);
	printf("a的值是%d\n",***p3);
	printf("a的值是%d\n",****p4);
	printf("a的值是%d\n",*****p5);*/

//===========================================
//==========================函数里通过指针传参1
/*	long int b ;
	a (&b);
	printf("%.6ld\n",b);*/
//==============================
//===========================函数里通过指针传参2
/*	int arry[3]={1,2,3};
	float  avg=b(arry,3);
	printf("%f\n",avg);*/
//=================================

//==================================
	int* p;
	p=c();
	for(int i =0 ;i<10;i++)
	{

		printf("%p\n",p);

	}









return 0;
}



void a (long int* p)
{	
	*p = time(NULL);
	return ;
}

float b (int* arry,int size)
{
	int i ;
	int sum=0 ;
	int argv=0;
	for(i=0;i<size;i++)
	{
		
		sum+=arry[i];
	}
	argv=(float) sum /size;
	return argv;
}

int* c ()
{
	static int arry[10];
	srand((unsigned)time(NULL));
	for(int i =0;i<10;i++)
	{
		arry[i]=rand();
		printf("%d\n",arry[i]);
	}
	return arry;
}



