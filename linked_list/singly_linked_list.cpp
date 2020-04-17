#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
   
};
struct node *getnode(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
  
    return temp;
}
void delete_first(node **head)
{
    node *p = *head;
    *head = p->next;
    
}

int  delete_last(node **head)
{
   
    if(head==NULL)
    {
        return NULL;
    }
     node *p = *head;
  while(p->next->next!=NULL)
     p=p->next;
     int x= p->next->data;
    p->next=p->next->next;
    return x;
}   



void insert_last(node **head,int x)
{
    node *temp=getnode(x);
    if(head==NULL)
    {
        *head=temp;
    }
     node *p = *head;
  while(p->next!=NULL)
     p=p->next;
    p->next=temp;
}
void insert(node **head,int x)
{
    node *p = getnode(x);
    node **last=head;
    if(head==NULL)
        {*head= p;
           return;
        }
     
    
       p->next=*last;
       *last=p;
    
       return;
    
}

node *reverse(node *head)
{
      node *temp=NULL;
      while(head!=NULL)
       {
             insert(&temp,head->data);
             head=head->next;
       } 
       return temp;
}

void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"null"<<endl;
}
int main()
{
         node *head=NULL;
         insert(&head,1);
         insert(&head,2);
          insert(&head,3);
         insert(&head,4);
          insert(&head,5);
         insert(&head,6);
         print(head);
       
         delete_first(&head);
         print(head);
         insert_last(&head,8);
           print(head);
         int x= delete_last(&head);
         cout<<"deleted"<<x<<endl;
           print(head);
           head = reverse(head);
           print(head);
         return 0;

}