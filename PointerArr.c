#include <stdio.h>
#define Max  3



int main(int argc,const char* argv[])
{
//====================The first
/*	int a[]={1,2,3};
	int* p[Max];
	for(int i=0;i<Max;i++)
	{
		p[i]=&a[i];
	}

	for(int i=0;i<Max;i++)
	{
		printf("%d\n",*p[i]);
	
	}*/
//=======================================

//========================The second


	const char* a[] = {"A","B","C"};//表示的是字符串
	
	for(int i = 0;i<Max;i++)
	{

		printf("a[%d] value is %s\n",i,a[i]);

	}













return 0;
}
