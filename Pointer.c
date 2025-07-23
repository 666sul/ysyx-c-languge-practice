#include <stdio.h>
#define MaxIndex 3
int main (int argc ,char * argv[])
{
//===================================二级指针应用一/	int i ;
/*	int a [5] ={1,2,3,4,5};
	int * b [5] ={&a[0],&a[1],&a[2],&a[3],&a[4] };
	int **p;
	    p=b;
	for(i=0;i<5;i++)
	{
		printf("%d\n",**p);
		p++;
	}*/
//=====================================


//==============================二级指针用法二
/*	char i;
	char * a[5]={"hello","word","nihao","hahahaha","gungungun"};
	char **p;
	for(i=0;i<5;i++)
	{
		p=a+i;
		printf("%s\n",*p);

	}*/
//=====================================================

/*	int a=0x10;
	int* p;
	p=&a;
	printf("%d %d\n",a ,*p);
	printf("%p %p\n",&a,p);*/
//======================================	

//======================指针指向数组首地址
/*	int a []= {1,2,3};
	int i ;
	int* p;
	p=a;
	for(i=0;i<3;i++)
	{
		printf("a[%d]的地址：%p值是%d\n",i,p,*p);
		
		p++;
	}*/ 
//==========================================================


//==================从数组的末地址进行遍历
/*	int a[] ={1,2,3};
	int i;
	int* p;
	p=&a[2];	
	for(i=2;i>=0;i--,p--)
	{
		printf("a[%d] address is :%p number is: %d\n",i,p,*p);

	}*/
//===============================================
//====================指针比大小
	int a[MaxIndex]={1,2,3};
	int i;
	int* p ;
	p=a;
	while(p <= &a[MaxIndex-1])
	{
		printf("a[%d] = %p\n",i,p);
		printf("a[%d] = %d\n",i,*p);
		p++;
		i++;
	}


return 0;
}
