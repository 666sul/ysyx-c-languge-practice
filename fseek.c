#include <stdio.h>
#include <stdlib.h>

struct Student //定义结构体
{
    int num;
    char name[10];
    int age;
};

int main (int argc ,const char*argv[])
{
      struct Student stu[3] ;
      struct Student stu1 ;
      struct Student* st;
      st=stu;
      FILE* fp=NULL;
      fp=fopen("test.txt" , "wb+");

      if(fp==NULL)
      {
          printf("创建文件失败\n");
          getchar();
          exit(1);
      }

      for (int i=0;i<3;i++) {
          scanf("%d %s %d",&st->num,st->name,&st->age );
          st++;
      }


      fwrite(stu, sizeof(struct Student),  3,fp);
      fseek(fp, sizeof(struct Student), SEEK_SET);
      fread(&stu1, sizeof(struct Student), 1, fp);
       printf("%d %s %d\n ",stu1.num,stu1.name,stu1.age);
       fclose(fp); 
    return 0;
}
