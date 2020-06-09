class Solution {
public:
    int value(char c)
    {
        int x;
            if(c=='I')
              x=1;
            if(c=='V')
              x=5;
            if(c=='X')
              x=10;
            if(c=='L')
              x=50;
            if(c=='C')
              x=100;
            if(c=='D')
              x=500;
            if(c=='M')
              x=1000;
        return x;
    }
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.size();i++)
        {
            if(value(s[i+1]) > value(s[i]))
                num-=value(s[i]);
            else
                num+=value(s[i]);    
        }
        return num;
    }
};
