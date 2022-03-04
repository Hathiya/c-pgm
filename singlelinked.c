#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
}*root=NULL;
void insertatbegin()
{
    struct node*temp;
    Temp=struct node *)malloc(sizeof(struct node));
    printf("\n enter the data to be inserted");
    scanf("%d",&temp->data);
    Temp->=NULL;
    if(root==NULL)
            Root=temp;
    else
    {
        Temp->link=root;
     else   
    }
}
void insertatend()
{
    struct node*temp;
    Temp=struct node *)malloc(sizeof(struct node));
    printf("\n enter the data to be inserted");
    scanf("%d",&temp->data);
    Temp->=NULL;
    if(root==NULL)
            Root=temp;
    else
    {
        struct node *p=root;
        while(->link!=NULL)
           P=p->link;
        p->link=temp;
    }
}
int length()
{
    struct node *p=root;
    int count=0;
    if(root==NULL)
            return count;
else
{
    while(p!=NULL)
    {
        count++;
        P=p->link;
    }
    return count;
    }
}
void insertatpos()
{
    int pos;
    struct node*temp;
    Temp=struct node *)malloc(sizeof(struct node));
    printf("\n enter the data to be inserted");
    scanf("%d",&temp->data);
    Temp->=NULL;
    printf("\n enter position to be inserted");
    scanf("%d",&pos);
    if(pos>length())
            printf("\n invalid location";)
    else if(pos==1)
    {
        Temp->link=root;
        Root=temp;
    }
     else   
    {
        struct node *p=root;
        int i=1;
        while(i<pos-1)
        {
            P=p->link;
            i++;
}
Temp->link=root;
p->link=temp;
    }
}
void delete()
{
    int pos;
    struct node *temp;
    printf("enter position to be deleted";
    scanf("%d",&pos);
    if(pos>length())
           printf("onvalid location\n");
    else if(pos==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        printf("element to be deleted %d",temp->data);
        free(temp);
    }
    else
    {
        struct node &p=root,*q;
        int i=1;
        while(i<pos-1)
        {
            P=p->link;
            i++;
        }
        Q=p->link;
        p->link=q->link;
        q->link=NULL;
        printf("element to be deleted %d,"q->data);
        free(q);
    }
}
void traversel()
{
    struct node *p=root;
    if(root==NULL)
            printf("\n no elements to display");
    else
    {
        while(p->link!=NULL)
        {
            printf("%d->",p->data);
            P=p->link;
        }
        printf("%d",p->data);
    }
}
void main()
{
    int choice;
    while(1);
    {
        printf("\n\n1.insert at begin");
        printf("\n2.insert at end");
        printf("\n3.insert at specific position");
        printf("\n4.delete");
        printf("\n5.length");
        printf("\n6.traverse");
        printf("\n7.exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertatbegin();
                   break;
            case 2:insertatend();
                   break;
            case 3:insertatpos();
                   break;
            case 4:delete();
                   break;
            case 5:printf("the length of the linked list is:%d",length());
                   break;
            case 6:traverse();
                   break;
            case 7:exit(1);
                    break;
            default:printf("\nentered wrong choice!!!");
        }
    }
}


        


      
    