/*

Input:
3
8
12 15 10 11 5 6 2 3
6
10 20 30 40 50 60
6
60 50 40 30 20 10

Output:
15 11 6 3
60
60 50 40 30 20 10

Explanation:
Testcase 1: Since, 12, 10, 5 and 2 are the elements which have greater elements on their next node. So, after deleting them, the linked list would like be 15, 11, 6, 3.
 

easy way: matlab ki har node ki next value lest than equal honi ::::




*/



#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


Node *compute(Node *head);

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node * insert(Node *start,int data)
{
    Node *temp=new Node(data);
    if(start==NULL)
      return temp;
     else
     {
         temp->next=start;
         start=temp;
     }
     return start;
}
Node *compute(Node *head)
{
    // your code goes here
    Node *start=head;
    vector<int>v;
    while(start)
    {
       v.push_back(start->data);
       start=start->next;
    }
    int n=v.size()-1;
    Node *root=NULL;
   
    if(v.size()>0)
       root = insert(root,v[n]);
    for(int i=n-1;i>=0;i--)
      if(v[i]>=root->data)
         root=insert(root,v[i]);
   return root;
   
}

