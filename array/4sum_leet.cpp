class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int count=0;
        map<int,int>mp1,mp2;
        for(int i=0;i<A.size();i++)
            for(int j=0;j<B.size();j++)
                mp1[A[i]+B[j]]++;
                for(int k=0;k<C.size();k++)
                    for(int l=0;l<D.size();l++)
                        mp2[C[k]+D[l]]++;
        for(auto i=mp1.begin();i!=mp1.end();i++)
        {
            count += (i->second*mp2[0+(-(i->first))]);
        }
        return count;
    }
};

/*
Input:
A = [ 1, 2]
B = [-2,-1]
C = [-1, 2]
D = [ 0, 2]

Output:
2

Explanation:
The two tuples are:
1. (0, 0, 0, 1) -> A[0] + B[0] + C[0] + D[1] = 1 + (-2) + (-1) + 2 = 0
2. (1, 1, 0, 0) -> A[1] + B[1] + C[0] + D[0] = 2 + (-1) + (-1) + 0 = 0

*/
