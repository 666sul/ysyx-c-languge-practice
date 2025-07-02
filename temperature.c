#include <stdlib.h>
#include <stdio.h>



void celsius (void);

void fahr (void);
int main ()
{

	 celsius();

	 fahr ();
	//printf("a的长:%d\n",sizeof(a));

//	system("");

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



