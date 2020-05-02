class Solution {
public:
    int maxProfit(vector<int>& prices) {
        priority_queue<int,vector<int>,greater<int>>p;
        int s=0;
        p.push(prices[0]);
        for(int i=1;i<prices.size();i++)
        {
           while(prices[i]<p.top() && p.size()!=0)
           {
               p.pop();
           }
            if(prices[i]>=p.top())
            {
                s += prices[i]-p.top();
                p.pop();
            }
            p.push(prices[i]);
        }
        return s;
    }
};
