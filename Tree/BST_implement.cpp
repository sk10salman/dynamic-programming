#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
node * getnode(int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
bool find(node *root,int target)
{
    if(root==NULL)
      return false;
    if(root->data==target)
      return true;
    else if(root->data <target)
       return find(root->right,target);
    else
    {
         return find(root->left,target);
    }
    return true;
}
node * insert(node *root,int data)
{
    node * temp=  getnode(data);
    if(root==NULL)
     {
         root = temp;
         return temp;
     }
     else
     {
         if(data<=root->data)
            root->left=insert(root->left,data);
        else
        {
            root->right=insert(root->right,data);
        }
        

     }
     return root;
     
}
void print(node *root)
{
    if(root==NULL)
      return ;
       print(root->left);
    cout<<root->data<<" ";
   
    print(root->right);

}
int main()
{
    node *root=NULL;
    while(1)
    {
        int c;
        cout<<"\n1.insert \t 2.print \t 3. find \t 4.exit :\n";
        cin>>c;
        switch(c)
        {
            case 1:
              { int data;
               cin>>data;
              root=insert(root,data);
              break;}
            case 2:
               { print(root);
                break;}
           
            case 3:
              {int target;
              cin>>target;
              if(find(root,target))
                cout<<"yes"<<endl;
                else
                {
                    cout<<"No"<<endl;
                }
                
              break;}
               case 4:
             { exit(0);
              break;}
        }

    }
    return 0;
}