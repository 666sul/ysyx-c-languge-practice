#include <stdio.h>
#include <stdlib.h>

struct  Node    
{
    int data;
    // int* next;
    void* next;
};
struct Node* head;
struct Node* InstrtNode=NULL;

void SilNodeInserthead(int dataIm)//头插法
{
    struct Node* InstrtNode=(struct Node*) malloc(sizeof(struct Node*));
    if(InstrtNode==NULL)
    {
        printf("创建失败\n");
        exit(0);
    }
    else {
        InstrtNode->data=dataIm;
        InstrtNode->next=head;
        head=InstrtNode;
        printf("头插法插入成功\n");
    }
}

void SilNodeInserttil(int dataIm)//尾插法
{
    struct Node* InstrtNode=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* temp;
    if(InstrtNode==NULL)
    {
        printf("创建失败\n");
        exit(0);
    }
    else {
        InstrtNode->data=dataIm;
        if(head==NULL)
        {
            InstrtNode->next=NULL;
            head=InstrtNode;
            printf("单链表为空\n");
        }
        else
        {
            temp=head;
            while (temp->next!=NULL) {
                temp=temp->next;
            }
            temp->next=InstrtNode;
            InstrtNode->next=NULL;
            printf("尾插法插入数据成功\n");
        }
    }
}
void SilNodeInsertmid(int dataIm)//中间插入
{
    struct Node* InstrtNode = (struct Node* )malloc(sizeof(struct Node*));
    struct Node* TempNode ;
    int InsertPos;
    if(InstrtNode==NULL)
    {
        printf("创建失败\n");
        exit(0);
    }
    else 
    {
        if(head==NULL)
        {
            printf("无前节点无法插入");
        }
        printf("插入位置;");
        scanf("%d",&InsertPos);
        InstrtNode->data=dataIm;
        TempNode=head;
        for (int i  = 0;i<InsertPos;i++) 
        {
            TempNode=TempNode->next;//遍历
            if(TempNode  == NULL)
            {
                printf("前面没有节点，无法插入");
                exit(0);
            }
        }

        InstrtNode->next=TempNode->next;//新插入节点指向临时节点
        TempNode->next=InstrtNode;
        printf("中间插入法插入成功\n");
    }
}



void DeleteFirstNode()//删除节点
{
    struct Node* DeleteNode;
    if(head== NULL)
    {
        printf("链表为空无法删除");
        exit(0);
    }
    else {
        DeleteNode = head;
        head=DeleteNode->next;
        DeleteNode=NULL;
        free(DeleteNode);
        printf("节点已删除");
    }
}
void DeleteLastNode()
{
    struct Node* DeleteLastNode;
    struct Node* PrevNode;

    if (head==NULL) 
    {
        printf("空节点无法删除");
    }

    else if (head->next==NULL) 
    {
        head=NULL;
        free(head);
        printf("就一头节点\n");
    }
    else 
    {
        while (DeleteLastNode->next != NULL) 
        {
            DeleteLastNode=DeleteLastNode->next;
            PrevNode=DeleteLastNode;
        }
        PrevNode->next=NULL;
        free(DeleteLastNode);
        printf("尾部删除成功");
    }
}

void DeleteRandomNode()
{
    struct Node* DeleteRandomNode;
    struct Node* DeletePrevNode;
    DeleteRandomNode=head;
    DeletePrevNode=head;
    int NodePos;//position
    scanf("%d",&NodePos);
    for (int i=0; i<NodePos;i++) 
    {   DeletePrevNode=DeleteRandomNode;
        DeleteRandomNode=DeleteRandomNode->next;
        if(DeleteRandomNode==NULL)
        {
            printf("无法删除");
            exit(0);
        }
    }
    DeletePrevNode->next=DeleteRandomNode->next;
    DeleteRandomNode=NULL;
    free(DeleteRandomNode);
    printf("删除了节点\n");
}



void TravrelNode()
{
    struct Node* TravrelNode;
    TravrelNode=head;
    if(TravrelNode == NULL)
    {
        printf("该链表为空无法遍历：\n");
        exit(0);
    }
    while (TravrelNode != NULL) 
    {
        printf("%d",TravrelNode->data);
        TravrelNode = TravrelNode ->next;
    }
}



