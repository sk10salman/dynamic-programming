#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * beg(node *head,int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
     return temp;
     temp->next=head;
     head=temp;
     return head;
    
}
node * end(node *head,int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    node *p=head;
    if(head==NULL)
     return temp;

     while(p->next!=NULL)
       p=p->next;
       p->next=temp;
       temp->next=NULL;
       return head;
}   
 node * position(node *head,int data,int pos)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data=data;
    node *p =head;
    for(int i=1;i<pos-1&&p!=NULL;i++)
       p=p->next;
    temp->next=p->next;
    p->next=temp;
   return head;
    

}
void delete_first(node **head)
{
    if(head==NULL)
     return;
     node *p=*head;
     *head=p->next;

}
void delete_end(node **head)
{
    node *p=*head;
    if(p->next==NULL)
          return ;
    while(p->next->next!=NULL)
      p=p->next;
      p->next=NULL;
}

void delete_pos(node **head,int pos)
{
    node *p=*head;
    if(p==NULL)
      return;
        
      
   for(int i=1;i<pos-1&&p!=NULL;i++)
      p=p->next;
      p->next=p->next->next;
}
void print(node *head)
{
   cout<<"\n\nLIST  \n\n";
    while(head)
     {
         cout<<head->data<<" ";
         head = head->next;
     }
      cout<<endl;
     cout<<endl;
}
int main()
{
    node *head=NULL;
    while(1)
     {
         cout<<"1.beginning\t 2. end \t 3. position   \t 4. print \t 5 delete first \t 6. delete_end \t 7. delete pos \t default.exit "<<endl;
         int choice ;
         cin>>choice;
         switch (choice)
         {
         case 1:
                 {int x;
                  cout<<"enter value :";
                 cin>>x;
                 head = beg(head,x);
                 break;}
         case 2:
               { int x;
                  cout<<"enter value :";
                 cin>>x;
                 head = end(head,x);
                 break;}
        case 3:
                {int x;
                  cout<<"enter value :";
                 cin>>x;
                 int p;
                   cout<<"enter pos :";
                 cin>>p;
                 head = position(head,x,p);
                break;}
        case 4:
              print(head);
              break;
         case 5:
               delete_first(&head);
               break;
         case 6:
             delete_end(&head);
             break;
            case 7:
            {
                 int p;
                   cout<<"enter pos :";
                 cin>>p;
                 delete_pos(&head,p);
                 break;
            }
         default:
             exit(0);
         }
     }
     return 0;
}