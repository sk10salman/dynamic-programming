#include<bits/stdc++.h>
using namespace std;
int main()
{
    // koi order fix nhi hota not indexing 
    unordered_multiset<int>s;
    unordered_multiset<int>::iterator itr;
    while(1)
    {
        int ch;
        cout<<"\n 1.insert 2.remove 3.find 4.print 5. exit \n ";
        cin>>ch;
        int x;
        switch (ch)
        {
        case 1:
            
             cin>>x;
             s.insert(x);
            
            break;
        case 2:
            
             cin>>x;
             itr=s.find(x);
             if(itr!=s.end())
                 s.erase(itr);
                break;
        case 3:
            
           
             cin>>x;
             itr=s.find(x);
             if(itr!=s.end())
                cout<<"found "<<endl;
            else
            {
                 cout<<"NOT Found";
            }
            break;
            case 4:
               for(const auto & i:s)
                  cout<<i<<" ";
                break;
            
        
        default:
           exit(0);
            break;
        }
    }
    return 0;
}