void SearchNode()
{
    struct Node* SearchNode=NULL;
    int SearchNodeNum=0;
    int position=0;
    if(head== NULL)
    {
        printf("链表为空无法搜索\n");
        exit(0);
    }
    else 
    {   
        SearchNode=head;
        printf("请输入：\n");
        scanf("%d",&SearchNodeNum);
        while (SearchNode != NULL) 
        {
            if(SearchNode->data == SearchNodeNum)
            {
                printf("要查找的元素在%d 其值为%d\n",(position+1),SearchNode->data);
            }
            position++;
            SearchNode= SearchNode->next;
        }

    }
}

int main(int argc ,const char* argv[])
{
    int input;
    int choice;
    //================================
    /*  do {
        scanf("%d",&input);
        SilNodeInserttil(input);
        printf("请输入一个非 0值退出\n");
        scanf("%d",&choice);
        }while (choice !=0);*/
    //====================================

    //======================================
    /* do{
       printf("请输入:\n");
       scanf("%d",&input);
       if (head==NULL) 
       {
       SilNodeInserthead(input);
       }
       else 
       {
       SilNodeInsertmid(input);
       }
       scanf("%d",&choice);
       }while(choice != 0);*/
    //================================
    //
    /* printf("请输入数据：\n");
       scanf("%d",&input);
       if(head==NULL)
       {
       SilNodeInserthead(input);
       }
       DeleteFirstNode(); */
    /* printf("请输入：");
       scanf("%d",&input);
       SilNodeInserthead(input);
       DeleteLastNode();*/

    //==================================

    //======================================
    /*      do 
            {
            printf("请输入：\n");
            scanf("%d",&input);
            SilNodeInserthead(input);
            printf("请输入一个非零值推出\n");
            scanf("%d",&choice);

            }while(choice == 0);
            DeleteRandomNode();*/
    //===================================

    //====================================
    /*  do 
        {
        printf("请输入数字：\n");
        scanf("%d",&input);
        SilNodeInserthead(input);
        printf("请输入：\n");
        scanf("%d",&choice);
        }while (choice == 0);*/
    //  TravrelNode();
    //  ===============================
    /*  do {
        printf("请输入：\n");
        scanf("%d",&input);
        SilNodeInserthead(input);
        printf("请输入一个非零的数：\n");
        scanf("%d",&choice);
        }while (choice == 0);

        SearchNode();*/
    //================================================
    scanf("%d\n",&choice);
    switch (choice) 
    {

        case 1 : 
            do {
                scanf("%d",&input);
                SilNodeInserttil(input);
                printf("请输入一个非 0值退出\n");
                scanf("%d",&choice);
            }while (choice ==0);
            break;
        case 2 :
            do{
                printf("请输入:\n");
                scanf("%d",&input);
                if (head==NULL) 
                {
                    SilNodeInserthead(input);
                }
                SilNodeInsertmid(input);
                scanf("%d",&choice);
            }while(choice == 0);
            break;
        case 3:
            printf("请输入数据：\n");
            scanf("%d",&input);
            if(head==NULL)
            {
                SilNodeInserthead(input);
            }
            DeleteFirstNode();
            printf("请输入：");
            scanf("%d",&input);
            SilNodeInserthead(input);
            DeleteLastNode();
            break;
        case 4:
            do 
            {
                printf("请输入：\n");
                scanf("%d",&input);
                SilNodeInserthead(input);
                printf("请输入一个非零值推出\n");
                scanf("%d",&choice);

            }while(choice == 0);
            DeleteRandomNode();
            break;
        case 5:
            do 
            {
                printf("请输入数字：\n");
                scanf("%d",&input);
                SilNodeInserthead(input);
                printf("请输入：\n");
                scanf("%d",&choice);
            }while (choice == 0);
            TravrelNode();
            break ;
        case 6:
            do {
                printf("请输入：\n");
                scanf("%d",&input);
                SilNodeInserthead(input);
                printf("请输入一个非零的数：\n");
                scanf("%d",&choice);
            }while (choice == 0);
            SearchNode();
            break;
    }
    return 0;
}
