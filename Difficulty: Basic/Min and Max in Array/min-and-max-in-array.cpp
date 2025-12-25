class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int>ans;
        int n=arr.size();
        int mini=arr[0];
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=mini)
            {
                mini=arr[i];
                //ans.push_back(arr[i]);
            }
            if(arr[i]>=maxi)
            {
                maxi=arr[i];
               // ans.push_back(arr[i]);
            }
        }
        ans.push_back(mini);
         ans.push_back(maxi);
        return ans;
    }
};