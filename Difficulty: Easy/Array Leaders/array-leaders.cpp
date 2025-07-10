

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int i;
        vector<int>result;
        int maxi=0;
        int n=arr.size();
        for(i=n-1;i>=0;i--)
        {
          if(arr[i]>=maxi)
            {
                 result.push_back(arr[i]);  
             }
             maxi=max(maxi,arr[i]);
           }
          reverse(result.begin(),result.end());
        return result;
        
    }
};