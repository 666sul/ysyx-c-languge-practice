#include <stdio.h>


float Findcore(float arry []);

int main ()
{
	int i ;
	float are[10];
	float a ;
	printf("请输入成绩：");
	for(i = 0;i<10;i++)
	{
		scanf("%f",&are[i]);
	}

	a=Findcore(are);
		printf("%f\n",a);
	
return 0;
}

float Findcore(float arry [])
{	
	int i;
	int sum = 0;
	float aore;
	for(i=0;i<10;i++)
	{
		sum +=arry[i];
	}
	aore = sum / 10;
	return aore ;
}





