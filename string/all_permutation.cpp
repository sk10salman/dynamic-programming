class Solution {
public:
   int fact(int n)
   {
       if(n<=1)
        return 1;
       return n*fact(n-1);
   }
    void findPermutations(vector<vector<int>> &v,int & l,int a[], int n) 
{ 
  
    // Sort the given array 
    sort(a, a + n); 
  
    // Find all possible permutations 
   
    do { 
        for(int i=0;i<n;i++)
            v[l].push_back(a[i]);
        l++;
    } while (next_permutation(a, a + n)); 
}
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        int a[n];
         vector<vector<int>>v(fact(n));
    int l=0;
        for(int i=0;i<n;i++)
              a[i]=nums[i];
          findPermutations(v,l,a,n);
        return v;
        
    }
};
