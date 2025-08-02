#include <complex.h>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node* Prev;
    //void* Prev
    struct Node* Next;
    //void* Next;
    int data;
};
struct Node* head=NULL;


void DoublelinkHeadInsert(int dataItm)
{
    struct Node* insertnode= (struct Node*)malloc(sizeof(struct Node*));
    if(head==NULL)
    {
        printf("空连表\n");
        insertnode->Prev=NULL;
        insertnode->Next=NULL;
        insertnode->data=dataItm;
        head=insertnode;
    }
    else 
    {
        insertnode->data=dataItm;
        insertnode->Next=head;
        insertnode->Prev=NULL;
        head->Prev=insertnode;
        head=insertnode;
    }
}

void DoublelinkLastInsert(int dataItm)
{
    struct Node* DoublelinkLastInsert=(struct Node*) malloc(sizeof(struct Node*));
    struct Node* TempNode=head;
    if (DoublelinkLastInsert==NULL) {
        printf("分配失败\n");
        exit(0);
    }
    else {

        DoublelinkLastInsert->data=dataItm;
        if (head==NULL) {
            printf("空链表\n");
            DoublelinkLastInsert->Prev=NULL;
            DoublelinkLastInsert->Next=NULL;
            DoublelinkLastInsert->data=dataItm;
            head=DoublelinkLastInsert;
        }
        else {
            //DoublelinkLastInsert->data=dataItm;
            while (TempNode->Next != NULL) {
                TempNode= TempNode->Next;
            }
            DoublelinkLastInsert->Next=NULL;
            DoublelinkLastInsert->Prev=TempNode;
            TempNode->Next=DoublelinkLastInsert;
        }
        printf("双节点尾插法成功\n");
    }

}







void DoublelinkRadomInsert(int dataItm)
{
    struct Node* DoublelinkRadomInsert=(struct Node*) malloc(sizeof(struct Node*));
    struct Node* TempNode=head;
    int position;
    if (DoublelinkRadomInsert== NULL) 
    {
        printf("分配失败\n");
        exit(0) ;    
    }
    else
    {
        DoublelinkRadomInsert->data=dataItm;
        if(head==NULL)
        {
            printf("空链表无法插入\n");
        }
        else
        {
            printf(" 随机插入，请而入的位置\n");
            scanf("%d",&position);
            for (int i = 1; i<position+1;i++) {
                TempNode=TempNode->Next;
            }
            DoublelinkRadomInsert->Next=TempNode->Next;
            DoublelinkRadomInsert->Prev=TempNode;
            TempNode->Next->Prev=DoublelinkRadomInsert;
            TempNode->Next=DoublelinkRadomInsert;
            printf("中间插入成功\n");
        }
    }
}



void DoublelinkdeleteNode()
{
    struct Node* DoublelinkdeleteNode;
    DoublelinkdeleteNode=head;
    int position;
    scanf("%d",&position);
    if(head==NULL)
    {
        printf("链表不存在无法删除");
        exit(0);
    }
    else if (head->Next==NULL) 
    {
        head=NULL;
        free(head);
        printf("只有头节点，删除成功\n");
    }
    else 
    {
        while(DoublelinkdeleteNode != NULL)
        {

            DoublelinkdeleteNode= DoublelinkdeleteNode->Next;
        }  
        DoublelinkdeleteNode=NULL;
        head= head->Next;
        head->Prev=NULL;
        free(DoublelinkdeleteNode);
    }
}



int main (int argc ,const char* argv[])
{

    int input;
    int choice;
    int select;
    printf("请输入\n");
    scanf("%d",&select);
    switch (select) 
    {
        case 1:
            do
            {
                printf("请输入需要插入的数据：\n");
                scanf("%d",&input);
                DoublelinkHeadInsert(input);
                printf("输入非零的数退出\n");
                scanf("%d",&choice);
            }while(choice == 0);

            break;
        case 2:
            do
            {
                printf("请输入需要插入的数据：\n");
                scanf("%d",&input);
                DoublelinkLastInsert(input);
                printf("输入非零的数退出\n");
                scanf("%d",&choice);
            }while(choice == 0);

            break;

        case 3:
            do
            {
                printf("请输入需要插入的数据：\n");
                scanf("%d",&input);
                DoublelinkHeadInsert(input);
                printf("输入非零的数退出\n");
                scanf("%d",&choice);
            }while(choice == 0);
            DoublelinkRadomInsert(input);
            break;
    }
    return 0;
}
