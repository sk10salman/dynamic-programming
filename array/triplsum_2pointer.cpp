bool findTriplets(int arr[], int n)
{ 
    sort(arr,arr+n);
    for(int i=0;i<n-3;i++)
     {
         int k=i+1;
         int j=n-1;
        
        while(k<j)
    {
        int m= arr[i]+arr[j]+arr[k];
        if(m==0)
         return true;
        else if(m<0)
           k++;
          else
           j--;
    }
     }
     return false;
  
}
