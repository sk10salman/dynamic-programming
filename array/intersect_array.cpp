class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans ;
 unordered_set<int> st1 , st2 ;
    
    
    for( int i = 0 ; i<nums1.size() ; i++)
    {
        st1.insert( nums1[i] ) ;
    }
    
    for( int i = 0 ; i<nums2.size() ; i++)
    {
        st2.insert( nums2[i] ) ;
    }        
    
    
    for( auto it = st1.begin() ; it != st1.end() ; it++ )
    {
        if ( st2.find( *it ) != st2.end() )
            ans.push_back( *it ) ;
    }
    
    
    return ans ;
    

    }
};


/*
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
