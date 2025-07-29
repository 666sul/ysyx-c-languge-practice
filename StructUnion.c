#include <stdio.h>
//#include <stdlib.h>



struct Student 
{
	int num ;
	int age;
	char address[5];
	char sex;
	float score;
	
};

int main (int argc ,char* argv[])
{
	struct Student stu;
//  struct Student* st;
     stu.age=10;
 // st=&stu;
    stu.age=10;


printf("%d\n",stu.age);

return 0;
}
