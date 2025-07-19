#include <stdio.h>
#include <math.h>





//========================海伦公式1
void   angel_are()
{
	float a ;
	float b ;
	float c ;
	float p ;
	float area;
	scanf("%f  %f  %f", &a, &b ,&c);
	p = (a+b+c)/2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	printf("请输入三角形三条边：\n");
	printf("a = %f b = %f c = %f p = %f\n",a,b,c,p);
	printf("area = %f\n",area);


}
//==========================================



//==================================海伦公式2
float angel_area ( float a, float b , float c)


{
	float p;
	float area;
	p =(a+b+c)/2;	
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	printf("请输入三角形三条边：\n");
	printf("a = %f b = %f c = %f p = %f\n",a,b,c,p);
	printf("area = %f\n",area);
}

//=========================================================


//===================================Quadratic Function
float  QuadraticFunction1 (float a, float b, float c)
{
	float x1 ,x2 ;
	float dert;
	
	dert = b * b - 4 *a *c;
	x1 = ( -b + sqrt(dert)) /2 /a;
	x2 = ( -b - sqrt(dert)) /2 /a; 
	printf(" %f %f %f \n",dert,x1,x2);
}
//===========================================










