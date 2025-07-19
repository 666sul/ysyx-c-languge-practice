#include <stdlib.h>
#include <stdio.h>
#include "temperature1.h"
#include "getchar.h"
#include "arry.h"
#include "power.h"
#include "getline.h"
#include "copy.h"
#include "jisuancd.h"
void celsius (void);
void fahr (void);
//======================================================

//#define Maxline 6   //允许最大的数组长度
int main ()
{

	// celsius();

	// fahr ();
	
//	Forachieve();
//	Forachnixu();

	
//	 Getchar();
//
//	 Compare2 ();
//	 
		// Findword();
//		Arry();
//
//		int i;
//		for( i=0;i<10;++i)
	     // i=power(100,2);
//		printf("%d %d %d\n",i,power(2,i),power(-3,i));	
//========================find arrylong ===============================		
	/*	int len ;
		int max;
		char line [Maxline];
		char longget[Maxline];
		max = 0;
		while (len =getaline(line ,Maxline) > 0)
			if(len > max){	
				len=max;
			copy(longget,line);}
			if(max>0) //
				printf("%s",longget);*/
//===========================================================================
		// Pri_lon();
		//
		//
		//
		//
	//printf("a的长:%d\n",sizeof(a));

//=========================triangel area1
	//	angel_are();

//===========================triangel area2

	//	angel_area(3,4,5);



//==========================================

//=========================================  Quadratic Function1 

	  QuadraticFunction1 (1,3,2);

//========================================
















return 0;
}

void celsius (void)
{

	float fahr, celsius ;

	int lower, upper, step; 
	lower=0;
	upper=300;
	step=20;
	
	fahr=lower;

	printf("华氏度转摄氏度\n");
	for(int i =0;i<10;i++)
		printf("--");
	while(fahr<=upper )
	{
		celsius =  (5.0/9.0)*(fahr-32.0);
		printf("\n");
		printf("%3.0f %6.1f\n\n",fahr ,celsius);
		fahr= fahr+step;
}

}





void fahr (void)
{
	float fahr, celsius ;
	int lower ,upper,step;
	lower=0;
	upper=300;
	step=20;
	celsius=lower;
	printf("摄氏度转华氏度\n");
	for(int i=0;i<10;i++)
		printf("--");
	while(celsius<=upper)
	{
		fahr= celsius * 1.8 +32;
		printf("\n");
		printf("%3.0f %6.1f\n",celsius,fahr);
		celsius=celsius+step;
		

	}


}



