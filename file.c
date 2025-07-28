#include <stdio.h>


int main(int argc, const char* argv[])
{
//=====================================文件肉容输入给数组
     /* FILE* fp=NULL;
      char a[255];

      fp = fopen("README.md","r");
      fscanf(fp,"%s",a);
      printf("1:%s",a)*/
//===============================
//      fclose(fp);

        FILE* fp=NULL;

        fp =fopen("test.txt","w+");

        fprintf(fp,"输入成功\n");  
        fputs("传入成功",fp);
    
        fclose(fp);





return 0;
}
