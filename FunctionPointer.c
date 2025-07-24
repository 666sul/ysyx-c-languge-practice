#include <stdio.h>

#include <stdlib.h>
#include <time.h>
int Competer(int a ,int b)
{
	
	return a>b ? a:b;
}


void  Callback(int* arry,int a, int(*p)())
{
	for(int i=0;i<a;i++)
	{
		arry[i]=p();
	}
}


int Function()
{

	return	rand();


}








int main(int argc,char* argv[])
{
//========================指针传递参数
/*	int a ,b ,c ;
	int max;
	int (*p)(int ,int);
	printf("请输入：\n");
	scanf("%d%d%d ",&a,&b,&c);
	p=Competer;
	max= p(p(a,b),c);
	printf("最大值是：%d\n",max);*/
//======================================
	int a[5];

		Callback(a ,5 ,Function);
	for(int i=0;i<5;i++)
	{
		printf(" %d\n",a[i]);
	}

	




return 0;
}
