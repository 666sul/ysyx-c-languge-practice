#include <stdio.h>
//#include <string.h>


     long f (unsigned int a);
int main(void)
{
//=============================内存拷贝
     // char str[20];
     // const char arry[50]={"HELLO,WORLD HELLO Chinese!"};

     // memcpy(str,arry,strlen(arry)+1);//
     //   memcpy(str, arry+20, 6);

       // memcpy(str, arry+20*sizeof(char), 6*sizeof(char)
      // printf("%s\n",str);
      //===============================
    
      //=================================
      //
     //====================================内存移动 
  /*   const char src[]="newstring";//source
      
       char dest[]="oldstring";//distination
                                                      //
                                                      //
                    
printf("Before memmove dest = %s, src = %s\n", dest, src);

memmove(dest,src, 3);
  printf("After memmove dest = %s, src = %s\n", dest, src);



  memmove(dest,dest+6, 3);
  printf("%s\n",dest);*/
  //====================================
  //chaoid *, int, unsigned long);
  //==============================memset函数
    /*  char arry[]="dasdada";

    printf("设置之前的：%s\n",arry);
    memset(arry ,65, 3);
    printf("设置之后的：%s\n",arry);*/
    //======================================
    long temp;
    temp=f(3);

    printf("%ld",temp);



    return 0;
}





 
       long f (unsigned int  a)
      {
          if(a<=1)
          {
              return 1 ;
          }
            return a * f(a-1);
      }
