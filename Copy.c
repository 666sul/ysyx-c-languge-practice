#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //=============================浅拷贝
    /*char Array[100]; 
    char* PArray[3];

    printf("请输入字符\n");

    for (int i=0;i<3;i++) {
        scanf("%s",Array);
        PArray[i]=Array;
    }

    printf("请输出的字符\n");
    for (int i=0;i<3;i++) {
        printf("%s\n",PArray[i]);
    }*/
//========================================

    char Array[100];//和char* Array;同理
    char* PArray[3];



    for (int i=0;i<3;i++) {
        
          scanf("%s",Array);
          PArray[i]=(char*)malloc((strlen(Array)+1) * sizeof(char));
          strcpy(PArray[i],Array);
    }

    printf("请输入字符\n");

    for (int i = 0;i<3;i++) {
        printf("%s\n",PArray[i]);
    }


    for (int i =0;i<3;i++) {
        free(PArray[i]);//释放数据
        PArray[i]=NULL;//释放指针
        if(PArray[i]!=NULL)
        {
            printf("%p\n",PArray[i]);
        }
        else {
            printf("%p\n",PArray[i]);
        }
    }




    return 0;
}
