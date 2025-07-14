#include <stdio.h>






int power (int base ,int n)

{

	int i ,p;
	p=1; 
	for(i = 0;n>i ;--n)
		p=  p * base;	
	return p;

}



